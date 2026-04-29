// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x250510
// Name:           sub_250510
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x250510 push    rbp
//   0x250511 mov     ebp, ecx
//   0x250513 push    rbx
//   0x250514 mov     rbx, rdi
//   0x250517 sub     rsp, 8
//   0x25051B test    rdx, rdx
//   0x25051E jz      short loc_250568
//   0x250520 mov     r8d, [rdi+158h]
//   0x250527 lea     eax, [r8+1]
//   0x25052B mov     [rdi+158h], eax
//   0x250531 cmp     eax, 3FFh
//   0x250536 jg      loc_48520
//   0x25053C mov     rax, [rbx+130h]
//   0x250543 movsxd  rdi, esi
//   0x250546 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x25054A ja      def_250561; jumptable 0000000000250561 default case
//   0x250550 mov     eax, [rax+rdi*4]
//   0x250553 lea     rcx, jpt_250561
//   0x25055A movsxd  rax, ds:(jpt_250561 - 42B864h)[rcx+rax*4]
//   0x25055E add     rax, rcx
//   0x250561 jmp     rax; switch jump
//   0x250563 align 8
//   0x250568 test    cl, cl
//   0x25056A jz      loc_25076F
//   0x250570 call    sub_24FFD0
//   0x250575 test    rax, rax
//   0x250578 setnz   dl
//   0x25057B cmp     bpl, dl
//   0x25057E jnz     loc_25073B
//   0x250584 add     rsp, 8
//   0x250588 pop     rbx
//   0x250589 pop     rbp
//   0x25058A retn
//   0x25058B align 10h
//   0x250590 mov     rdi, rbx; jumptable 0000000000250561 cases 2-4,16,17
//   0x250593 call    sub_251760
//   0x250598 mov     eax, [rbx+158h]
//   0x25059E xor     edx, edx
//   0x2505A0 lea     r8d, [rax-1]
//   0x2505A4 xor     eax, eax
//   0x2505A6 nop     word ptr [rax+rax+00000000h]
//   0x2505B0 mov     [rbx+158h], r8d
//   0x2505B7 jmp     short loc_25057B
//   0x2505B9 align 20h
//   0x2505C0 mov     rdi, rbx; jumptable 0000000000250561 cases 6-9
//   0x2505C3 call    sub_250350
//   0x2505C8 mov     ecx, [rbx+158h]
//   0x2505CE test    rax, rax
//   0x2505D1 lea     r8d, [rcx-1]
//   0x2505D5 setnz   dl
//   0x2505D8 jmp     short loc_2505B0
//   0x2505DA align 20h
//   0x2505E0 mov     rdi, rbx; jumptable 0000000000250561 cases 10-12
//   0x2505E3 call    sub_251B60
//   0x2505E8 mov     eax, [rbx+158h]
//   0x2505EE xor     edx, edx
//   0x2505F0 lea     r8d, [rax-1]
//   0x2505F4 xor     eax, eax
//   0x2505F6 jmp     short loc_2505B0
//   0x2505F8 align 20h
//   0x250600 mov     rdi, rbx; jumptable 0000000000250561 cases 13,14
//   0x250603 call    sub_250790
//   0x250608 mov     eax, [rbx+158h]
//   0x25060E xor     edx, edx
//   0x250610 lea     r8d, [rax-1]
//   0x250614 xor     eax, eax
//   0x250616 jmp     short loc_2505B0
//   0x250618 align 20h
//   0x250620 mov     rdi, rbx; jumptable 0000000000250561 case 5
//   0x250623 call    sub_250A00
//   0x250628 mov     eax, [rbx+158h]
//   0x25062E xor     edx, edx
//   0x250630 lea     r8d, [rax-1]
//   0x250634 xor     eax, eax
//   0x250636 jmp     loc_2505B0
//   0x25063B align 20h
//   0x250640 mov     rdi, rbx; jumptable 0000000000250561 case 15
//   0x250643 call    sub_251520
//   0x250648 mov     eax, [rbx+158h]
//   0x25064E xor     edx, edx
//   0x250650 lea     r8d, [rax-1]
//   0x250654 xor     eax, eax
//   0x250656 jmp     loc_2505B0
//   0x25065B align 20h
//   0x250660 mov     rax, [rbx+0B0h]; jumptable 0000000000250561 case 0
//   0x250667 mov     rax, [rax+8]
//   0x25066B cmp     [rax+40h], esi
//   0x25066E jg      short loc_2506D8
//   0x250670 mov     rdx, [rbx+0F0h]
//   0x250677 test    rdx, rdx
//   0x25067A jz      short loc_250692
//   0x25067C mov     rax, [rdx]
//   0x25067F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x250683 jz      loc_250709
//   0x250689 test    byte ptr [rax], 2
//   0x25068C jz      loc_250718
//   0x250692 mov     rax, cs:under_debugger_ptr
//   0x250699 cmp     byte ptr [rax], 0
//   0x25069C jnz     loc_4851E
//   0x2506A2 mov     edi, 0C4C7h
//   0x2506A7 call    sub_383060
//   0x2506AC align 10h
//   0x2506B0 movzx   ecx, bpl; jumptable 0000000000250561 case 1
//   0x2506B4 mov     rdi, rbx
//   0x2506B7 call    sub_251610
//   0x2506BC mov     ecx, [rbx+158h]
//   0x2506C2 test    rax, rax
//   0x2506C5 lea     r8d, [rcx-1]
//   0x2506C9 setnz   dl
//   0x2506CC jmp     loc_2505B0
//   0x2506D1 align 8
//   0x2506D8 mov     rax, [rax+210h]
//   0x2506DF movzx   ecx, bpl
//   0x2506E3 mov     rsi, [rax+rdi*8]
//   0x2506E7 mov     rdi, rbx
//   0x2506EA call    sub_24FAB0
//   0x2506EF mov     ecx, [rbx+158h]
//   0x2506F5 test    rax, rax
//   0x2506F8 lea     r8d, [rcx-1]
//   0x2506FC setnz   dl
//   0x2506FF jmp     loc_2505B0
//   0x250704 cmp     rax, rdx
//   0x250707 jz      short loc_250692
//   0x250709 xor     edx, edx
//   0x25070B xor     eax, eax
//   0x25070D jmp     loc_2505B0
//   0x250712 align 8
//   0x250718 cmp     [rax+18h], esi
//   0x25071B jle     short loc_250730
//   0x25071D mov     rax, [rax+8]
//   0x250721 jmp     loc_250689
//   0x250726 align 10h
//   0x250730 jge     short loc_250704
//   0x250732 mov     rax, [rax+10h]
//   0x250736 jmp     loc_250689
//   0x25073B mov     rax, cs:under_debugger_ptr
//   0x250742 cmp     byte ptr [rax], 0
//   0x250745 jnz     loc_4851E
//   0x25074B mov     edi, 0C4C9h
//   0x250750 call    sub_383060
//   0x250755 mov     rax, cs:under_debugger_ptr; jumptable 0000000000250561 default case
//   0x25075C cmp     byte ptr [rax], 0
//   0x25075F jnz     loc_4851E
//   0x250765 mov     edi, 0C4C8h
//   0x25076A call    sub_383060
//   0x25076F mov     rax, cs:under_debugger_ptr
//   0x250776 cmp     byte ptr [rax], 0
//   0x250779 jnz     loc_4851E
//   0x25077F mov     edi, 0C4C6h
//   0x250784 call    sub_383060
// ============================================================

void sub_250510(/* signature unknown */)
{
    // see disassembly above
}

