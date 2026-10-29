// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1897000
// Name:           sub_1897000
// Function size:  888 bytes (219 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1897000 push    r15; int
//   0x1897002 xor     r9d, r9d
//   0x1897005 xor     r8d, r8d
//   0x1897008 push    r14; int
//   0x189700A mov     r14d, ecx
//   0x189700D push    r13; int
//   0x189700F mov     r13d, edx
//   0x1897012 push    r12; int
//   0x1897014 mov     ecx, r13d
//   0x1897017 push    rbp; int
//   0x1897018 mov     rbp, rsi
//   0x189701B push    rbx; int
//   0x189701C mov     rbx, rdi
//   0x189701F sub     rsp, 0B8h
//   0x1897026 mov     rdi, [rdi]
//   0x1897029 mov     rdx, [rsi]
//   0x189702C mov     rsi, [rdi+0C0h]
//   0x1897033 call    sub_1A5B7C0
//   0x1897038 mov     r12, rax
//   0x189703B test    rax, rax
//   0x189703E jnz     short loc_1897045
//   0x1897040 test    r14b, r14b
//   0x1897043 jnz     short loc_1897098
//   0x1897045 test    r12, r12
//   0x1897048 jz      loc_18972F0
//   0x189704E movzx   edx, byte ptr [r12+1Ch]
//   0x1897054 xor     eax, eax
//   0x1897056 and     edx, 7Fh
//   0x1897059 cmp     dl, 14h
//   0x189705C jnz     short loc_189707F
//   0x189705E mov     rdx, [r12+78h]
//   0x1897063 test    rdx, rdx
//   0x1897066 jz      loc_1897350
//   0x189706C mov     rax, r12
//   0x189706F and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x1897073 jz      short loc_189707F
//   0x1897075 mov     rax, [rdx]
//   0x1897078 test    rax, rax
//   0x189707B cmovz   rax, r12
//   0x189707F add     rsp, 0B8h
//   0x1897086 pop     rbx
//   0x1897087 pop     rbp
//   0x1897088 pop     r12
//   0x189708A pop     r13
//   0x189708C pop     r14
//   0x189708E pop     r15
//   0x1897090 retn
//   0x1897091 align 8
//   0x1897098 mov     r14, [rbx]
//   0x189709B mov     rsi, [rbp+0]
//   0x189709F lea     rdi, [rsp+0E8h+var_C8]
//   0x18970A4 pxor    xmm0, xmm0
//   0x18970A8 mov     rax, 101010101h
//   0x18970B2 movaps  xmmword ptr [rsp+0E8h+var_A8], xmm0; int
//   0x18970B7 lea     r12, [rsp+0E8h+var_D8]
//   0x18970BC mov     qword ptr [rsp+0E8h+var_B0], rax; int
//   0x18970C1 lea     rax, unk_2BC6DB0
//   0x18970C8 mov     r15, [r14+0C0h]
//   0x18970CF mov     qword ptr [rsp+0E8h+var_D8], rsi; int
//   0x18970D4 add     rax, 10h
//   0x18970D8 mov     [rsp+0E8h+var_D0], r13d; int
//   0x18970DD mov     qword ptr [rsp+0E8h+var_B8], rax; int
//   0x18970E2 call    sub_B85890
//   0x18970E7 lea     rax, [rsp+0E8h+var_98]
//   0x18970EC xor     r9d, r9d
//   0x18970EF mov     r8, r15
//   0x18970F2 mov     qword ptr [rsp+0E8h+var_E0], rax; int
//   0x18970F7 mov     rdi, rax
//   0x18970FA xor     ecx, ecx
//   0x18970FC mov     rdx, r12
//   0x18970FF push    1
//   0x1897101 mov     rsi, r14
//   0x1897104 mov     r15, rdi
//   0x1897107 push    0
//   0x1897109 push    0
//   0x189710B push    0
//   0x189710D push    1
//   0x189710F lea     rax, [rsp+110h+var_B8]
//   0x1897114 push    rax
//   0x1897115 call    sub_1A6BD60
//   0x189711A add     rsp, 30h
//   0x189711E cmp     qword ptr [rsp+0E8h+var_98], 0
//   0x1897124 jz      loc_1897370
//   0x189712A mov     edx, 14E9h
//   0x189712F mov     rsi, rbx
//   0x1897132 mov     rdi, r12
//   0x1897135 mov     r14, [rbx]
//   0x1897138 call    sub_168B9B0
//   0x189713D mov     rsi, [rbp+0]
//   0x1897141 mov     edx, 5
//   0x1897146 mov     rdi, r12
//   0x1897149 call    sub_AE9DF0
//   0x189714E mov     rsi, r15; int
//   0x1897151 mov     ecx, 1; int
//   0x1897156 mov     rdx, r12; int
//   0x1897159 mov     rdi, r14; int
//   0x189715C call    sub_1A60AF0
//   0x1897161 mov     rsi, qword ptr [rsp+0E8h+var_D8]
//   0x1897166 test    rsi, rsi
//   0x1897169 jz      short loc_189717A
//   0x189716B mov     rdi, qword ptr [rsp+0E8h+var_D0]
//   0x1897170 test    rdi, rdi
//   0x1897173 jz      short loc_189717A
//   0x1897175 call    sub_1580C40
//   0x189717A mov     rdi, qword ptr [rsp+0E8h+var_E0]
//   0x189717F call    sub_183AA90
//   0x1897184 mov     r12, rax
//   0x1897187 test    rax, rax
//   0x189718A jz      loc_2E99C0
//   0x1897190 movzx   eax, byte ptr [rax+1Ch]
//   0x1897194 and     eax, 7Fh
//   0x1897197 cmp     al, 14h
//   0x1897199 jnz     loc_2E99C0
//   0x189719F mov     rdx, [r12+28h]
//   0x18971A4 mov     rax, rdx
//   0x18971A7 and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18971AB and     edx, 7
//   0x18971AE mov     edx, 0
//   0x18971B3 cmovnz  rax, rdx
//   0x18971B7 mov     [rbp+0], rax
//   0x18971BB mov     r14, [rsp+0E8h+var_50]
//   0x18971C3 mov     rbp, [rsp+0E8h+var_58]
//   0x18971CB cmp     r14, rbp
//   0x18971CE jz      loc_18972B4
//   0x18971D4 nop     dword ptr [rax+00h]
//   0x18971D8 mov     r15, [rbp+0]
//   0x18971DC test    r15, r15
//   0x18971DF jz      loc_189729F
//   0x18971E5 mov     rax, [rbp+8]
//   0x18971E9 test    rax, rax
//   0x18971EC jz      loc_189729F
//   0x18971F2 cmp     r15, rax
//   0x18971F5 jnb     loc_1897320
//   0x18971FB mov     ebx, [r15+218h]
//   0x1897202 mov     r13, [r15+210h]
//   0x1897209 shl     rbx, 6
//   0x189720D add     rbx, r13
//   0x1897210 cmp     r13, rbx
//   0x1897213 jz      short loc_189723E
//   0x1897215 nop     dword ptr [rax]
//   0x1897218 sub     rbx, 40h ; '@'
//   0x189721C mov     rdi, [rbx+18h]; void *
//   0x1897220 lea     rdx, [rbx+28h]
//   0x1897224 cmp     rdi, rdx
//   0x1897227 jz      loc_1897310
//   0x189722D call    __ZdlPv; operator delete(void *)
//   0x1897232 cmp     r13, rbx
//   0x1897235 jnz     short loc_1897218
//   0x1897237 mov     rbx, [r15+210h]
//   0x189723E lea     rax, [r15+220h]
//   0x1897245 cmp     rbx, rax
//   0x1897248 jz      short loc_1897252
//   0x189724A mov     rdi, rbx; ptr
//   0x189724D call    _free
//   0x1897252 mov     rdi, [r15+1A0h]; ptr
//   0x1897259 lea     rax, [r15+1B0h]
//   0x1897260 cmp     rdi, rax
//   0x1897263 jz      short loc_189726A
//   0x1897265 call    _free
//   0x189726A lea     rbx, [r15+180h]
//   0x1897271 lea     r13, [r15+40h]
//   0x1897275 nop     dword ptr [rax]
//   0x1897278 mov     rdi, [rbx]; void *
//   0x189727B lea     rdx, [rbx+10h]
//   0x189727F cmp     rdi, rdx
//   0x1897282 jz      short loc_1897300
//   0x1897284 call    __ZdlPv; operator delete(void *)
//   0x1897289 sub     rbx, 20h ; ' '
//   0x189728D cmp     rbx, r13
//   0x1897290 jnz     short loc_1897278
//   0x1897292 mov     esi, 3A0h; unsigned __int64
//   0x1897297 mov     rdi, r15; void *
//   0x189729A call    __ZdlPvm; operator delete(void *,ulong)
//   0x189729F add     rbp, 18h
//   0x18972A3 cmp     r14, rbp
//   0x18972A6 jnz     loc_18971D8
//   0x18972AC mov     rbp, [rsp+0E8h+var_58]
//   0x18972B4 test    rbp, rbp
//   0x18972B7 jz      short loc_18972C1
//   0x18972B9 mov     rdi, rbp; void *
//   0x18972BC call    __ZdlPv; operator delete(void *)
//   0x18972C1 mov     r13, qword ptr [rsp+0E8h+var_E0]
//   0x18972C6 mov     rdi, [rsp+0E8h+ptr]; ptr
//   0x18972CB add     r13, 20h ; ' '
//   0x18972CF cmp     rdi, r13
//   0x18972D2 jz      loc_1897045
//   0x18972D8 call    _free
//   0x18972DD test    r12, r12
//   0x18972E0 jnz     loc_189704E
//   0x18972E6 nop     word ptr [rax+rax+00000000h]
//   0x18972F0 xor     eax, eax
//   0x18972F2 jmp     loc_189707F
//   0x18972F7 align 20h
//   0x1897300 sub     rbx, 20h ; ' '
//   0x1897304 cmp     rbx, r13
//   0x1897307 jnz     loc_1897278
//   0x189730D jmp     short loc_1897292
//   0x189730F align 10h
//   0x1897310 cmp     r13, rbx
//   0x1897313 jnz     loc_1897218
//   0x1897319 jmp     loc_1897237
//   0x189731E align 20h
//   0x1897320 lea     rdx, [rax+3A00h]
//   0x1897327 cmp     r15, rdx
//   0x189732A ja      loc_18971FB
//   0x1897330 mov     edx, [rax+3A80h]
//   0x1897336 lea     ecx, [rdx+1]
//   0x1897339 mov     [rax+3A80h], ecx
//   0x189733F mov     [rax+rdx*8+3A00h], r15
//   0x1897347 jmp     loc_189729F
//   0x189734C align 10h
//   0x1897350 mov     rsi, [r12+60h]
//   0x1897355 lea     rdi, [rsi+58h]
//   0x1897359 call    sub_A794E0
//   0x189735E mov     rdx, [r12+78h]
//   0x1897363 jmp     loc_189706C
//   0x1897368 align 10h
//   0x1897370 xor     r12d, r12d
//   0x1897373 jmp     loc_18971BB
// ============================================================

void sub_1897000(/* signature unknown */)
{
    // see disassembly above
}

