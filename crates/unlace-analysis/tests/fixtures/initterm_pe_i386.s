# Fixture for the PE _initterm oracle (unlace-cli/tests/initterm_cli.rs): the MSVC
# dynamic-CRT startup hands its initializer tables to the imported _initterm_e and
# _initterm, and each initializer is reached through the table alone. Build (clang 22,
# llvm-dlltool 22, lld-link 22):
#   llvm-dlltool -m i386 -d initterm_crt.def -l initterm_crt.lib
#   clang --target=i686-pc-windows-msvc -c initterm_pe_i386.s -o initterm_pe_i386.obj
# (each push imm32 is spelled .byte 0x68 / .long: the integrated assembler has no
# COFF i386 relocation for push offset)
#   lld-link /nologo /entry:start /subsystem:console /nodefaultlib /base:0x400000 /fixed \
#     /safeseh:no /Brepro /out:initterm_pe_i386.exe initterm_pe_i386.obj initterm_crt.lib
        .intel_syntax noprefix

        .data
        .p2align 2
counter: .long 0
object1: .long 0, 0
object2: .long 0, 0

        .section .rdata,"dr"
        .p2align 2
xi_a:   .long 0
        .long init_c
xi_z:   .long 0
xc_a:   .long 0
        .long construct1
        .long construct2
        .long 0
        .long construct3
xc_z:   .long 0

        .text
        .globl _start
        .p2align 4
_start:
        .byte 0x68
        .long xi_z
        .byte 0x68
        .long xi_a
        call dword ptr [__imp___initterm_e]
        pop ecx
        pop ecx
        .byte 0x68
        .long xc_z
        .byte 0x68
        .long xc_a
        call dword ptr [__imp___initterm]
        pop ecx
        pop ecx
        mov eax, dword ptr [counter]
        ret

        .p2align 4
init_c:
        mov dword ptr [counter], 1
        xor eax, eax
        ret

        .p2align 4
construct1:
        mov ecx, offset object1
        jmp object_ctor

        .p2align 4
construct2:
        mov ecx, offset object2
        jmp object_ctor

        .p2align 4
construct3:
        mov ecx, offset counter
        inc dword ptr [ecx]
        ret

        .p2align 4
object_ctor:
        mov dword ptr [ecx], 7
        mov dword ptr [ecx + 4], 9
        ret
