# Fixture for the PE _initterm oracle's static-CRT arm (unlace-cli/tests/initterm_cli.rs):
# the CRT is linked in, so _initterm is a local function the startup calls directly
# after the two pushes of a NULL-first table of initializers. Build (clang 22, lld-link 22):
#   clang --target=i686-pc-windows-msvc -c initterm_static_pe_i386.s -o initterm_static_pe_i386.obj
#   lld-link /nologo /entry:start /subsystem:console /nodefaultlib /base:0x400000 /fixed \
#     /safeseh:no /Brepro /out:initterm_static_pe_i386.exe initterm_static_pe_i386.obj
# (each push imm32 is spelled .byte 0x68 / .long: the integrated assembler has no COFF
# i386 relocation for push offset)
        .intel_syntax noprefix

        .data
        .p2align 2
counter: .long 0
object1: .long 0, 0

        .section .rdata,"dr"
        .p2align 2
xc_a:   .long 0
        .long construct1
        .long 0
        .long construct2
xc_z:   .long 0
        .long 0x00401070

        .text
        .globl _start
        .p2align 4
_start:
        .byte 0x68
        .long xc_z
        .byte 0x68
        .long xc_a
        call initterm
        pop ecx
        pop ecx
        .byte 0x68
        .long xc_z + 8
        .byte 0x68
        .long xc_z + 4
        call initterm
        pop ecx
        pop ecx
        mov eax, dword ptr [counter]
        ret

        .p2align 4
# void __cdecl _initterm(_PVFV *first, _PVFV *last)
initterm:
        push esi
        push edi
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esp + 0x10]
1:
        cmp esi, edi
        je 3f
        mov eax, dword ptr [esi]
        test eax, eax
        jz 2f
        call eax
2:
        add esi, 4
        jmp 1b
3:
        pop edi
        pop esi
        ret

        .p2align 4
construct1:
        mov ecx, offset object1
        mov dword ptr [ecx], 7
        ret

        .p2align 4
construct2:
        mov ecx, offset counter
        inc dword ptr [ecx]
        ret

        .p2align 4
not_an_initializer:
        mov ecx, offset counter
        dec dword ptr [ecx]
        ret
