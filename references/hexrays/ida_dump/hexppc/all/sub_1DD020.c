// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DD020
// Name:           sub_1DD020
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DD020 push    r15
//   0x1DD022 push    r14
//   0x1DD024 push    r13
//   0x1DD026 push    r12
//   0x1DD028 push    rbp
//   0x1DD029 push    rbx
//   0x1DD02A sub     rsp, 0C8h
//   0x1DD031 mov     [rsp+0F8h+var_E0], rsi
//   0x1DD036 mov     rax, fs:28h
//   0x1DD03F mov     [rsp+0F8h+var_40], rax
//   0x1DD047 xor     eax, eax
//   0x1DD049 movzx   eax, byte ptr [rdi+18h]
//   0x1DD04D cmp     al, [rsi+18h]
//   0x1DD050 jnz     loc_1DD250
//   0x1DD056 test    al, al
//   0x1DD058 jnz     loc_1DD252
//   0x1DD05E mov     rax, [rdi+8]
//   0x1DD062 mov     r13, rdi
//   0x1DD065 mov     rdi, [rsi+8]
//   0x1DD069 mov     rcx, rax
//   0x1DD06C mov     [rsp+0F8h+var_E8], rdi
//   0x1DD071 mov     rdx, rdi
//   0x1DD074 test    rax, rax
//   0x1DD077 jz      loc_1DD2B0
//   0x1DD07D cmp     qword ptr [r13+10h], 0
//   0x1DD082 jnz     loc_1DD280
//   0x1DD088 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD08D mov     rbx, rax
//   0x1DD090 test    rcx, rcx
//   0x1DD093 jz      short loc_1DD0A5
//   0x1DD095 mov     rdx, [rsp+0F8h+var_E0]
//   0x1DD09A cmp     qword ptr [rdx+10h], 0
//   0x1DD09F jnz     loc_1DD2D0
//   0x1DD0A5 lea     rcx, [rax+18h]
//   0x1DD0A9 cmp     rax, rbx
//   0x1DD0AC jz      loc_1DD9A3
//   0x1DD0B2 cmp     dword ptr [rcx+10h], 8
//   0x1DD0B6 jnz     loc_1DD250
//   0x1DD0BC mov     rdx, [rax]
//   0x1DD0BF test    dl, 2
//   0x1DD0C2 jnz     short loc_1DD0A9
//   0x1DD0C4 mov     rcx, [rax+10h]
//   0x1DD0C8 test    byte ptr [rcx], 2
//   0x1DD0CB jz      loc_1DD2E0
//   0x1DD0D1 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DD0D5 mov     rcx, [rdx]
//   0x1DD0D8 test    cl, 2
//   0x1DD0DB jz      loc_1DD303
//   0x1DD0E1 mov     rax, rdx
//   0x1DD0E4 jmp     short loc_1DD0A5
//   0x1DD0E6 align 10h
//   0x1DD0F0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD0F4 mov     rdx, [rax]
//   0x1DD0F7 test    dl, 2
//   0x1DD0FA jz      loc_1DD6A0
//   0x1DD100 mov     rbx, rax
//   0x1DD103 nop     word ptr [rax+rax+00000000h]
//   0x1DD10E xchg    ax, ax
//   0x1DD110 cmp     [r13+8], rbx
//   0x1DD114 jz      loc_1DD230
//   0x1DD11A movzx   eax, [rsp+0F8h+var_C9]
//   0x1DD11F lea     r15, [rbx+18h]
//   0x1DD123 cmp     [rbx+20h], al
//   0x1DD126 jnz     loc_1DD230
//   0x1DD12C cmp     [rbx+18h], r14
//   0x1DD130 jnz     loc_1DD230
//   0x1DD136 cmp     dword ptr [r15+10h], 8
//   0x1DD13B jz      loc_1DD230
//   0x1DD141 movsxd  rax, dword ptr [r15+14h]
//   0x1DD145 add     r14, rax
//   0x1DD148 cmp     [rsp+0F8h+var_D8], r14
//   0x1DD14D jl      loc_1DD230
//   0x1DD153 mov     rax, cs:qword_411530
//   0x1DD15A pxor    xmm0, xmm0
//   0x1DD15E cmp     [rsp+0F8h+var_CA], 0
//   0x1DD163 mov     [rsp+0F8h+var_70], 0
//   0x1DD16F mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DD173 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DD178 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DD17D jnz     loc_1DD630
//   0x1DD183 lea     rbp, [rsp+0F8h+var_88]
//   0x1DD188 mov     rdi, r12
//   0x1DD18B mov     rsi, rbp
//   0x1DD18E call    sub_310B80
//   0x1DD193 test    al, al
//   0x1DD195 jz      loc_1DD7A8
//   0x1DD19B mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD1A0 mov     rsi, r12
//   0x1DD1A3 call    sub_30EC40
//   0x1DD1A8 test    eax, eax
//   0x1DD1AA jnz     loc_1DD7A8
//   0x1DD1B0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD1B5 lea     rsi, [r15+10h]
//   0x1DD1B9 call    sub_30EC10
//   0x1DD1BE movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DD1C3 movdqa  xmm1, xmmword ptr [r12]
//   0x1DD1C9 mov     rdi, rbp
//   0x1DD1CC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DD1D3 movaps  xmmword ptr [r12], xmm2
//   0x1DD1D8 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DD1DD movaps  xmmword ptr [rbp+0], xmm1
//   0x1DD1E1 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DD1E5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD1ED movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD1F5 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DD1FB call    sub_30EA00
//   0x1DD200 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DD204 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1DD208 jg      loc_1DD5FE
//   0x1DD20E mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD213 mov     rsi, r12
//   0x1DD216 call    sub_30EC40
//   0x1DD21B test    eax, eax
//   0x1DD21D jz      loc_1DD4AC
//   0x1DD223 nop     word ptr [rax+rax+00000000h]
//   0x1DD22E xchg    ax, ax
//   0x1DD230 mov     rdi, r12
//   0x1DD233 call    sub_30EA00
//   0x1DD238 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD23D call    sub_30EA00
//   0x1DD242 nop     word ptr [rax+rax+00000000h]
//   0x1DD24D nop     dword ptr [rax]
//   0x1DD250 xor     eax, eax
//   0x1DD252 mov     rdx, [rsp+0F8h+var_40]
//   0x1DD25A sub     rdx, fs:28h
//   0x1DD263 jnz     loc_1DDA34
//   0x1DD269 add     rsp, 0C8h
//   0x1DD270 pop     rbx
//   0x1DD271 pop     rbp
//   0x1DD272 pop     r12
//   0x1DD274 pop     r13
//   0x1DD276 pop     r14
//   0x1DD278 pop     r15
//   0x1DD27A retn
//   0x1DD27B align 20h
//   0x1DD280 mov     rbx, [rax+8]
//   0x1DD284 test    rdi, rdi
//   0x1DD287 jnz     loc_1DD330
//   0x1DD28D cmp     rcx, rbx
//   0x1DD290 jz      loc_1DD0A5
//   0x1DD296 mov     [rsp+0F8h+var_E8], rdx
//   0x1DD29B mov     rax, rbx
//   0x1DD29E mov     rbx, rcx
//   0x1DD2A1 jmp     loc_1DD0A5
//   0x1DD2A6 align 10h
//   0x1DD2B0 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD2B5 xor     ebx, ebx
//   0x1DD2B7 test    rcx, rcx
//   0x1DD2BA jz      loc_1DD0A5
//   0x1DD2C0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DD2C5 cmp     qword ptr [rdi+10h], 0
//   0x1DD2CA jz      loc_1DD0A5
//   0x1DD2D0 mov     rcx, [rcx+8]
//   0x1DD2D4 mov     [rsp+0F8h+var_E8], rcx
//   0x1DD2D9 jmp     loc_1DD0A5
//   0x1DD2DE align 20h
//   0x1DD2E0 mov     rax, rcx
//   0x1DD2E3 mov     rcx, [rcx+8]
//   0x1DD2E7 test    byte ptr [rcx], 2
//   0x1DD2EA jnz     loc_1DD0A5
//   0x1DD2F0 jmp     short loc_1DD2E0
//   0x1DD2F2 align 20h
//   0x1DD300 mov     rdx, rsi
//   0x1DD303 cmp     rax, [rdx+10h]
//   0x1DD307 jnz     loc_1DD0E1
//   0x1DD30D and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DD311 mov     rax, rdx
//   0x1DD314 mov     rsi, rcx
//   0x1DD317 mov     rcx, [rcx]
//   0x1DD31A test    cl, 2
//   0x1DD31D jz      short loc_1DD300
//   0x1DD31F mov     rax, rsi
//   0x1DD322 jmp     loc_1DD0A5
//   0x1DD327 align 10h
//   0x1DD330 cmp     qword ptr [rsi+10h], 0
//   0x1DD335 jz      loc_1DD28D
//   0x1DD33B mov     rcx, [rdx+8]
//   0x1DD33F mov     [rsp+0F8h+var_E8], rcx
//   0x1DD344 cmp     rax, rbx
//   0x1DD347 jz      loc_1DD0A5
//   0x1DD34D nop     dword ptr [rax]
//   0x1DD350 cmp     [rsp+0F8h+var_E8], rdx
//   0x1DD355 jz      loc_1DDA39
//   0x1DD35B cmp     dword ptr [rbx+28h], 8
//   0x1DD35F lea     rbp, [rbx+18h]
//   0x1DD363 jz      loc_1DD6D8
//   0x1DD369 mov     rax, [rsp+0F8h+var_E8]
//   0x1DD36E lea     r15, [rax+18h]
//   0x1DD372 movzx   eax, byte ptr [rbp+8]
//   0x1DD376 mov     [rsp+0F8h+var_C9], al
//   0x1DD37A cmp     al, [r15+8]
//   0x1DD37E jnz     loc_1DD250
//   0x1DD384 cmp     byte ptr [rbp+8], 5
//   0x1DD388 mov     [rsp+0F8h+var_CA], 0
//   0x1DD38D jnz     short loc_1DD3A9
//   0x1DD38F mov     rax, [r13+0]
//   0x1DD393 mov     rax, [rax+5E0h]
//   0x1DD39A mov     rax, [rax+60h]
//   0x1DD39E movzx   eax, byte ptr [rax+91h]
//   0x1DD3A5 mov     [rsp+0F8h+var_CA], al
//   0x1DD3A9 lea     rax, [rsp+0F8h+var_C8]
//   0x1DD3AE lea     rsi, [rbp+10h]
//   0x1DD3B2 mov     rdi, rax
//   0x1DD3B5 lea     r12, [rsp+0F8h+var_A8]
//   0x1DD3BA mov     [rsp+0F8h+var_F0], rax
//   0x1DD3BF call    sub_30EAC0
//   0x1DD3C4 lea     rsi, [r15+10h]
//   0x1DD3C8 mov     rdi, r12
//   0x1DD3CB call    sub_30EAC0
//   0x1DD3D0 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DD3D5 mov     rcx, [r15]
//   0x1DD3D8 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DD3DD mov     rax, [rbp+0]
//   0x1DD3E1 lea     r8, [rdi+rcx]
//   0x1DD3E5 mov     rdx, r14
//   0x1DD3E8 mov     [rsp+0F8h+var_D8], r8
//   0x1DD3ED add     r14, rax
//   0x1DD3F0 cmp     rax, rcx
//   0x1DD3F3 jge     loc_1DD540
//   0x1DD3F9 cmp     r14, r8
//   0x1DD3FC jnz     loc_1DD230
//   0x1DD402 mov     rsi, cs:qword_411530
//   0x1DD409 pxor    xmm0, xmm0
//   0x1DD40D cmp     [rsp+0F8h+var_CA], 0
//   0x1DD412 mov     [rsp+0F8h+var_70], 0
//   0x1DD41E movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DD423 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1DD428 jnz     loc_1DD7B8
//   0x1DD42E mov     edx, ecx
//   0x1DD430 lea     rbp, [rsp+0F8h+var_88]
//   0x1DD435 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD43A sub     edx, eax
//   0x1DD43C mov     rsi, rbp
//   0x1DD43F call    sub_310B80
//   0x1DD444 test    al, al
//   0x1DD446 jz      loc_1DD7D6
//   0x1DD44C cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1DD451 jnz     loc_1DDA05
//   0x1DD457 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DD45C movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DD462 mov     rdi, rbp
//   0x1DD465 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DD46B movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DD470 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DD475 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DD479 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DD47D movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD485 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD48D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DD492 call    sub_30EA00
//   0x1DD497 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD49C mov     rsi, r12
//   0x1DD49F call    sub_30EC40
//   0x1DD4A4 test    eax, eax
//   0x1DD4A6 jnz     loc_1DD5F0
//   0x1DD4AC mov     rax, [rbx]
//   0x1DD4AF test    al, 2
//   0x1DD4B1 jnz     short loc_1DD4D0
//   0x1DD4B3 mov     rdx, [rbx+10h]
//   0x1DD4B7 test    byte ptr [rdx], 2
//   0x1DD4BA jnz     loc_1DD7E8
//   0x1DD4C0 mov     rbx, rdx
//   0x1DD4C3 mov     rdx, [rdx+8]
//   0x1DD4C7 test    byte ptr [rdx], 2
//   0x1DD4CA jz      short loc_1DD4C0
//   0x1DD4CC nop     dword ptr [rax+00h]
//   0x1DD4D0 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD4D5 mov     rax, [rcx]
//   0x1DD4D8 test    al, 2
//   0x1DD4DA jnz     short loc_1DD510
//   0x1DD4DC mov     rdx, [rcx+10h]
//   0x1DD4E0 test    byte ptr [rdx], 2
//   0x1DD4E3 jnz     loc_1DD828
//   0x1DD4E9 mov     rax, [rdx+8]
//   0x1DD4ED test    byte ptr [rax], 2
//   0x1DD4F0 jnz     short loc_1DD4FE
//   0x1DD4F2 mov     rdx, rax
//   0x1DD4F5 mov     rax, [rdx+8]
//   0x1DD4F9 test    byte ptr [rax], 2
//   0x1DD4FC jz      short loc_1DD4F2
//   0x1DD4FE mov     [rsp+0F8h+var_E8], rdx
//   0x1DD503 nop     word ptr [rax+rax+00000000h]
//   0x1DD50E xchg    ax, ax
//   0x1DD510 mov     rdi, r12
//   0x1DD513 call    sub_30EA00
//   0x1DD518 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD51D call    sub_30EA00
//   0x1DD522 cmp     [r13+8], rbx
//   0x1DD526 jz      loc_1DD9FD
//   0x1DD52C mov     rax, [rsp+0F8h+var_E0]
//   0x1DD531 mov     rdx, [rax+8]
//   0x1DD535 jmp     loc_1DD350
//   0x1DD53A align 20h
//   0x1DD540 cmp     rcx, [rbp+0]
//   0x1DD544 jge     loc_1DD497
//   0x1DD54A mov     rdx, [rsp+0F8h+var_D8]
//   0x1DD54F cmp     r14, rdx
//   0x1DD552 jnz     loc_1DD230
//   0x1DD558 mov     rdx, cs:qword_411530
//   0x1DD55F pxor    xmm0, xmm0
//   0x1DD563 cmp     [rsp+0F8h+var_CA], 0
//   0x1DD568 mov     [rsp+0F8h+var_70], 0
//   0x1DD574 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DD579 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DD57E jnz     loc_1DD868
//   0x1DD584 mov     edx, eax
//   0x1DD586 lea     rbp, [rsp+0F8h+var_88]
//   0x1DD58B mov     rdi, r12
//   0x1DD58E sub     edx, ecx
//   0x1DD590 mov     rsi, rbp
//   0x1DD593 call    sub_310B80
//   0x1DD598 test    al, al
//   0x1DD59A jz      loc_1DD930
//   0x1DD5A0 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1DD5A5 jnz     loc_1DD930
//   0x1DD5AB movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DD5B0 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DD5B6 mov     rdi, rbp
//   0x1DD5B9 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DD5BF movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DD5C4 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DD5C9 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DD5CD movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DD5D1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD5D9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD5E1 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DD5E6 call    sub_30EA00
//   0x1DD5EB jmp     loc_1DD497
//   0x1DD5F0 mov     rax, [rsp+0F8h+var_D8]
//   0x1DD5F5 cmp     r14, rax
//   0x1DD5F8 jge     loc_1DD230
//   0x1DD5FE mov     rax, [rbx]
//   0x1DD601 test    al, 2
//   0x1DD603 jnz     loc_1DD110
//   0x1DD609 mov     rdx, [rbx+10h]
//   0x1DD60D test    byte ptr [rdx], 2
//   0x1DD610 jnz     loc_1DD0F0
//   0x1DD616 mov     rbx, rdx
//   0x1DD619 mov     rdx, [rdx+8]
//   0x1DD61D test    byte ptr [rdx], 2
//   0x1DD620 jnz     loc_1DD110
//   0x1DD626 jmp     short loc_1DD616
//   0x1DD628 align 10h
//   0x1DD630 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DD634 lea     rbp, [rsp+0F8h+var_88]
//   0x1DD639 mov     rdi, r12
//   0x1DD63C mov     rsi, rbp
//   0x1DD63F sub     eax, edx
//   0x1DD641 mov     edx, eax
//   0x1DD643 call    sub_310B80
//   0x1DD648 test    al, al
//   0x1DD64A jz      loc_1DD7A8
//   0x1DD650 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DD656 movdqa  xmm1, xmmword ptr [r12]
//   0x1DD65C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DD663 movaps  xmmword ptr [r12], xmm2
//   0x1DD668 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DD671 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD679 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD681 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DD687 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DD68C movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DD694 jmp     loc_1DD19B
//   0x1DD699 align 20h
//   0x1DD6A0 cmp     [rax+10h], rbx
//   0x1DD6A4 jnz     loc_1DD100
//   0x1DD6AA and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DD6AE mov     rbx, rdx
//   0x1DD6B1 mov     rdx, [rdx]
//   0x1DD6B4 test    dl, 2
//   0x1DD6B7 jnz     loc_1DD110
//   0x1DD6BD mov     rcx, rax
//   0x1DD6C0 mov     rax, rbx
//   0x1DD6C3 mov     rbx, rcx
//   0x1DD6C6 cmp     [rax+10h], rbx
//   0x1DD6CA jz      short loc_1DD6AA
//   0x1DD6CC jmp     loc_1DD100
//   0x1DD6D1 align 8
//   0x1DD6D8 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DD6DD movzx   eax, byte ptr [rbp+8]
//   0x1DD6E1 movzx   ecx, byte ptr [rdi+20h]
//   0x1DD6E5 lea     r15, [rdi+18h]
//   0x1DD6E9 cmp     al, cl
//   0x1DD6EB jb      short loc_1DD703
//   0x1DD6ED cmp     cl, al
//   0x1DD6EF jb      loc_1DD372
//   0x1DD6F5 mov     rax, [rdi+18h]
//   0x1DD6F9 cmp     [rbp+0], rax
//   0x1DD6FD jg      loc_1DD372
//   0x1DD703 movsxd  rax, dword ptr [rbp+14h]
//   0x1DD707 add     rax, [rbp+0]
//   0x1DD70B movzx   ecx, byte ptr [r15+8]
//   0x1DD710 cmp     [rbp+8], cl
//   0x1DD713 jnz     short loc_1DD770
//   0x1DD715 cmp     [r15], rax
//   0x1DD718 jge     short loc_1DD770
//   0x1DD71A movsxd  rcx, dword ptr [r15+14h]
//   0x1DD71E add     rcx, [r15]
//   0x1DD721 cmp     rcx, rax
//   0x1DD724 jg      loc_1DD250
//   0x1DD72A mov     rdi, [rsp+0F8h+var_E8]
//   0x1DD72F mov     rcx, [rdi]
//   0x1DD732 test    cl, 2
//   0x1DD735 jnz     loc_1DD990
//   0x1DD73B mov     rsi, [rdi+10h]
//   0x1DD73F test    byte ptr [rsi], 2
//   0x1DD742 jnz     loc_1DD9B9
//   0x1DD748 mov     [rsp+0F8h+var_E8], rsi
//   0x1DD74D mov     rsi, [rsi+8]
//   0x1DD751 test    byte ptr [rsi], 2
//   0x1DD754 jz      short loc_1DD748
//   0x1DD756 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD75B cmp     rdx, rcx
//   0x1DD75E jnz     loc_1DDA2B
//   0x1DD764 nop     word ptr [rax+rax+00000000h]
//   0x1DD76F nop
//   0x1DD770 mov     rax, [rbx]
//   0x1DD773 test    al, 2
//   0x1DD775 jnz     loc_1DD522
//   0x1DD77B mov     rdx, [rbx+10h]
//   0x1DD77F test    byte ptr [rdx], 2
//   0x1DD782 jnz     loc_1DD950
//   0x1DD788 mov     rax, [rdx+8]
//   0x1DD78C test    byte ptr [rax], 2
//   0x1DD78F jnz     short loc_1DD79D
//   0x1DD791 mov     rdx, rax
//   0x1DD794 mov     rax, [rdx+8]
//   0x1DD798 test    byte ptr [rax], 2
//   0x1DD79B jz      short loc_1DD791
//   0x1DD79D mov     rbx, rdx
//   0x1DD7A0 jmp     loc_1DD522
//   0x1DD7A5 align 8
//   0x1DD7A8 mov     rdi, rbp
//   0x1DD7AB call    sub_30EA00
//   0x1DD7B0 jmp     loc_1DD230
//   0x1DD7B5 align 8
//   0x1DD7B8 add     edx, eax
//   0x1DD7BA lea     rbp, [rsp+0F8h+var_88]
//   0x1DD7BF mov     rdi, [rsp+0F8h+var_F0]
//   0x1DD7C4 sub     edx, ecx
//   0x1DD7C6 mov     rsi, rbp
//   0x1DD7C9 call    sub_310B80
//   0x1DD7CE test    al, al
//   0x1DD7D0 jnz     loc_1DD8D0
//   0x1DD7D6 mov     rdi, rbp
//   0x1DD7D9 call    sub_30EA00
//   0x1DD7DE jmp     loc_1DD230
//   0x1DD7E3 align 8
//   0x1DD7E8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD7EC mov     rdx, [rax]
//   0x1DD7EF test    dl, 2
//   0x1DD7F2 jz      short loc_1DD803
//   0x1DD7F4 mov     rbx, rax
//   0x1DD7F7 jmp     loc_1DD4D0
//   0x1DD7FC align 20h
//   0x1DD800 mov     rax, rcx
//   0x1DD803 cmp     [rax+10h], rbx
//   0x1DD807 jnz     short loc_1DD7F4
//   0x1DD809 mov     rcx, rdx
//   0x1DD80C mov     rbx, rax
//   0x1DD80F and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DD813 mov     rdx, [rcx]
//   0x1DD816 test    dl, 2
//   0x1DD819 jz      short loc_1DD800
//   0x1DD81B mov     rbx, rcx
//   0x1DD81E jmp     loc_1DD4D0
//   0x1DD823 align 8
//   0x1DD828 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD82C mov     rdx, [rax]
//   0x1DD82F test    dl, 2
//   0x1DD832 jnz     loc_1DD920
//   0x1DD838 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD83D cmp     [rax+10h], rcx
//   0x1DD841 jnz     loc_1DD920
//   0x1DD847 mov     rcx, rdx
//   0x1DD84A and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DD84E mov     rdx, [rcx]
//   0x1DD851 test    dl, 2
//   0x1DD854 jz      loc_1DD940
//   0x1DD85A mov     [rsp+0F8h+var_E8], rcx
//   0x1DD85F jmp     loc_1DD510
//   0x1DD864 align 8
//   0x1DD868 lea     edx, [rdi+rcx]
//   0x1DD86B lea     rbp, [rsp+0F8h+var_88]
//   0x1DD870 mov     rdi, r12
//   0x1DD873 sub     edx, eax
//   0x1DD875 mov     rsi, rbp
//   0x1DD878 call    sub_310B80
//   0x1DD87D test    al, al
//   0x1DD87F jz      loc_1DD930
//   0x1DD885 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DD88B movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DD891 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DD897 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DD89C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DD8A5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD8AD movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD8B5 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DD8BA movaps  [rsp+0F8h+var_88], xmm1
//   0x1DD8BF movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DD8C7 jmp     loc_1DD5A0
//   0x1DD8CC align 10h
//   0x1DD8D0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DD8D6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DD8DC movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DD8E2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DD8E7 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DD8F0 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DD8F8 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DD900 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DD905 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DD90A movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DD912 jmp     loc_1DD44C
//   0x1DD917 align 20h
//   0x1DD920 mov     [rsp+0F8h+var_E8], rax
//   0x1DD925 jmp     loc_1DD510
//   0x1DD92A align 10h
//   0x1DD930 mov     rdi, rbp
//   0x1DD933 call    sub_30EA00
//   0x1DD938 jmp     loc_1DD230
//   0x1DD93D align 20h
//   0x1DD940 mov     rsi, rax
//   0x1DD943 mov     rax, rcx
//   0x1DD946 mov     rcx, rsi
//   0x1DD949 jmp     loc_1DD83D
//   0x1DD94E align 10h
//   0x1DD950 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD954 mov     rdx, [rax]
//   0x1DD957 test    dl, 2
//   0x1DD95A jz      short loc_1DD967
//   0x1DD95C mov     rbx, rax
//   0x1DD95F jmp     loc_1DD522
//   0x1DD964 mov     rax, rcx
//   0x1DD967 cmp     [rax+10h], rbx
//   0x1DD96B jnz     short loc_1DD95C
//   0x1DD96D mov     rcx, rdx
//   0x1DD970 mov     rbx, rax
//   0x1DD973 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DD977 mov     rdx, [rcx]
//   0x1DD97A test    dl, 2
//   0x1DD97D jz      short loc_1DD964
//   0x1DD97F mov     rbx, rcx
//   0x1DD982 jmp     loc_1DD522
//   0x1DD987 align 10h
//   0x1DD990 movzx   ecx, byte ptr [rbp+8]
//   0x1DD994 cmp     [r15+8], cl
//   0x1DD998 jz      loc_1DD715
//   0x1DD99E jmp     loc_1DD770
//   0x1DD9A3 mov     rax, [rsp+0F8h+var_E0]
//   0x1DD9A8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DD9AD cmp     [rax+8], rcx
//   0x1DD9B1 setz    al
//   0x1DD9B4 jmp     loc_1DD252
//   0x1DD9B9 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DD9BD mov     rsi, [rcx]
//   0x1DD9C0 test    sil, 2
//   0x1DD9C4 jz      short loc_1DD9D3
//   0x1DD9C6 mov     [rsp+0F8h+var_E8], rcx
//   0x1DD9CB jmp     loc_1DD756
//   0x1DD9D0 mov     rcx, rdi
//   0x1DD9D3 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DD9D8 cmp     [rcx+10h], rdi
//   0x1DD9DC jnz     short loc_1DD9C6
//   0x1DD9DE mov     rdi, rsi
//   0x1DD9E1 mov     [rsp+0F8h+var_E8], rcx
//   0x1DD9E6 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1DD9EA mov     rsi, [rdi]
//   0x1DD9ED test    sil, 2
//   0x1DD9F1 jz      short loc_1DD9D0
//   0x1DD9F3 mov     [rsp+0F8h+var_E8], rdi
//   0x1DD9F8 jmp     loc_1DD756
//   0x1DD9FD mov     rax, rbx
//   0x1DDA00 jmp     loc_1DD0A5
//   0x1DDA05 mov     rdi, rbp
//   0x1DDA08 call    sub_30EA00
//   0x1DDA0D mov     rdi, r12
//   0x1DDA10 call    sub_30EA00
//   0x1DDA15 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DDA1A call    sub_30EA00
//   0x1DDA1F mov     rax, rbx
//   0x1DDA22 mov     rbx, [r13+8]
//   0x1DDA26 jmp     loc_1DD0A5
//   0x1DDA2B lea     r15, [rcx+18h]
//   0x1DDA2F jmp     loc_1DD70B
//   0x1DDA34 call    ___stack_chk_fail
//   0x1DDA39 mov     rcx, [r13+8]
//   0x1DDA3D mov     rax, rbx
//   0x1DDA40 jmp     loc_1DD29E
//   0x1DDA45 mov     rbx, rax
//   0x1DDA48 jmp     loc_413A8
//   0x1DDA4D mov     rbx, rax
//   0x1DDA50 jmp     loc_413B0
//   0x1DDA55 mov     rbx, rax
//   0x1DDA58 jmp     loc_413DD
//   0x1DDA5D mov     rbx, rax
//   0x1DDA60 jmp     loc_413B8
//   0x1DDA65 mov     rbx, rax
//   0x1DDA68 jmp     loc_413E7
// ============================================================

void sub_1DD020(/* signature unknown */)
{
    // see disassembly above
}

