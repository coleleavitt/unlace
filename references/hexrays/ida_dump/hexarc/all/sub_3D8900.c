// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D8900
// Name:           sub_3D8900
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D8900 push    rbp
//   0x3D8901 xor     eax, eax
//   0x3D8903 mov     rbp, rsi
//   0x3D8906 push    rbx
//   0x3D8907 mov     rbx, rdi
//   0x3D890A mov     edi, 3Dh ; '='
//   0x3D890F sub     rsp, 8
//   0x3D8913 mov     rdx, cs:callui_ptr
//   0x3D891A call    qword ptr [rdx]
//   0x3D891C mov     rdx, [rbx+828h]
//   0x3D8923 mov     rcx, [rbx+830h]
//   0x3D892A lea     rcx, [rdx+rcx*8]
//   0x3D892E cmp     rdx, rcx
//   0x3D8931 jz      short loc_3D8956
//   0x3D8933 nop     word ptr [rax+rax+00000000h]
//   0x3D893E xchg    ax, ax
//   0x3D8940 mov     rbx, [rdx]
//   0x3D8943 test    rbx, rbx
//   0x3D8946 jz      short loc_3D894D
//   0x3D8948 cmp     rax, [rbx]
//   0x3D894B jz      short loc_3D8960
//   0x3D894D add     rdx, 8
//   0x3D8951 cmp     rcx, rdx
//   0x3D8954 jnz     short loc_3D8940
//   0x3D8956 add     rsp, 8
//   0x3D895A xor     eax, eax
//   0x3D895C pop     rbx
//   0x3D895D pop     rbp
//   0x3D895E retn
//   0x3D895F align 20h
//   0x3D8960 mov     eax, [rbp+0]
//   0x3D8963 cmp     eax, 2Fh ; '/'
//   0x3D8966 ja      short loc_3D89A0
//   0x3D8968 mov     edx, eax
//   0x3D896A add     eax, 8
//   0x3D896D add     rdx, [rbp+10h]
//   0x3D8971 mov     [rbp+0], eax
//   0x3D8974 mov     rdi, [rdx]; s1
//   0x3D8977 lea     rsi, aJumpenter; "JumpEnter"
//   0x3D897E call    _strcmp
//   0x3D8983 test    eax, eax
//   0x3D8985 jnz     short loc_3D8956
//   0x3D8987 mov     rdi, rbx
//   0x3D898A call    sub_3D8860
//   0x3D898F add     rsp, 8
//   0x3D8993 movzx   eax, al
//   0x3D8996 pop     rbx
//   0x3D8997 pop     rbp
//   0x3D8998 retn
//   0x3D8999 align 20h
//   0x3D89A0 mov     rdx, [rbp+8]
//   0x3D89A4 lea     rax, [rdx+8]
//   0x3D89A8 mov     [rbp+8], rax
//   0x3D89AC jmp     short loc_3D8974
// ============================================================

void sub_3D8900(/* signature unknown */)
{
    // see disassembly above
}

