# Fixture for the relocation-bounded MSVC vftable walk (unlace-cli/tests/vftablerelocs_cli.rs):
# class Foo's two-slot vftable is followed by a data word that holds a .text address the
# loader does not relocate (a constant, as a UTF-16 string after the last vftable of a large
# .text reads). Build (clang 22, lld-link 22):
#   clang --target=i686-pc-windows-msvc -c vftablerelocs_pe_i386.s -o vftablerelocs_pe_i386.obj
#   lld-link /nologo /dll /noentry /nodefaultlib /base:0x10000000 /safeseh:no /Brepro \
#     /export:make /out:vftablerelocs_pe_i386.dll vftablerelocs_pe_i386.obj
        .intel_syntax noprefix

        .text
        .globl _make
        .p2align 4
# Foo *__cdecl make(Foo *p) { p->vptr = &Foo::vftable; return p; }
_make:
        mov eax, dword ptr [esp + 4]
        mov dword ptr [eax], offset foo_vftable
        ret

        .p2align 4
foo_get:
        mov eax, dword ptr [ecx + 4]
        ret

        .p2align 4
foo_set:
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 4], eax
        ret 4

        .p2align 4
type_info_dtor:
        ret

        .section .rdata,"dr"
        .p2align 2
type_info_vftable:
        .long type_info_dtor
        .long 0
foo_td:
        .long type_info_vftable
        .long 0
        .asciz ".?AVFoo@@"
        .p2align 2
type_info_td:
        .long type_info_vftable
        .long 0
        .asciz ".?AVtype_info@@"
        .p2align 2
foo_bcd:
        .long foo_td
        .long 0
        .long 0, -1, 0
        .long 0x40
        .long foo_chd
foo_bca:
        .long foo_bcd
        .long 0
foo_chd:
        .long 0
        .long 0
        .long 1
        .long foo_bca
foo_col:
        .long 0
        .long 0
        .long 0
        .long foo_td
        .long foo_chd
        .long foo_col
foo_vftable:
        .long foo_get
        .long foo_set
        .long 0x10001024
        .long 0
