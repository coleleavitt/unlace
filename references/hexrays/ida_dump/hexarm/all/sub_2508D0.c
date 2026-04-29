// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2508D0
// Name:           sub_2508D0
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2508D0 push    rbp
//   0x2508D1 mov     ebp, ecx
//   0x2508D3 push    rbx
//   0x2508D4 mov     rbx, rdi
//   0x2508D7 sub     rsp, 8
//   0x2508DB test    rdx, rdx
//   0x2508DE jz      short loc_250928
//   0x2508E0 mov     r8d, [rdi+158h]
//   0x2508E7 lea     eax, [r8+1]
//   0x2508EB mov     [rdi+158h], eax
//   0x2508F1 cmp     eax, 3FFh
//   0x2508F6 jg      loc_4A4D4
//   0x2508FC mov     rax, [rbx+130h]
//   0x250903 movsxd  rdi, esi
//   0x250906 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x25090A ja      def_250921; jumptable 0000000000250921 default case
//   0x250910 mov     eax, [rax+rdi*4]
//   0x250913 lea     rcx, jpt_250921
//   0x25091A movsxd  rax, ds:(jpt_250921 - 426924h)[rcx+rax*4]
//   0x25091E add     rax, rcx
//   0x250921 jmp     rax; switch jump
//   0x250923 align 8
//   0x250928 test    cl, cl
//   0x25092A jz      loc_250B2F
//   0x250930 call    sub_250390
//   0x250935 test    rax, rax
//   0x250938 setnz   dl
//   0x25093B cmp     bpl, dl
//   0x25093E jnz     loc_250AFB
//   0x250944 add     rsp, 8
//   0x250948 pop     rbx
//   0x250949 pop     rbp
//   0x25094A retn
//   0x25094B align 10h
//   0x250950 mov     rdi, rbx; jumptable 0000000000250921 cases 2-4,16,17
//   0x250953 call    sub_251B20
//   0x250958 mov     eax, [rbx+158h]
//   0x25095E xor     edx, edx
//   0x250960 lea     r8d, [rax-1]
//   0x250964 xor     eax, eax
//   0x250966 nop     word ptr [rax+rax+00000000h]
//   0x250970 mov     [rbx+158h], r8d
//   0x250977 jmp     short loc_25093B
//   0x250979 align 20h
//   0x250980 mov     rdi, rbx; jumptable 0000000000250921 cases 6-9
//   0x250983 call    sub_250710
//   0x250988 mov     ecx, [rbx+158h]
//   0x25098E test    rax, rax
//   0x250991 lea     r8d, [rcx-1]
//   0x250995 setnz   dl
//   0x250998 jmp     short loc_250970
//   0x25099A align 20h
//   0x2509A0 mov     rdi, rbx; jumptable 0000000000250921 cases 10-12
//   0x2509A3 call    sub_251F20
//   0x2509A8 mov     eax, [rbx+158h]
//   0x2509AE xor     edx, edx
//   0x2509B0 lea     r8d, [rax-1]
//   0x2509B4 xor     eax, eax
//   0x2509B6 jmp     short loc_250970
//   0x2509B8 align 20h
//   0x2509C0 mov     rdi, rbx; jumptable 0000000000250921 cases 13,14
//   0x2509C3 call    sub_250B50
//   0x2509C8 mov     eax, [rbx+158h]
//   0x2509CE xor     edx, edx
//   0x2509D0 lea     r8d, [rax-1]
//   0x2509D4 xor     eax, eax
//   0x2509D6 jmp     short loc_250970
//   0x2509D8 align 20h
//   0x2509E0 mov     rdi, rbx; jumptable 0000000000250921 case 5
//   0x2509E3 call    sub_250DC0
//   0x2509E8 mov     eax, [rbx+158h]
//   0x2509EE xor     edx, edx
//   0x2509F0 lea     r8d, [rax-1]
//   0x2509F4 xor     eax, eax
//   0x2509F6 jmp     loc_250970
//   0x2509FB align 20h
//   0x250A00 mov     rdi, rbx; jumptable 0000000000250921 case 15
//   0x250A03 call    sub_2518E0
//   0x250A08 mov     eax, [rbx+158h]
//   0x250A0E xor     edx, edx
//   0x250A10 lea     r8d, [rax-1]
//   0x250A14 xor     eax, eax
//   0x250A16 jmp     loc_250970
//   0x250A1B align 20h
//   0x250A20 mov     rax, [rbx+0B0h]; jumptable 0000000000250921 case 0
//   0x250A27 mov     rax, [rax+8]
//   0x250A2B cmp     [rax+40h], esi
//   0x250A2E jg      short loc_250A98
//   0x250A30 mov     rdx, [rbx+0F0h]
//   0x250A37 test    rdx, rdx
//   0x250A3A jz      short loc_250A52
//   0x250A3C mov     rax, [rdx]
//   0x250A3F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x250A43 jz      loc_250AC9
//   0x250A49 test    byte ptr [rax], 2
//   0x250A4C jz      loc_250AD8
//   0x250A52 mov     rax, cs:under_debugger_ptr
//   0x250A59 cmp     byte ptr [rax], 0
//   0x250A5C jnz     loc_4A4D2
//   0x250A62 mov     edi, 0C4C7h
//   0x250A67 call    sub_3835A0
//   0x250A6C align 10h
//   0x250A70 movzx   ecx, bpl; jumptable 0000000000250921 case 1
//   0x250A74 mov     rdi, rbx
//   0x250A77 call    sub_2519D0
//   0x250A7C mov     ecx, [rbx+158h]
//   0x250A82 test    rax, rax
//   0x250A85 lea     r8d, [rcx-1]
//   0x250A89 setnz   dl
//   0x250A8C jmp     loc_250970
//   0x250A91 align 8
//   0x250A98 mov     rax, [rax+210h]
//   0x250A9F movzx   ecx, bpl
//   0x250AA3 mov     rsi, [rax+rdi*8]
//   0x250AA7 mov     rdi, rbx
//   0x250AAA call    sub_24FE70
//   0x250AAF mov     ecx, [rbx+158h]
//   0x250AB5 test    rax, rax
//   0x250AB8 lea     r8d, [rcx-1]
//   0x250ABC setnz   dl
//   0x250ABF jmp     loc_250970
//   0x250AC4 cmp     rax, rdx
//   0x250AC7 jz      short loc_250A52
//   0x250AC9 xor     edx, edx
//   0x250ACB xor     eax, eax
//   0x250ACD jmp     loc_250970
//   0x250AD2 align 8
//   0x250AD8 cmp     [rax+18h], esi
//   0x250ADB jle     short loc_250AF0
//   0x250ADD mov     rax, [rax+8]
//   0x250AE1 jmp     loc_250A49
//   0x250AE6 align 10h
//   0x250AF0 jge     short loc_250AC4
//   0x250AF2 mov     rax, [rax+10h]
//   0x250AF6 jmp     loc_250A49
//   0x250AFB mov     rax, cs:under_debugger_ptr
//   0x250B02 cmp     byte ptr [rax], 0
//   0x250B05 jnz     loc_4A4D2
//   0x250B0B mov     edi, 0C4C9h
//   0x250B10 call    sub_3835A0
//   0x250B15 mov     rax, cs:under_debugger_ptr; jumptable 0000000000250921 default case
//   0x250B1C cmp     byte ptr [rax], 0
//   0x250B1F jnz     loc_4A4D2
//   0x250B25 mov     edi, 0C4C8h
//   0x250B2A call    sub_3835A0
//   0x250B2F mov     rax, cs:under_debugger_ptr
//   0x250B36 cmp     byte ptr [rax], 0
//   0x250B39 jnz     loc_4A4D2
//   0x250B3F mov     edi, 0C4C6h
//   0x250B44 call    sub_3835A0
// ============================================================

void sub_2508D0(/* signature unknown */)
{
    // see disassembly above
}

