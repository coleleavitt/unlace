# Fixture for calleeargsmsvc's int3 rule (unlace-cli/tests/calleeargsmsvc_cli.rs): the
# calleeargsmsvc_pe_i386.s stream chain, with put_text calling fail (a callee that returns
# as far as the walk can tell, like _CxxThrowException) followed by int3 and another
# function, the MSVC layout after a call that does not return. Build (clang 22, lld-link 22):
#   clang --target=i686-pc-windows-msvc -c calleeargsmsvc_int3_pe_i386.s -o calleeargsmsvc_int3_pe_i386.obj
#   lld-link /nologo /dll /noentry /nodefaultlib /base:0x10000000 /fixed /safeseh:no \
#     /Brepro /export:report /out:calleeargsmsvc_int3_pe_i386.dll calleeargsmsvc_int3_pe_i386.obj
        .intel_syntax noprefix

        .data
        .p2align 2
___security_cookie:
        .long 0xbb40e64e

        .section .rdata,"dr"
msg:    .asciz "frame error = "

        .text
        .globl _report
        .p2align 4
# void __cdecl report(unsigned err, struct sink *s) { *put_text(s, msg) << err; }
_report:
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, offset msg
        call put_text
        mov ecx, eax
        call put_uint
        pop ebp
        ret

        .p2align 4
# struct sink *__fastcall put_text(struct sink *s, const char *text)
put_text:
        push ebp
        mov ebp, esp
        push -1
        mov eax, offset handler
        push eax
        mov eax, dword ptr fs:[0]
        push eax
        mov eax, dword ptr [___security_cookie]
        xor eax, ebp
        push eax
        lea eax, [ebp - 0xc]
        mov dword ptr fs:[0], eax
        test ecx, ecx
        jnz 7f
        call fail
        int3
copy_ctor:
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret 4
7:
        mov eax, ecx
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret

        .p2align 4
# struct sink *__thiscall put_uint(struct sink *s, unsigned v)
put_uint:
        mov eax, ecx
        mov edx, dword ptr [esp + 4]
        mov dword ptr [eax + 4], edx
        ret 4

        .p2align 4
handler:
        xor eax, eax
        ret

        .p2align 4
# void __cdecl fail(void): _CxxThrowException's shape to the walk (it returns)
fail:
        xor eax, eax
        ret
