// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B6640
// Name:           _ZNK13GraphRenderer12find_item_atEP16selection_item_tP19renderer_info_pos_tP12node_geoms_tP19interactive_graph_tRKN2QT6QPointEbbE13item_finder_t_::vfunc_3
// Function size:  536 bytes (143 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B6640 push    r15
//   0x2B6642 mov     r15, rsi
//   0x2B6645 push    r14
//   0x2B6647 push    r13
//   0x2B6649 push    r12
//   0x2B664B push    rbp
//   0x2B664C push    rbx
//   0x2B664D mov     rbx, rdi
//   0x2B6650 sub     rsp, 28h
//   0x2B6654 mov     rax, [rdi+10h]
//   0x2B6658 mov     [rsp+58h+var_50], rsi
//   0x2B665D mov     rdi, [rax+10h]
//   0x2B6661 mov     r12, fs:28h
//   0x2B666A mov     [rsp+58h+var_40], r12
//   0x2B666F mov     r12, rdx
//   0x2B6672 add     rdi, 180h
//   0x2B6679 call    sub_1EA6C0
//   0x2B667E mov     rbp, rax
//   0x2B6681 mov     rsi, [r12+18h]
//   0x2B6686 test    rsi, rsi
//   0x2B6689 jz      loc_2B6750
//   0x2B668F movsd   xmm2, qword ptr [rax]
//   0x2B6693 movsd   xmm6, qword ptr [rax+8]
//   0x2B6698 xor     ecx, ecx
//   0x2B669A movsd   xmm5, qword ptr [rax+10h]
//   0x2B669F mov     r9, [r12+10h]
//   0x2B66A4 xor     eax, eax
//   0x2B66A6 mov     r8d, [rbx+24h]
//   0x2B66AA mov     edi, [rbx+20h]
//   0x2B66AD movsd   xmm4, cs:dbl_5DC300
//   0x2B66B5 movsd   xmm3, cs:qword_5DBF68
//   0x2B66BD jmp     short loc_2B6711
//   0x2B66BF align 20h
//   0x2B66C0 cvttsd2si r10d, xmm5
//   0x2B66C5 sub     eax, r10d
//   0x2B66C8 cvttsd2si r10d, xmm6
//   0x2B66CD sub     edx, r10d
//   0x2B66D0 mov     r10d, edi
//   0x2B66D3 pxor    xmm0, xmm0
//   0x2B66D7 pxor    xmm1, xmm1
//   0x2B66DB sub     r10d, edx
//   0x2B66DE mov     edx, r8d
//   0x2B66E1 sub     edx, eax
//   0x2B66E3 cvtsi2sd xmm0, r10d
//   0x2B66E8 cvtsi2sd xmm1, edx
//   0x2B66EC mulsd   xmm0, xmm0
//   0x2B66F0 mulsd   xmm1, xmm1
//   0x2B66F4 addsd   xmm0, xmm1
//   0x2B66F8 sqrtsd  xmm0, xmm0
//   0x2B66FC comisd  xmm3, xmm0
//   0x2B6700 ja      loc_2B67B0
//   0x2B6706 add     ecx, 1
//   0x2B6709 movsxd  rax, ecx
//   0x2B670C cmp     rax, rsi
//   0x2B670F jnb     short loc_2B6750
//   0x2B6711 ucomisd xmm2, xmm4
//   0x2B6715 lea     rax, [r9+rax*8]
//   0x2B6719 mov     edx, [rax]
//   0x2B671B mov     eax, [rax+4]
//   0x2B671E jp      short loc_2B6722
//   0x2B6720 jz      short loc_2B66C0
//   0x2B6722 pxor    xmm0, xmm0
//   0x2B6726 cvtsi2sd xmm0, eax
//   0x2B672A subsd   xmm0, xmm5
//   0x2B672E mulsd   xmm0, xmm2
//   0x2B6732 cvttsd2si eax, xmm0
//   0x2B6736 pxor    xmm0, xmm0
//   0x2B673A cvtsi2sd xmm0, edx
//   0x2B673E subsd   xmm0, xmm6
//   0x2B6742 mulsd   xmm0, xmm2
//   0x2B6746 cvttsd2si edx, xmm0
//   0x2B674A jmp     short loc_2B66D0
//   0x2B674C align 10h
//   0x2B6750 cmp     byte ptr [rbx+49h], 0
//   0x2B6754 jz      short loc_2B6786
//   0x2B6756 mov     rax, [rbx+10h]
//   0x2B675A mov     r12, [rax+1B8h]
//   0x2B6761 test    r12, r12
//   0x2B6764 jz      short loc_2B676B
//   0x2B6766 mov     r12, [r12+8]
//   0x2B676B lea     r13, [rbx+68h]
//   0x2B676F lea     r14, [rsp+58h+var_50]
//   0x2B6774 mov     rdi, r12
//   0x2B6777 mov     rdx, r14
//   0x2B677A mov     rsi, r13
//   0x2B677D call    sub_2B2B40
//   0x2B6782 test    al, al
//   0x2B6784 jnz     short loc_2B67E0
//   0x2B6786 xor     eax, eax
//   0x2B6788 mov     rdx, [rsp+58h+var_40]
//   0x2B678D sub     rdx, fs:28h
//   0x2B6796 jnz     loc_2B6853
//   0x2B679C add     rsp, 28h
//   0x2B67A0 pop     rbx
//   0x2B67A1 pop     rbp
//   0x2B67A2 pop     r12
//   0x2B67A4 pop     r13
//   0x2B67A6 pop     r14
//   0x2B67A8 pop     r15
//   0x2B67AA retn
//   0x2B67AB align 10h
//   0x2B67B0 mov     rax, [rbx+30h]
//   0x2B67B4 test    rax, rax
//   0x2B67B7 jz      short loc_2B67D9
//   0x2B67B9 mov     byte ptr [rax], 0
//   0x2B67BC movq    xmm7, r15
//   0x2B67C1 mov     dword ptr [rax+4], 0FFFFFFFFh
//   0x2B67C8 pshufd  xmm7, xmm7, 0E5h
//   0x2B67CD mov     [rax+8], ecx
//   0x2B67D0 mov     [rax+0Ch], r15d
//   0x2B67D4 movd    dword ptr [rax+10h], xmm7
//   0x2B67D9 mov     eax, 1
//   0x2B67DE jmp     short loc_2B6788
//   0x2B67E0 sub     rsp, 8
//   0x2B67E4 mov     rdi, [rbx+10h]
//   0x2B67E8 mov     rdx, rbp
//   0x2B67EB mov     r9, r14
//   0x2B67EE lea     rax, [rsp+60h+var_44]
//   0x2B67F3 lea     r8, [rbx+20h]
//   0x2B67F7 mov     rcx, r13
//   0x2B67FA mov     rsi, r12
//   0x2B67FD push    rax
//   0x2B67FE call    sub_2B6340
//   0x2B6803 movsd   xmm1, cs:qword_5DBF68
//   0x2B680B pop     rax
//   0x2B680C pop     rdx
//   0x2B680D comisd  xmm1, xmm0
//   0x2B6811 jbe     loc_2B6786
//   0x2B6817 movsd   xmm1, qword ptr [rbx+60h]
//   0x2B681C comisd  xmm1, xmm0
//   0x2B6820 jbe     loc_2B6786
//   0x2B6826 mov     rax, [rbx+30h]
//   0x2B682A test    rax, rax
//   0x2B682D jz      short loc_2B683E
//   0x2B682F mov     byte ptr [rax], 0
//   0x2B6832 mov     qword ptr [rax+4], 0FFFFFFFFFFFFFFFFh
//   0x2B683A mov     [rax+0Ch], r15
//   0x2B683E mov     eax, [rsp+58h+var_44]
//   0x2B6842 mov     [rbx+54h], r15
//   0x2B6846 movsd   qword ptr [rbx+60h], xmm0
//   0x2B684B mov     [rbx+5Ch], eax
//   0x2B684E jmp     loc_2B6786
//   0x2B6853 call    ___stack_chk_fail
// ============================================================

void _ZNK13GraphRenderer12find_item_atEP16selection_item_tP19renderer_info_pos_tP12node_geoms_tP19interactive_graph_tRKN2QT6QPointEbbE13item_finder_t_::vfunc_3(/* signature unknown */)
{
    // see disassembly above
}

