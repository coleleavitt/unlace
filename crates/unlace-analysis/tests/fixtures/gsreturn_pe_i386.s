# MSVC /GS shape: an EBP frame, the cookie scrambled with EBP at entry, and a
# __security_check_cookie call before every return, after a call whose pop no
# code proves (an indirect __stdcall). Build (clang 22, lld-link 22):
#   clang --target=i686-pc-windows-msvc -c gsreturn_pe_i386.s -o gsreturn_pe_i386.obj
#   lld-link /nologo /dll /noentry /nodefaultlib /base:0x10000000 /fixed /safeseh:no \
#     /Brepro /export:relay /out:gsreturn_pe_i386.dll gsreturn_pe_i386.obj
        .intel_syntax noprefix

        .data
        .p2align 2
___security_cookie:
        .long 0xbb40e64e

        .text
        .globl _relay
        .p2align 4
# int __cdecl relay(int (__stdcall *send)(unsigned char *, unsigned),
#                   const unsigned char *src, unsigned len)
_relay:
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr [___security_cookie]
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        jnz 1f
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        call checkcookie
        mov esp, ebp
        pop ebp
        ret
1:
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        lea eax, [ebp - 0x14]
        push eax
        call copybytes
        add esp, 0xc
        lea eax, [ebp - 0x14]
        push dword ptr [ebp + 0x10]
        push eax
        call esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        call checkcookie
        mov esp, ebp
        pop ebp
        ret

        .p2align 4
# void __cdecl copybytes(unsigned char *dst, const unsigned char *src, unsigned n)
copybytes:
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        jz 3f
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x10]
        rep movsb
        pop edi
        pop esi
3:
        ret

        .p2align 4
# void __fastcall __security_check_cookie(uintptr_t cookie)
checkcookie:
        cmp ecx, dword ptr [___security_cookie]
        jne 2f
        ret
2:
        int3
