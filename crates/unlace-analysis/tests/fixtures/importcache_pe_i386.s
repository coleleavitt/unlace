# Fixture for importdata's function-import slots (unlace-cli/tests/importcache_cli.rs):
# MSVC /O2 caches an import's address in a frame slot before a loop that calls it
# (mov eax,[__imp_GetTickCount]; mov [ebp-4],eax; ... call [ebp-4]). Build (clang 22,
# llvm-dlltool 22, lld-link 22):
#   llvm-dlltool -m i386 -k -d importcache_k32.def -l importcache_k32.lib
#   clang --target=i686-pc-windows-msvc -c importcache_pe_i386.s -o importcache_pe_i386.obj
#   lld-link /nologo /dll /noentry /nodefaultlib /base:0x10000000 /fixed /safeseh:no \
#     /Brepro /export:elapsed /out:importcache_pe_i386.dll importcache_pe_i386.obj importcache_k32.lib
        .intel_syntax noprefix
        .text
        .globl _elapsed
        .p2align 4
# unsigned __cdecl elapsed(unsigned rounds, void (__cdecl *tick)(unsigned *))
_elapsed:
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        mov eax, dword ptr [__imp__GetTickCount@0]
        mov dword ptr [ebp - 4], eax
        call eax
        mov dword ptr [ebp - 8], eax
        mov ebx, dword ptr [ebp + 8]
1:
        test ebx, ebx
        jz 2f
        lea eax, [ebp - 8]
        push eax
        call dword ptr [ebp + 0xc]
        add esp, 4
        call dword ptr [ebp - 4]
        dec ebx
        jmp 1b
2:
        call dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 8]
        pop ebx
        mov esp, ebp
        pop ebp
        ret
