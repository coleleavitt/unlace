// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E5560
// Name:           sub_1E5560
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E5560 push    r15
//   0x1E5562 push    r14
//   0x1E5564 push    r13
//   0x1E5566 push    r12
//   0x1E5568 push    rbp
//   0x1E5569 mov     rbp, rsi
//   0x1E556C push    rbx
//   0x1E556D mov     rbx, rdi
//   0x1E5570 sub     rsp, 0B8h
//   0x1E5577 mov     rax, [rdx]
//   0x1E557A movdqu  xmm3, xmmword ptr [rdx]
//   0x1E557E mov     rsi, fs:28h
//   0x1E5587 mov     [rsp+0E8h+var_40], rsi
//   0x1E558F mov     rsi, rcx
//   0x1E5592 lea     r13, [rsp+0E8h+var_A8]
//   0x1E5597 mov     r15, [rbp+0]
//   0x1E559B movzx   r14d, byte ptr [rdx+8]
//   0x1E55A0 mov     rdi, r13
//   0x1E55A3 mov     [rsp+0E8h+var_E0], rax
//   0x1E55A8 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E55AD call    sub_312C40
//   0x1E55B2 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E55B7 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E55BC mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E55C1 mov     rax, r12
//   0x1E55C4 add     r12, rdi
//   0x1E55C7 cmp     r14b, 5
//   0x1E55CB jnz     short loc_1E55E7
//   0x1E55CD mov     rdx, [rbx]
//   0x1E55D0 mov     rdx, [rdx+5E0h]
//   0x1E55D7 mov     rdx, [rdx+60h]
//   0x1E55DB movzx   esi, byte ptr [rdx+91h]
//   0x1E55E2 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E55E7 cmp     r15, [rbx+8]
//   0x1E55EB jz      loc_1E579E
//   0x1E55F1 lea     rcx, [r15+18h]
//   0x1E55F5 cmp     [r15+20h], r14b
//   0x1E55F9 jnz     loc_1E579E
//   0x1E55FF cmp     [r15+18h], r12
//   0x1E5603 jge     loc_1E579E
//   0x1E5609 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E560D mov     rsi, [r15+18h]
//   0x1E5611 mov     r9, [rsp+0E8h+var_E0]
//   0x1E5616 mov     [rsp+0E8h+var_C0], rdi
//   0x1E561B mov     rdx, rdi
//   0x1E561E add     rdi, rsi
//   0x1E5621 cmp     rsi, r9
//   0x1E5624 jl      loc_1E5C68
//   0x1E562A jg      loc_1E5CF8
//   0x1E5630 cmp     edx, eax
//   0x1E5632 jg      loc_1E5DA6
//   0x1E5638 jge     loc_1E5C12
//   0x1E563E mov     rax, cs:qword_424018
//   0x1E5645 pxor    xmm0, xmm0
//   0x1E5649 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E564E mov     [rsp+0E8h+var_70], 0
//   0x1E5657 mov     [rsp+0E8h+var_D0], rcx
//   0x1E565C mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5661 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5666 jnz     loc_1E57B0
//   0x1E566C lea     rax, [rsp+0E8h+var_88]
//   0x1E5671 mov     rdi, r13
//   0x1E5674 mov     rsi, rax
//   0x1E5677 mov     [rsp+0E8h+var_C8], rax
//   0x1E567C call    sub_314D00
//   0x1E5681 test    al, al
//   0x1E5683 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5688 jz      loc_1E57D2
//   0x1E568E lea     rdi, [rcx+10h]
//   0x1E5692 mov     rsi, r13
//   0x1E5695 mov     [rsp+0E8h+var_D0], rcx
//   0x1E569A call    sub_314C00
//   0x1E569F mov     rax, [r15]
//   0x1E56A2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E56A7 mov     rdx, rax
//   0x1E56AA and     edx, 2
//   0x1E56AD cmp     dword ptr [rcx+10h], 1
//   0x1E56B1 jnz     loc_1E5818
//   0x1E56B7 lea     rdi, [rbx+8]
//   0x1E56BB mov     rcx, r15
//   0x1E56BE cmp     [rbp+0], r15
//   0x1E56C2 jz      loc_1E5A50
//   0x1E56C8 test    rdx, rdx
//   0x1E56CB jz      loc_1E5A00
//   0x1E56D1 mov     rsi, r15
//   0x1E56D4 mov     [rsp+0E8h+var_D0], rcx
//   0x1E56D9 call    sub_1E3D90
//   0x1E56DE mov     r15, [rsp+0E8h+var_D0]
//   0x1E56E3 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E56E8 jnz     loc_1E5970
//   0x1E56EE mov     rdx, [rbx+8]
//   0x1E56F2 lea     rax, [rbx+8]
//   0x1E56F6 mov     [rsp+0E8h+var_D8], rax
//   0x1E56FB cmp     r15, rdx
//   0x1E56FE jz      loc_1E5794
//   0x1E5704 lea     rcx, [r15+18h]
//   0x1E5708 cmp     [r15+20h], r14b
//   0x1E570C jnz     loc_1E59D8
//   0x1E5712 movsxd  rax, dword ptr [rcx+14h]
//   0x1E5716 add     rax, [r15+18h]
//   0x1E571A cmp     rax, r12
//   0x1E571D jg      loc_1E59D8
//   0x1E5723 mov     rax, [r15]
//   0x1E5726 mov     rsi, rax
//   0x1E5729 and     esi, 2
//   0x1E572C cmp     dword ptr [rcx+10h], 8
//   0x1E5730 jz      loc_1E5880
//   0x1E5736 mov     rdx, r15
//   0x1E5739 cmp     r15, [rbp+0]
//   0x1E573D jz      loc_1E5850
//   0x1E5743 test    rsi, rsi
//   0x1E5746 jnz     short loc_1E5770
//   0x1E5748 mov     rcx, [r15+10h]
//   0x1E574C test    byte ptr [rcx], 2
//   0x1E574F jz      loc_1E58B0
//   0x1E5755 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5759 mov     rdx, rax
//   0x1E575C mov     rax, [rax]
//   0x1E575F test    al, 2
//   0x1E5761 jz      loc_1E5A20
//   0x1E5767 nop     word ptr [rax+rax+00000000h]
//   0x1E5770 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E5775 mov     rsi, r15
//   0x1E5778 mov     [rsp+0E8h+var_E0], rdx
//   0x1E577D call    sub_1E3D90
//   0x1E5782 mov     r15, [rsp+0E8h+var_E0]
//   0x1E5787 mov     rdx, [rbx+8]
//   0x1E578B cmp     rdx, r15
//   0x1E578E jnz     loc_1E5704
//   0x1E5794 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5799 call    sub_312B80
//   0x1E579E mov     [rbp+0], r15
//   0x1E57A2 mov     ebx, 1
//   0x1E57A7 jmp     short loc_1E57DE
//   0x1E57A9 align 10h
//   0x1E57B0 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E57B4 lea     rsi, [rsp+0E8h+var_88]
//   0x1E57B9 mov     rdi, r13
//   0x1E57BC mov     [rsp+0E8h+var_C8], rsi
//   0x1E57C1 sub     eax, edx
//   0x1E57C3 mov     edx, eax
//   0x1E57C5 call    sub_314D00
//   0x1E57CA test    al, al
//   0x1E57CC jnz     loc_1E5920
//   0x1E57D2 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E57D7 call    sub_312B80
//   0x1E57DC xor     ebx, ebx
//   0x1E57DE mov     rdi, r13
//   0x1E57E1 call    sub_312B80
//   0x1E57E6 mov     rax, [rsp+0E8h+var_40]
//   0x1E57EE sub     rax, fs:28h
//   0x1E57F7 jnz     loc_1E622B
//   0x1E57FD add     rsp, 0B8h
//   0x1E5804 mov     eax, ebx
//   0x1E5806 pop     rbx
//   0x1E5807 pop     rbp
//   0x1E5808 pop     r12
//   0x1E580A pop     r13
//   0x1E580C pop     r14
//   0x1E580E pop     r15
//   0x1E5810 retn
//   0x1E5811 align 8
//   0x1E5818 test    rdx, rdx
//   0x1E581B jnz     loc_1E56E3
//   0x1E5821 mov     rdx, [r15+10h]
//   0x1E5825 test    byte ptr [rdx], 2
//   0x1E5828 jz      loc_1E5AF0
//   0x1E582E and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5832 mov     rdx, [rax]
//   0x1E5835 test    dl, 2
//   0x1E5838 jz      loc_1E5B43
//   0x1E583E mov     r15, rax
//   0x1E5841 jmp     loc_1E56E3
//   0x1E5846 align 10h
//   0x1E5850 test    rsi, rsi
//   0x1E5853 jz      loc_1E58D8
//   0x1E5859 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E585E mov     rsi, r15
//   0x1E5861 mov     [rsp+0E8h+var_E0], rdx
//   0x1E5866 call    sub_1E3D90
//   0x1E586B mov     rdx, [rsp+0E8h+var_E0]
//   0x1E5870 mov     [rbp+0], rdx
//   0x1E5874 mov     r15, rdx
//   0x1E5877 mov     rdx, [rbx+8]
//   0x1E587B jmp     loc_1E578B
//   0x1E5880 test    rsi, rsi
//   0x1E5883 jnz     loc_1E578B
//   0x1E5889 mov     rcx, [r15+10h]
//   0x1E588D test    byte ptr [rcx], 2
//   0x1E5890 jz      loc_1E5AD0
//   0x1E5896 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E589A mov     rcx, [rax]
//   0x1E589D test    cl, 2
//   0x1E58A0 jz      loc_1E5B08
//   0x1E58A6 mov     r15, rax
//   0x1E58A9 jmp     loc_1E578B
//   0x1E58AE align 10h
//   0x1E58B0 mov     rdx, rcx
//   0x1E58B3 mov     rcx, [rcx+8]
//   0x1E58B7 test    byte ptr [rcx], 2
//   0x1E58BA jnz     loc_1E5770
//   0x1E58C0 mov     rdx, rcx
//   0x1E58C3 mov     rcx, [rcx+8]
//   0x1E58C7 test    byte ptr [rcx], 2
//   0x1E58CA jnz     loc_1E5770
//   0x1E58D0 jmp     short loc_1E58B0
//   0x1E58D2 align 8
//   0x1E58D8 mov     rcx, [r15+10h]
//   0x1E58DC test    byte ptr [rcx], 2
//   0x1E58DF jz      loc_1E5AB0
//   0x1E58E5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E58E9 mov     rdx, rax
//   0x1E58EC mov     rax, [rax]
//   0x1E58EF test    al, 2
//   0x1E58F1 jnz     loc_1E5859
//   0x1E58F7 mov     rsi, r15
//   0x1E58FA cmp     [rdx+10h], rsi
//   0x1E58FE jnz     loc_1E5859
//   0x1E5904 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5908 mov     rsi, rdx
//   0x1E590B mov     rcx, rax
//   0x1E590E mov     rax, [rax]
//   0x1E5911 mov     rdx, rcx
//   0x1E5914 test    al, 2
//   0x1E5916 jz      short loc_1E58FA
//   0x1E5918 jmp     loc_1E5859
//   0x1E591D align 20h
//   0x1E5920 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5926 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E592C movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E5932 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5937 movaps  xmmword ptr [r13+0], xmm2
//   0x1E593C movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5942 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E594A movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5952 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E5957 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E595C movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5961 jmp     loc_1E568E
//   0x1E5966 align 10h
//   0x1E5970 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E5975 add     [rsp+0E8h+var_E0], rdi
//   0x1E597A mov     rdi, [rsp+0E8h+var_C8]
//   0x1E597F movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E5985 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E598B movdqa  xmm2, xmmword ptr [rdi]
//   0x1E598F movaps  xmmword ptr [rdi], xmm1
//   0x1E5992 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E599A movaps  xmmword ptr [r13+0], xmm2
//   0x1E599F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E59A4 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E59A8 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E59AC mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E59B0 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E59B8 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E59BD call    sub_312B80
//   0x1E59C2 cmp     r15, [rbx+8]
//   0x1E59C6 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E59CA jnz     loc_1E55F1
//   0x1E59D0 jmp     loc_1E579E
//   0x1E59D5 align 8
//   0x1E59D8 cmp     rdx, r15
//   0x1E59DB jz      loc_1E5794
//   0x1E59E1 cmp     [rcx+8], r14b
//   0x1E59E5 jnz     loc_1E5794
//   0x1E59EB cmp     [r15+18h], r12
//   0x1E59EF jge     loc_1E5794
//   0x1E59F5 jmp     loc_1E57D2
//   0x1E59FA align 20h
//   0x1E5A00 mov     rdx, [r15+10h]
//   0x1E5A04 test    byte ptr [rdx], 2
//   0x1E5A07 jnz     loc_1E5B70
//   0x1E5A0D mov     rcx, rdx
//   0x1E5A10 mov     rdx, [rdx+8]
//   0x1E5A14 test    byte ptr [rdx], 2
//   0x1E5A17 jnz     loc_1E56D1
//   0x1E5A1D jmp     short loc_1E5A0D
//   0x1E5A1F align 20h
//   0x1E5A20 mov     rsi, r15
//   0x1E5A23 cmp     [rdx+10h], rsi
//   0x1E5A27 jnz     loc_1E5770
//   0x1E5A2D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5A31 mov     rsi, rdx
//   0x1E5A34 mov     rcx, rax
//   0x1E5A37 mov     rax, [rax]
//   0x1E5A3A mov     rdx, rcx
//   0x1E5A3D test    al, 2
//   0x1E5A3F jz      short loc_1E5A23
//   0x1E5A41 jmp     loc_1E5770
//   0x1E5A46 align 10h
//   0x1E5A50 test    rdx, rdx
//   0x1E5A53 jnz     short loc_1E5A90
//   0x1E5A55 mov     rdx, [r15+10h]
//   0x1E5A59 test    byte ptr [rdx], 2
//   0x1E5A5C jz      loc_1E5BB0
//   0x1E5A62 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5A66 mov     rsi, r15
//   0x1E5A69 mov     rcx, rax
//   0x1E5A6C mov     rax, [rax]
//   0x1E5A6F test    al, 2
//   0x1E5A71 jnz     short loc_1E5A90
//   0x1E5A73 cmp     [rcx+10h], rsi
//   0x1E5A77 jnz     short loc_1E5A90
//   0x1E5A79 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5A7D mov     rdx, rax
//   0x1E5A80 mov     rax, [rax]
//   0x1E5A83 test    al, 2
//   0x1E5A85 jz      loc_1E5EAD
//   0x1E5A8B mov     rcx, rdx
//   0x1E5A8E xchg    ax, ax
//   0x1E5A90 mov     rsi, r15
//   0x1E5A93 mov     [rsp+0E8h+var_D0], rcx
//   0x1E5A98 call    sub_1E3D90
//   0x1E5A9D mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5AA2 mov     [rbp+0], rcx
//   0x1E5AA6 mov     r15, rcx
//   0x1E5AA9 jmp     loc_1E56E3
//   0x1E5AAE align 10h
//   0x1E5AB0 mov     rdx, rcx
//   0x1E5AB3 mov     rcx, [rcx+8]
//   0x1E5AB7 test    byte ptr [rcx], 2
//   0x1E5ABA jnz     loc_1E5859
//   0x1E5AC0 jmp     short loc_1E5AB0
//   0x1E5AC2 align 10h
//   0x1E5AD0 mov     r15, rcx
//   0x1E5AD3 mov     rcx, [rcx+8]
//   0x1E5AD7 test    byte ptr [rcx], 2
//   0x1E5ADA jnz     loc_1E578B
//   0x1E5AE0 jmp     short loc_1E5AD0
//   0x1E5AE2 align 10h
//   0x1E5AF0 mov     r15, rdx
//   0x1E5AF3 mov     rdx, [rdx+8]
//   0x1E5AF7 test    byte ptr [rdx], 2
//   0x1E5AFA jnz     loc_1E56E3
//   0x1E5B00 jmp     short loc_1E5AF0
//   0x1E5B02 align 8
//   0x1E5B08 cmp     r15, [rax+10h]
//   0x1E5B0C jnz     loc_1E58A6
//   0x1E5B12 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5B16 mov     r15, rcx
//   0x1E5B19 mov     rcx, [rcx]
//   0x1E5B1C test    cl, 2
//   0x1E5B1F jnz     loc_1E578B
//   0x1E5B25 mov     rsi, rax
//   0x1E5B28 mov     rax, r15
//   0x1E5B2B mov     r15, rsi
//   0x1E5B2E cmp     r15, [rax+10h]
//   0x1E5B32 jz      short loc_1E5B12
//   0x1E5B34 jmp     loc_1E58A6
//   0x1E5B39 align 20h
//   0x1E5B40 mov     rax, rcx
//   0x1E5B43 cmp     [rax+10h], r15
//   0x1E5B47 jnz     loc_1E583E
//   0x1E5B4D mov     rcx, rdx
//   0x1E5B50 mov     r15, rax
//   0x1E5B53 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5B57 mov     rdx, [rcx]
//   0x1E5B5A test    dl, 2
//   0x1E5B5D jz      short loc_1E5B40
//   0x1E5B5F mov     r15, rcx
//   0x1E5B62 jmp     loc_1E56E3
//   0x1E5B67 align 10h
//   0x1E5B70 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5B74 mov     rcx, rax
//   0x1E5B77 mov     rax, [rax]
//   0x1E5B7A test    al, 2
//   0x1E5B7C jnz     loc_1E56D1
//   0x1E5B82 mov     rsi, r15
//   0x1E5B85 cmp     [rcx+10h], rsi
//   0x1E5B89 jnz     loc_1E56D1
//   0x1E5B8F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5B93 mov     rsi, rcx
//   0x1E5B96 mov     rdx, rax
//   0x1E5B99 mov     rax, [rax]
//   0x1E5B9C mov     rcx, rdx
//   0x1E5B9F test    al, 2
//   0x1E5BA1 jz      short loc_1E5B85
//   0x1E5BA3 jmp     loc_1E56D1
//   0x1E5BA8 align 10h
//   0x1E5BB0 mov     rcx, rdx
//   0x1E5BB3 mov     rdx, [rdx+8]
//   0x1E5BB7 test    byte ptr [rdx], 2
//   0x1E5BBA jnz     loc_1E5A90
//   0x1E5BC0 jmp     short loc_1E5BB0
//   0x1E5BC2 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5BC8 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E5BCE mov     [rsp+0E8h+var_E0], rcx
//   0x1E5BD3 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E5BD9 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5BDE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E5BE3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5BE9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5BF1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5BF9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E5BFE movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5C03 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5C08 call    sub_312B80
//   0x1E5C0D mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5C12 lea     rdi, [r15+28h]
//   0x1E5C16 mov     rsi, r13
//   0x1E5C19 mov     [rsp+0E8h+var_E0], rcx
//   0x1E5C1E call    sub_314C00
//   0x1E5C23 mov     rax, [r15]
//   0x1E5C26 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5C2B mov     rdx, rax
//   0x1E5C2E and     edx, 2
//   0x1E5C31 cmp     dword ptr [rcx+10h], 1
//   0x1E5C35 jz      loc_1E5EB8
//   0x1E5C3B test    rdx, rdx
//   0x1E5C3E jnz     loc_1E579E
//   0x1E5C44 mov     rdx, [r15+10h]
//   0x1E5C48 test    byte ptr [rdx], 2
//   0x1E5C4B jnz     loc_1E5F65
//   0x1E5C51 mov     r15, rdx
//   0x1E5C54 mov     rdx, [rdx+8]
//   0x1E5C58 test    byte ptr [rdx], 2
//   0x1E5C5B jnz     loc_1E579E
//   0x1E5C61 jmp     short loc_1E5C51
//   0x1E5C63 align 8
//   0x1E5C68 cmp     r12, rdi
//   0x1E5C6B jnz     loc_1E57DC
//   0x1E5C71 mov     rax, cs:qword_424018
//   0x1E5C78 pxor    xmm0, xmm0
//   0x1E5C7C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E5C81 mov     [rsp+0E8h+var_70], 0
//   0x1E5C8A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5C8F lea     r12, [r15+28h]
//   0x1E5C93 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5C98 jnz     loc_1E6059
//   0x1E5C9E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E5CA2 lea     rax, [rsp+0E8h+var_88]
//   0x1E5CA7 mov     rdi, r12
//   0x1E5CAA mov     [rsp+0E8h+var_C8], rax
//   0x1E5CAF sub     edx, esi
//   0x1E5CB1 mov     rsi, rax
//   0x1E5CB4 call    sub_314D00
//   0x1E5CB9 test    al, al
//   0x1E5CBB jz      loc_1E60CF
//   0x1E5CC1 mov     rax, [r15]
//   0x1E5CC4 lea     r14, [rbx+8]
//   0x1E5CC8 mov     r12, r15
//   0x1E5CCB test    al, 2
//   0x1E5CCD jnz     loc_1E5FA0
//   0x1E5CD3 mov     r12, [r15+10h]
//   0x1E5CD7 test    byte ptr [r12], 2
//   0x1E5CDC jnz     loc_1E6175
//   0x1E5CE2 mov     rax, [r12+8]
//   0x1E5CE7 test    byte ptr [rax], 2
//   0x1E5CEA jnz     loc_1E5FA0
//   0x1E5CF0 mov     r12, rax
//   0x1E5CF3 jmp     short loc_1E5CE2
//   0x1E5CF5 align 8
//   0x1E5CF8 cmp     r12, rdi
//   0x1E5CFB jnz     loc_1E57DC
//   0x1E5D01 mov     rax, cs:qword_424018
//   0x1E5D08 pxor    xmm0, xmm0
//   0x1E5D0C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E5D11 mov     [rsp+0E8h+var_70], 0
//   0x1E5D1A mov     [rsp+0E8h+var_D8], rcx
//   0x1E5D1F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5D24 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5D29 jnz     loc_1E5FEC
//   0x1E5D2F mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E5D33 mov     edx, esi
//   0x1E5D35 mov     rdi, r13
//   0x1E5D38 sub     edx, eax
//   0x1E5D3A lea     rax, [rsp+0E8h+var_88]
//   0x1E5D3F mov     rsi, rax
//   0x1E5D42 mov     [rsp+0E8h+var_C8], rax
//   0x1E5D47 call    sub_314D00
//   0x1E5D4C test    al, al
//   0x1E5D4E mov     rcx, [rsp+0E8h+var_D8]
//   0x1E5D53 jz      loc_1E614C
//   0x1E5D59 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5D5E jnz     loc_1E5BC2
//   0x1E5D64 mov     rdx, [r15]
//   0x1E5D67 lea     rdi, [rbx+8]
//   0x1E5D6B mov     r12, r15
//   0x1E5D6E test    dl, 2
//   0x1E5D71 jnz     short loc_1E5D8C
//   0x1E5D73 mov     rax, [r15+10h]
//   0x1E5D77 test    byte ptr [rax], 2
//   0x1E5D7A jnz     loc_1E61B2
//   0x1E5D80 mov     r12, rax
//   0x1E5D83 mov     rax, [rax+8]
//   0x1E5D87 test    byte ptr [rax], 2
//   0x1E5D8A jz      short loc_1E5D80
//   0x1E5D8C mov     rsi, r15
//   0x1E5D8F call    sub_1E3D90
//   0x1E5D94 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5D99 mov     r15, r12
//   0x1E5D9C call    sub_312B80
//   0x1E5DA1 jmp     loc_1E579E
//   0x1E5DA6 cmp     dword ptr [rcx+10h], 8
//   0x1E5DAA jz      loc_1E579E
//   0x1E5DB0 mov     rdx, cs:qword_424018
//   0x1E5DB7 pxor    xmm0, xmm0
//   0x1E5DBB cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E5DC0 mov     [rsp+0E8h+var_70], 0
//   0x1E5DC9 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5DCE lea     r14, [r15+28h]
//   0x1E5DD2 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E5DD7 jnz     loc_1E5EFA
//   0x1E5DDD lea     rsi, [rsp+0E8h+var_88]
//   0x1E5DE2 mov     edx, eax
//   0x1E5DE4 mov     rdi, r14
//   0x1E5DE7 mov     [rsp+0E8h+var_E0], rcx
//   0x1E5DEC mov     [rsp+0E8h+var_C8], rsi
//   0x1E5DF1 call    sub_314D00
//   0x1E5DF6 test    al, al
//   0x1E5DF8 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5DFD jz      loc_1E60C0
//   0x1E5E03 lea     rdi, [rcx+10h]
//   0x1E5E07 mov     rsi, r13
//   0x1E5E0A mov     [rsp+0E8h+var_E0], rcx
//   0x1E5E0F call    sub_314C00
//   0x1E5E14 mov     rax, [r15]
//   0x1E5E17 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5E1C mov     rdx, rax
//   0x1E5E1F and     edx, 2
//   0x1E5E22 cmp     dword ptr [rcx+10h], 1
//   0x1E5E26 jz      loc_1E60DE
//   0x1E5E2C test    rdx, rdx
//   0x1E5E2F jnz     short loc_1E5E6A
//   0x1E5E31 mov     rdx, [r15+10h]
//   0x1E5E35 test    byte ptr [rdx], 2
//   0x1E5E38 jnz     short loc_1E5E5B
//   0x1E5E3A mov     rax, [rdx+8]
//   0x1E5E3E test    byte ptr [rax], 2
//   0x1E5E41 jnz     loc_1E6223
//   0x1E5E47 mov     rdx, rax
//   0x1E5E4A jmp     short loc_1E5E3A
//   0x1E5E4C mov     rcx, r15
//   0x1E5E4F mov     r15, rax
//   0x1E5E52 cmp     rcx, [rax+10h]
//   0x1E5E56 jnz     short loc_1E5E6A
//   0x1E5E58 mov     rax, rdx
//   0x1E5E5B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5E5F mov     rdx, [rax]
//   0x1E5E62 test    dl, 2
//   0x1E5E65 jz      short loc_1E5E4C
//   0x1E5E67 mov     r15, rax
//   0x1E5E6A cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5E6F jz      short loc_1E5E9E
//   0x1E5E71 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E5E76 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E5E7B lea     rdi, [rbx+8]
//   0x1E5E7F mov     rsi, r15
//   0x1E5E82 mov     r8, [rsp+0E8h+var_C8]
//   0x1E5E87 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E5E8C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E5E91 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E5E96 call    sub_1E45A0
//   0x1E5E9B mov     r15, rax
//   0x1E5E9E mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5EA3 call    sub_312B80
//   0x1E5EA8 jmp     loc_1E579E
//   0x1E5EAD mov     rsi, rcx
//   0x1E5EB0 mov     rcx, rdx
//   0x1E5EB3 jmp     loc_1E5A73
//   0x1E5EB8 lea     rdi, [rbx+8]
//   0x1E5EBC mov     r12, r15
//   0x1E5EBF test    rdx, rdx
//   0x1E5EC2 jnz     short loc_1E5EEA
//   0x1E5EC4 mov     r12, [r15+10h]
//   0x1E5EC8 test    byte ptr [r12], 2
//   0x1E5ECD jnz     loc_1E6113
//   0x1E5ED3 mov     rax, [r12+8]
//   0x1E5ED8 test    byte ptr [rax], 2
//   0x1E5EDB jnz     short loc_1E5EEA
//   0x1E5EDD mov     r12, rax
//   0x1E5EE0 mov     rax, [r12+8]
//   0x1E5EE5 test    byte ptr [rax], 2
//   0x1E5EE8 jz      short loc_1E5EDD
//   0x1E5EEA mov     rsi, r15
//   0x1E5EED call    sub_1E3D90
//   0x1E5EF2 mov     r15, r12
//   0x1E5EF5 jmp     loc_1E579E
//   0x1E5EFA mov     edx, [rcx+14h]
//   0x1E5EFD mov     rdi, r14
//   0x1E5F00 mov     [rsp+0E8h+var_E0], rcx
//   0x1E5F05 sub     edx, eax
//   0x1E5F07 lea     rax, [rsp+0E8h+var_88]
//   0x1E5F0C mov     rsi, rax
//   0x1E5F0F mov     [rsp+0E8h+var_C8], rax
//   0x1E5F14 call    sub_314D00
//   0x1E5F19 test    al, al
//   0x1E5F1B mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5F20 jz      loc_1E60C0
//   0x1E5F26 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5F2C movdqu  xmm1, xmmword ptr [r14]
//   0x1E5F31 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E5F37 movups  xmmword ptr [r14], xmm2
//   0x1E5F3B movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5F41 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5F49 movups  xmmword ptr [r14+10h], xmm2
//   0x1E5F4E movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5F56 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5F5B movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5F60 jmp     loc_1E5E03
//   0x1E5F65 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5F69 mov     rdx, [rax]
//   0x1E5F6C test    dl, 2
//   0x1E5F6F jz      short loc_1E5F79
//   0x1E5F71 mov     r15, rax
//   0x1E5F74 jmp     loc_1E579E
//   0x1E5F79 cmp     [rax+10h], r15
//   0x1E5F7D jnz     short loc_1E5F71
//   0x1E5F7F mov     rcx, rdx
//   0x1E5F82 mov     r15, rax
//   0x1E5F85 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5F89 mov     rdx, [rcx]
//   0x1E5F8C test    dl, 2
//   0x1E5F8F jnz     loc_1E616D
//   0x1E5F95 mov     rax, rcx
//   0x1E5F98 cmp     [rax+10h], r15
//   0x1E5F9C jz      short loc_1E5F7F
//   0x1E5F9E jmp     short loc_1E5F71
//   0x1E5FA0 mov     rsi, r15
//   0x1E5FA3 mov     rdi, r14
//   0x1E5FA6 call    sub_1E3D90
//   0x1E5FAB cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5FB0 jz      loc_1E615B
//   0x1E5FB6 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E5FBB mov     rax, [rsp+0E8h+var_E0]
//   0x1E5FC0 mov     rsi, r12
//   0x1E5FC3 mov     rdi, r14
//   0x1E5FC6 mov     r8, [rsp+0E8h+var_C8]
//   0x1E5FCB mov     rcx, rdx
//   0x1E5FCE mov     rdx, rax
//   0x1E5FD1 call    sub_1E45A0
//   0x1E5FD6 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5FDB mov     r15, rax
//   0x1E5FDE call    sub_312B80
//   0x1E5FE3 lea     rcx, [r15+18h]
//   0x1E5FE7 jmp     loc_1E5C12
//   0x1E5FEC lea     rax, [rsp+0E8h+var_88]
//   0x1E5FF1 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E5FF5 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5FF9 mov     rdi, r13
//   0x1E5FFC sub     edx, esi
//   0x1E5FFE mov     rsi, rax
//   0x1E6001 mov     [rsp+0E8h+var_C8], rax
//   0x1E6006 call    sub_314D00
//   0x1E600B test    al, al
//   0x1E600D mov     rcx, [rsp+0E8h+var_D8]
//   0x1E6012 jz      loc_1E614C
//   0x1E6018 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E601E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E6024 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E602A movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E602F movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E6035 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E603D movaps  [rsp+0E8h+var_58], xmm0
//   0x1E6045 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E604A movaps  [rsp+0E8h+var_88], xmm1
//   0x1E604F movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E6054 jmp     loc_1E5D59
//   0x1E6059 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E605D mov     edx, [rcx+14h]
//   0x1E6060 mov     rdi, r12
//   0x1E6063 sub     edx, eax
//   0x1E6065 lea     rax, [rsp+0E8h+var_88]
//   0x1E606A add     edx, esi
//   0x1E606C mov     rsi, rax
//   0x1E606F mov     [rsp+0E8h+var_C8], rax
//   0x1E6074 call    sub_314D00
//   0x1E6079 test    al, al
//   0x1E607B jz      short loc_1E60CF
//   0x1E607D movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E6083 movdqu  xmm1, xmmword ptr [r12]
//   0x1E6089 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E6090 movups  xmmword ptr [r12], xmm2
//   0x1E6095 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E609B movaps  [rsp+0E8h+var_68], xmm1
//   0x1E60A3 movups  xmmword ptr [r12+10h], xmm2
//   0x1E60A9 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E60B1 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E60B6 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E60BB jmp     loc_1E5CC1
//   0x1E60C0 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E60C5 call    sub_312B80
//   0x1E60CA jmp     loc_1E57DC
//   0x1E60CF mov     rdi, [rsp+0E8h+var_C8]
//   0x1E60D4 call    sub_312B80
//   0x1E60D9 jmp     loc_1E57DC
//   0x1E60DE lea     rdi, [rbx+8]
//   0x1E60E2 mov     r14, r15
//   0x1E60E5 test    rdx, rdx
//   0x1E60E8 jnz     short loc_1E6103
//   0x1E60EA mov     rdx, [r15+10h]
//   0x1E60EE test    byte ptr [rdx], 2
//   0x1E60F1 jnz     loc_1E61EB
//   0x1E60F7 mov     r14, rdx
//   0x1E60FA mov     rdx, [rdx+8]
//   0x1E60FE test    byte ptr [rdx], 2
//   0x1E6101 jz      short loc_1E60F7
//   0x1E6103 mov     rsi, r15
//   0x1E6106 call    sub_1E3D90
//   0x1E610B mov     r15, r14
//   0x1E610E jmp     loc_1E5E6A
//   0x1E6113 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6117 mov     r12, rax
//   0x1E611A mov     rax, [rax]
//   0x1E611D test    al, 2
//   0x1E611F jnz     loc_1E5EEA
//   0x1E6125 mov     rcx, r15
//   0x1E6128 cmp     [r12+10h], rcx
//   0x1E612D jnz     loc_1E5EEA
//   0x1E6133 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6137 mov     rcx, r12
//   0x1E613A mov     rdx, rax
//   0x1E613D mov     rax, [rax]
//   0x1E6140 mov     r12, rdx
//   0x1E6143 test    al, 2
//   0x1E6145 jz      short loc_1E6128
//   0x1E6147 jmp     loc_1E5EEA
//   0x1E614C mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6151 call    sub_312B80
//   0x1E6156 jmp     loc_1E57DC
//   0x1E615B mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6160 mov     r15, r12
//   0x1E6163 call    sub_312B80
//   0x1E6168 jmp     loc_1E579E
//   0x1E616D mov     r15, rcx
//   0x1E6170 jmp     loc_1E579E
//   0x1E6175 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6179 mov     r12, rax
//   0x1E617C mov     rax, [rax]
//   0x1E617F test    al, 2
//   0x1E6181 jnz     loc_1E5FA0
//   0x1E6187 mov     rcx, r15
//   0x1E618A mov     rdx, r12
//   0x1E618D cmp     [r12+10h], rcx
//   0x1E6192 jnz     loc_1E5FA0
//   0x1E6198 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E619C mov     r12, rax
//   0x1E619F mov     rax, [rax]
//   0x1E61A2 test    al, 2
//   0x1E61A4 jnz     loc_1E5FA0
//   0x1E61AA mov     rcx, rdx
//   0x1E61AD mov     rdx, r12
//   0x1E61B0 jmp     short loc_1E618D
//   0x1E61B2 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E61B6 mov     rax, [rdx]
//   0x1E61B9 mov     r12, rdx
//   0x1E61BC test    al, 2
//   0x1E61BE jnz     loc_1E5D8C
//   0x1E61C4 mov     rcx, r15
//   0x1E61C7 cmp     [r12+10h], rcx
//   0x1E61CC jnz     loc_1E5D8C
//   0x1E61D2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E61D6 mov     rcx, r12
//   0x1E61D9 mov     rdx, rax
//   0x1E61DC mov     rax, [rax]
//   0x1E61DF mov     r12, rdx
//   0x1E61E2 test    al, 2
//   0x1E61E4 jz      short loc_1E61C7
//   0x1E61E6 jmp     loc_1E5D8C
//   0x1E61EB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E61EF mov     r14, rax
//   0x1E61F2 mov     rax, [rax]
//   0x1E61F5 test    al, 2
//   0x1E61F7 jnz     loc_1E6103
//   0x1E61FD mov     rcx, r15
//   0x1E6200 cmp     [r14+10h], rcx
//   0x1E6204 jnz     loc_1E6103
//   0x1E620A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E620E mov     rcx, r14
//   0x1E6211 mov     rdx, rax
//   0x1E6214 mov     rax, [rax]
//   0x1E6217 mov     r14, rdx
//   0x1E621A test    al, 2
//   0x1E621C jz      short loc_1E6200
//   0x1E621E jmp     loc_1E6103
//   0x1E6223 mov     r15, rdx
//   0x1E6226 jmp     loc_1E5E6A
//   0x1E622B call    ___stack_chk_fail
//   0x1E6230 mov     rbx, rax
//   0x1E6233 jmp     loc_42954
//   0x1E6238 mov     rbx, rax
//   0x1E623B jmp     loc_42992
//   0x1E6240 mov     rbx, rax
//   0x1E6243 jmp     loc_4295E
//   0x1E6248 mov     rbx, rax
//   0x1E624B jmp     loc_4299E
//   0x1E6250 mov     rbx, rax
//   0x1E6253 jmp     loc_42981
// ============================================================

void sub_1E5560(/* signature unknown */)
{
    // see disassembly above
}

