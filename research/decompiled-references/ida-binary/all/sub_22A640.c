// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x22A640
// Name:           sub_22A640
// Function size:  192 bytes (46 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x22A640 push    rbx; __int64
//   0x22A641 mov     ebx, edi
//   0x22A643 test    edi, edi
//   0x22A645 jz      short loc_22A688
//   0x22A647 lea     rdi, a01423Nomainmen; "@0:1423[]\nNOMAINMENU\nNOSTATUSBAR\nThr"...
//   0x22A64E call    sub_4A0300
//   0x22A653 test    rax, rax
//   0x22A656 jz      short loc_22A680
//   0x22A658 mov     rdx, [rax+958h]
//   0x22A65F xor     ecx, ecx
//   0x22A661 xor     esi, esi
//   0x22A663 mov     rdi, rax
//   0x22A666 mov     [rdx+0B4h], ebx
//   0x22A66C mov     edx, 7
//   0x22A671 pop     rbx
//   0x22A672 jmp     sub_4A4600
//   0x22A677 align 20h
//   0x22A680 pop     rbx
//   0x22A681 retn
//   0x22A682 align 8
//   0x22A688 mov     rcx, qword ptr cs:xmmword_8CC398
//   0x22A68F mov     rax, cs:qword_8CC390
//   0x22A696 lea     rdx, ds:0[rcx*8]
//   0x22A69E sub     rdx, rcx
//   0x22A6A1 lea     rdx, [rax+rdx*8]
//   0x22A6A5 cmp     rax, rdx
//   0x22A6A8 jz      short loc_22A6F1
//   0x22A6AA mov     rcx, rdx
//   0x22A6AD sub     rcx, rax
//   0x22A6B0 and     ecx, 8
//   0x22A6B3 jz      short loc_22A6E0
//   0x22A6B5 mov     byte ptr [rax+23h], 0
//   0x22A6B9 add     rax, 38h ; '8'
//   0x22A6BD cmp     rdx, rax
//   0x22A6C0 jz      short loc_22A6F1
//   0x22A6C2 nop     word ptr [rax+rax+00000000h]
//   0x22A6CD nop     word ptr [rax+rax+00000000h]
//   0x22A6D8 nop     dword ptr [rax+rax+00000000h]
//   0x22A6E0 mov     byte ptr [rax+23h], 0
//   0x22A6E4 add     rax, 70h ; 'p'
//   0x22A6E8 mov     byte ptr [rax-15h], 0
//   0x22A6EC cmp     rdx, rax
//   0x22A6EF jnz     short loc_22A6E0
//   0x22A6F1 mov     edi, 0FFFFFFFFh
//   0x22A6F6 call    sub_1E32C0
//   0x22A6FB jmp     loc_22A647
// ============================================================

void sub_22A640(/* signature unknown */)
{
    // see disassembly above
}

