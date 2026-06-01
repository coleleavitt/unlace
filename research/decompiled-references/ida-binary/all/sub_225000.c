// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x225000
// Name:           trace_dev_callback_t__::vfunc_0
// Function size:  1923 bytes (468 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x225000 cmp     rsi, 19h; switch 26 cases
//   0x225004 ja      def_22501C; jumptable 000000000022501C default case
//   0x22500A push    rbx
//   0x22500B mov     rbx, rdx
//   0x22500E lea     rdx, jpt_22501C
//   0x225015 movsxd  rax, ds:(jpt_22501C - 5E0B8Ch)[rdx+rsi*4]
//   0x225019 add     rax, rdx
//   0x22501C jmp     rax; switch jump
//   0x22501E align 20h
//   0x225020 mov     eax, [rbx]; jumptable 000000000022501C case 10
//   0x225022 cmp     eax, 2Fh ; '/'
//   0x225025 ja      loc_225530
//   0x22502B mov     edx, eax
//   0x22502D add     eax, 8
//   0x225030 add     rdx, [rbx+10h]
//   0x225034 mov     [rbx], eax
//   0x225036 mov     rbx, [rdx]
//   0x225039 mov     eax, [rbx+14h]
//   0x22503C and     eax, 0FFFFFFFh
//   0x225041 cmp     eax, 5
//   0x225044 jnz     loc_225760
//   0x22504A cmp     qword ptr [rbx+18h], 0FFFFFFFFFFFFFFFFh
//   0x22504F jz      short loc_225070
//   0x225051 mov     edi, [rbx+4]
//   0x225054 call    sub_234FE0
//   0x225059 test    rax, rax
//   0x22505C jz      short loc_225070
//   0x22505E xor     edx, edx
//   0x225060 mov     rsi, rbx
//   0x225063 mov     rdi, rax
//   0x225066 call    sub_222400
//   0x22506B nop     dword ptr [rax+rax+00h]
//   0x225070 lea     rax, qword_8CD748
//   0x225077 xor     esi, esi
//   0x225079 mov     rdi, [rax]
//   0x22507C add     rdi, 120h
//   0x225083 call    sub_3D80A0
//   0x225088 xor     eax, eax; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x22508A pop     rbx
//   0x22508B retn
//   0x22508C align 10h
//   0x225090 call    sub_20A960; jumptable 000000000022501C cases 23-25
//   0x225095 test    al, al
//   0x225097 jz      short loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x225099 mov     eax, [rbx]
//   0x22509B cmp     eax, 2Fh ; '/'
//   0x22509E ja      loc_225711
//   0x2250A4 mov     edx, eax
//   0x2250A6 add     eax, 8
//   0x2250A9 add     rdx, [rbx+10h]
//   0x2250AD mov     [rbx], eax
//   0x2250AF mov     rsi, [rdx]
//   0x2250B2 lea     rdi, qword_8CBAA0
//   0x2250B9 call    sub_2200C0
//   0x2250BE xor     eax, eax
//   0x2250C0 jmp     short loc_22508A
//   0x2250C2 align 8
//   0x2250C8 mov     rax, cs:dbg_ptr; jumptable 000000000022501C case 0
//   0x2250CF mov     rax, [rax]
//   0x2250D2 cmp     dword ptr [rax+10h], 0Ch
//   0x2250D6 jnz     loc_225618
//   0x2250DC mov     esi, 1
//   0x2250E1 lea     rdi, qword_8CBAA0
//   0x2250E8 call    sub_20EED0
//   0x2250ED xor     eax, eax
//   0x2250EF jmp     short loc_22508A
//   0x2250F1 align 8
//   0x2250F8 xor     esi, esi; jumptable 000000000022501C case 1
//   0x2250FA lea     rdi, qword_8CBAA0
//   0x225101 call    sub_20EED0
//   0x225106 xor     eax, eax
//   0x225108 jmp     short loc_22508A
//   0x22510A align 10h
//   0x225110 mov     eax, [rbx]; jumptable 000000000022501C case 11
//   0x225112 cmp     eax, 2Fh ; '/'
//   0x225115 ja      loc_2255E8
//   0x22511B mov     edx, eax
//   0x22511D add     eax, 8
//   0x225120 add     rdx, [rbx+10h]
//   0x225124 mov     [rbx], eax
//   0x225126 mov     rbx, [rdx]
//   0x225129 mov     edi, [rbx+4]
//   0x22512C call    sub_234FE0
//   0x225131 test    rax, rax
//   0x225134 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x22513A xor     edx, edx
//   0x22513C mov     rsi, rbx
//   0x22513F mov     rdi, rax
//   0x225142 call    sub_222400
//   0x225147 xor     eax, eax
//   0x225149 jmp     loc_22508A
//   0x22514E align 10h
//   0x225150 mov     edx, [rbx]; jumptable 000000000022501C case 13
//   0x225152 cmp     edx, 2Fh ; '/'
//   0x225155 ja      loc_2255C8
//   0x22515B mov     rax, [rbx+10h]
//   0x22515F lea     ecx, [rdx+8]
//   0x225162 mov     esi, edx
//   0x225164 mov     [rbx], ecx
//   0x225166 mov     rsi, [rax+rsi]
//   0x22516A cmp     ecx, 2Fh ; '/'
//   0x22516D ja      loc_225757
//   0x225173 add     edx, 10h
//   0x225176 add     rax, rcx
//   0x225179 mov     [rbx], edx
//   0x22517B mov     rax, [rax]
//   0x22517E test    byte ptr [rax+48h], 2
//   0x225182 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x225188 cmp     dword ptr [rax+2Ch], 3
//   0x22518C jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x225192 cmp     dword ptr [rsi+14h], 5
//   0x225196 jz      loc_22573E
//   0x22519C mov     rdx, [rsi+8]
//   0x2251A0 mov     rcx, [rax+38h]
//   0x2251A4 mov     esi, [rsi+4]
//   0x2251A7 lea     rdi, qword_8CBAA0
//   0x2251AE call    sub_221AF0
//   0x2251B3 xor     eax, eax
//   0x2251B5 jmp     loc_22508A
//   0x2251BA align 20h
//   0x2251C0 mov     eax, [rbx]; jumptable 000000000022501C case 14
//   0x2251C2 cmp     eax, 2Fh ; '/'
//   0x2251C5 ja      loc_2255B0
//   0x2251CB mov     edx, eax
//   0x2251CD add     eax, 8
//   0x2251D0 add     rdx, [rbx+10h]
//   0x2251D4 mov     [rbx], eax
//   0x2251D6 mov     rax, [rdx]
//   0x2251D9 xor     esi, esi
//   0x2251DB mov     edi, [rax+4]
//   0x2251DE mov     cs:dword_8CB678, edi
//   0x2251E4 call    sub_20B290
//   0x2251E9 jmp     loc_225070
//   0x2251EE align 10h
//   0x2251F0 mov     eax, [rbx]; jumptable 000000000022501C case 15
//   0x2251F2 cmp     eax, 2Fh ; '/'
//   0x2251F5 ja      loc_225600
//   0x2251FB mov     edx, eax
//   0x2251FD add     eax, 8
//   0x225200 add     rdx, [rbx+10h]
//   0x225204 mov     [rbx], eax
//   0x225206 mov     edi, [rdx]
//   0x225208 mov     esi, 1
//   0x22520D call    sub_20B290
//   0x225212 xor     eax, eax
//   0x225214 jmp     loc_22508A
//   0x225219 align 20h
//   0x225220 cmp     cs:byte_8CB698, 0; jumptable 000000000022501C case 16
//   0x225227 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x22522D mov     eax, [rbx]
//   0x22522F cmp     eax, 2Fh ; '/'
//   0x225232 ja      loc_2256E0
//   0x225238 mov     edx, eax
//   0x22523A add     eax, 8
//   0x22523D add     rdx, [rbx+10h]
//   0x225241 mov     [rbx], eax
//   0x225243 mov     rax, [rdx]
//   0x225246 mov     rdx, cs:qword_8CB680
//   0x22524D mov     [rax], rdx
//   0x225250 xor     eax, eax
//   0x225252 jmp     loc_22508A
//   0x225257 align 20h
//   0x225260 mov     edx, [rbx]; jumptable 000000000022501C case 17
//   0x225262 cmp     edx, 2Fh ; '/'
//   0x225265 ja      loc_225590
//   0x22526B mov     rcx, [rbx+10h]
//   0x22526F lea     esi, [rdx+8]
//   0x225272 mov     eax, edx
//   0x225274 mov     [rbx], esi
//   0x225276 movsxd  rax, dword ptr [rcx+rax]
//   0x22527A cmp     esi, 2Fh ; '/'
//   0x22527D ja      loc_22577A
//   0x225283 add     edx, 10h
//   0x225286 add     rcx, rsi
//   0x225289 mov     [rbx], edx
//   0x22528B test    eax, eax
//   0x22528D js      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x225293 lea     rdx, qword_8CC390
//   0x22529A cmp     rax, [rdx+8]
//   0x22529E jnb     loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2252A4 cmp     cs:byte_8CB698, 0
//   0x2252AB jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2252B1 mov     rsi, [rcx]
//   0x2252B4 lea     rcx, ds:0[rax*8]
//   0x2252BC sub     rcx, rax
//   0x2252BF mov     rax, [rdx]
//   0x2252C2 lea     rdi, [rax+rcx*8]
//   0x2252C6 test    rdi, rdi
//   0x2252C9 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2252CF test    rsi, rsi
//   0x2252D2 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2252D8 lea     rdx, qword_8CB680
//   0x2252DF call    sub_236190
//   0x2252E4 pop     rbx
//   0x2252E5 movzx   eax, al
//   0x2252E8 retn
//   0x2252E9 align 10h
//   0x2252F0 cmp     cs:byte_8CB698, 0; jumptable 000000000022501C case 18
//   0x2252F7 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2252FD lea     rdi, qword_8CB680
//   0x225304 call    sub_235020
//   0x225309 mov     eax, 1
//   0x22530E pop     rbx
//   0x22530F retn
//   0x225310 call    sub_20A960; jumptable 000000000022501C case 21
//   0x225315 test    al, al
//   0x225317 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x22531D mov     edx, [rbx]
//   0x22531F cmp     edx, 2Fh ; '/'
//   0x225322 ja      loc_225722
//   0x225328 mov     rax, [rbx+10h]
//   0x22532C lea     ecx, [rdx+8]
//   0x22532F mov     esi, edx
//   0x225331 mov     [rbx], ecx
//   0x225333 mov     rdi, [rax+rsi]
//   0x225337 cmp     ecx, 2Fh ; '/'
//   0x22533A ja      loc_225751
//   0x225340 add     edx, 10h
//   0x225343 add     rax, rcx
//   0x225346 mov     [rbx], edx
//   0x225348 mov     rax, [rax]
//   0x22534B mov     rdx, [rax+8]
//   0x22534F mov     esi, [rax+4]
//   0x225352 call    sub_221CA0
//   0x225357 xor     eax, eax
//   0x225359 jmp     loc_22508A
//   0x22535E align 20h
//   0x225360 mov     eax, [rbx]; jumptable 000000000022501C case 7
//   0x225362 cmp     eax, 2Fh ; '/'
//   0x225365 ja      loc_225578
//   0x22536B mov     edx, eax
//   0x22536D add     eax, 8
//   0x225370 add     rdx, [rbx+10h]
//   0x225374 mov     [rbx], eax
//   0x225376 mov     rax, [rdx]
//   0x225379 mov     edi, [rax+4]
//   0x22537C call    sub_234FE0
//   0x225381 mov     rbx, rax
//   0x225384 test    rax, rax
//   0x225387 jz      short loc_2253F3
//   0x225389 mov     rax, [rax+80h]
//   0x225390 test    rax, rax
//   0x225393 jnz     loc_2256F8
//   0x225399 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x2253A0 mov     rdi, rbx
//   0x2253A3 call    sub_2214A0
//   0x2253A8 test    byte ptr [rbx+99h], 8
//   0x2253AF jz      short loc_2253C7
//   0x2253B1 xor     ecx, ecx
//   0x2253B3 mov     edx, 1
//   0x2253B8 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x2253BF mov     rdi, rbx
//   0x2253C2 call    sub_222010
//   0x2253C7 cmp     byte ptr [rbx+98h], 0
//   0x2253CE jz      short loc_2253F3
//   0x2253D0 test    byte ptr [rbx+99h], 4
//   0x2253D7 jz      short loc_2253F3
//   0x2253D9 mov     ecx, cs:dword_8BA500
//   0x2253DF mov     edx, 2
//   0x2253E4 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x2253EB mov     rdi, rbx
//   0x2253EE call    sub_222010
//   0x2253F3 xor     edi, edi
//   0x2253F5 xor     esi, esi
//   0x2253F7 call    sub_20B290
//   0x2253FC mov     rdi, cs:qword_8CBC40
//   0x225403 test    rdi, rdi
//   0x225406 jz      short loc_22540D
//   0x225408 call    _qfclose
//   0x22540D mov     edx, 1
//   0x225412 mov     edi, offset stru_10000
//   0x225417 xor     esi, esi
//   0x225419 mov     cs:qword_8CBC40, 0
//   0x225424 call    _mark_builtin_widgets
//   0x225429 xor     eax, eax
//   0x22542B jmp     loc_22508A
//   0x225430 mov     eax, [rbx]; jumptable 000000000022501C case 8
//   0x225432 cmp     eax, 2Fh ; '/'
//   0x225435 ja      loc_225560
//   0x22543B mov     edx, eax
//   0x22543D add     eax, 8
//   0x225440 add     rdx, [rbx+10h]
//   0x225444 mov     [rbx], eax
//   0x225446 mov     rax, [rdx]
//   0x225449 lea     rdi, qword_8CBAA0
//   0x225450 mov     esi, [rax]
//   0x225452 call    sub_20F4C0
//   0x225457 xor     eax, eax
//   0x225459 jmp     loc_22508A
//   0x22545E align 20h
//   0x225460 mov     eax, [rbx]; jumptable 000000000022501C case 9
//   0x225462 cmp     eax, 2Fh ; '/'
//   0x225465 ja      loc_225548
//   0x22546B mov     edx, eax
//   0x22546D add     eax, 8
//   0x225470 add     rdx, [rbx+10h]
//   0x225474 mov     [rbx], eax
//   0x225476 mov     rax, [rdx]
//   0x225479 lea     rdi, qword_8CBB50
//   0x225480 mov     esi, [rax]
//   0x225482 call    sub_20B550
//   0x225487 xor     eax, eax
//   0x225489 jmp     loc_22508A
//   0x22548E align 10h
//   0x225490 mov     rax, cs:dbg_ptr; jumptable 000000000022501C case 4
//   0x225497 mov     rax, [rax]
//   0x22549A cmp     dword ptr [rax+10h], 0Ch
//   0x22549E jnz     loc_225640
//   0x2254A4 mov     cs:dword_8CBC00, 0FFFFFFFFh
//   0x2254AE xor     eax, eax
//   0x2254B0 mov     cs:dword_8CB678, 0
//   0x2254BA jmp     loc_22508A
//   0x2254BF align 20h
//   0x2254C0 mov     eax, [rbx]; jumptable 000000000022501C case 5
//   0x2254C2 cmp     eax, 2Fh ; '/'
//   0x2254C5 ja      short loc_225518
//   0x2254C7 mov     edx, eax
//   0x2254C9 add     eax, 8
//   0x2254CC add     rdx, [rbx+10h]
//   0x2254D0 mov     [rbx], eax
//   0x2254D2 lea     rax, dword_8CC5F0
//   0x2254D9 mov     rbx, [rdx]
//   0x2254DC mov     eax, [rax]
//   0x2254DE test    eax, eax
//   0x2254E0 jg      loc_2256A0
//   0x2254E6 cmp     cs:byte_8CB698, 0
//   0x2254ED jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2254F3 lea     rsi, aBacktracing; "Backtracing"
//   0x2254FA mov     rdi, rbx
//   0x2254FD call    sub_20B400
//   0x225502 xor     eax, eax
//   0x225504 jmp     loc_22508A
//   0x225509 align 10h
//   0x225510 xor     eax, eax; jumptable 000000000022501C default case
//   0x225512 retn
//   0x225513 align 8
//   0x225518 mov     rdx, [rbx+8]
//   0x22551C lea     rax, [rdx+8]
//   0x225520 mov     [rbx+8], rax
//   0x225524 jmp     short loc_2254D2
//   0x225526 align 10h
//   0x225530 mov     rdx, [rbx+8]
//   0x225534 lea     rax, [rdx+8]
//   0x225538 mov     [rbx+8], rax
//   0x22553C jmp     loc_225036
//   0x225541 align 8
//   0x225548 mov     rdx, [rbx+8]
//   0x22554C lea     rax, [rdx+8]
//   0x225550 mov     [rbx+8], rax
//   0x225554 jmp     loc_225476
//   0x225559 align 20h
//   0x225560 mov     rdx, [rbx+8]
//   0x225564 lea     rax, [rdx+8]
//   0x225568 mov     [rbx+8], rax
//   0x22556C jmp     loc_225446
//   0x225571 align 8
//   0x225578 mov     rdx, [rbx+8]
//   0x22557C lea     rax, [rdx+8]
//   0x225580 mov     [rbx+8], rax
//   0x225584 jmp     loc_225376
//   0x225589 align 10h
//   0x225590 mov     rax, [rbx+8]
//   0x225594 lea     rcx, [rax+8]
//   0x225598 mov     [rbx+8], rcx
//   0x22559C movsxd  rax, dword ptr [rax]
//   0x22559F lea     rdx, [rcx+8]
//   0x2255A3 mov     [rbx+8], rdx
//   0x2255A7 jmp     loc_22528B
//   0x2255AC align 10h
//   0x2255B0 mov     rdx, [rbx+8]
//   0x2255B4 lea     rax, [rdx+8]
//   0x2255B8 mov     [rbx+8], rax
//   0x2255BC jmp     loc_2251D6
//   0x2255C1 align 8
//   0x2255C8 mov     rdx, [rbx+8]
//   0x2255CC lea     rax, [rdx+8]
//   0x2255D0 mov     [rbx+8], rax
//   0x2255D4 mov     rsi, [rdx]
//   0x2255D7 lea     rdx, [rax+8]
//   0x2255DB mov     [rbx+8], rdx
//   0x2255DF jmp     loc_22517B
//   0x2255E4 align 8
//   0x2255E8 mov     rdx, [rbx+8]
//   0x2255EC lea     rax, [rdx+8]
//   0x2255F0 mov     [rbx+8], rax
//   0x2255F4 jmp     loc_225126
//   0x2255F9 align 20h
//   0x225600 mov     rdx, [rbx+8]
//   0x225604 lea     rax, [rdx+8]
//   0x225608 mov     [rbx+8], rax
//   0x22560C jmp     loc_225206
//   0x225611 align 8
//   0x225618 call    sub_21BA60
//   0x22561D mov     rax, cs:qword_8CB658
//   0x225624 mov     edi, eax
//   0x225626 test    eax, eax
//   0x225628 js      loc_2250DC
//   0x22562E call    sub_224990
//   0x225633 jmp     loc_2250DC
//   0x225638 align 20h
//   0x225640 mov     rbx, cs:qword_8CB730
//   0x225647 test    rbx, rbx
//   0x22564A jz      short loc_22566B
//   0x22564C mov     rdi, [rbx+18h]
//   0x225650 call    sub_20B920
//   0x225655 mov     rdi, rbx; void *
//   0x225658 mov     rbx, [rbx+10h]
//   0x22565C mov     esi, 28h ; '('; unsigned __int64
//   0x225661 call    __ZdlPvm; operator delete(void *,ulong)
//   0x225666 test    rbx, rbx
//   0x225669 jnz     short loc_22564C
//   0x22566B lea     rax, dword_8CB728
//   0x225672 mov     cs:qword_8CB730, 0
//   0x22567D mov     cs:qword_8CB738, rax
//   0x225684 mov     cs:qword_8CB740, rax
//   0x22568B mov     cs:qword_8CB748, 0
//   0x225696 call    sub_21BA60
//   0x22569B jmp     loc_2254A4
//   0x2256A0 lea     rax, dword_8CC428
//   0x2256A7 mov     edi, [rax]
//   0x2256A9 call    sub_234FE0
//   0x2256AE test    rax, rax
//   0x2256B1 jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2256B7 cmp     byte ptr [rax+99h], 0
//   0x2256BE jz      loc_225088; jumptable 000000000022501C cases 2,3,6,12,19,20,22
//   0x2256C4 lea     rsi, aSetuptracing+5; "Tracing"
//   0x2256CB mov     rdi, rbx
//   0x2256CE call    sub_20B400
//   0x2256D3 xor     eax, eax
//   0x2256D5 jmp     loc_22508A
//   0x2256DA align 20h
//   0x2256E0 mov     rdx, [rbx+8]
//   0x2256E4 lea     rax, [rdx+8]
//   0x2256E8 mov     [rbx+8], rax
//   0x2256EC jmp     loc_225243
//   0x2256F1 align 8
//   0x2256F8 shl     rax, 4
//   0x2256FC add     rax, [rbx+78h]
//   0x225700 mov     rdi, rbx
//   0x225703 movsx   esi, byte ptr [rax-8]
//   0x225707 call    sub_210FC0
//   0x22570C jmp     loc_225399
//   0x225711 mov     rdx, [rbx+8]
//   0x225715 lea     rax, [rdx+8]
//   0x225719 mov     [rbx+8], rax
//   0x22571D jmp     loc_2250AF
//   0x225722 mov     rdx, [rbx+8]
//   0x225726 lea     rax, [rdx+8]
//   0x22572A mov     [rbx+8], rax
//   0x22572E mov     rdi, [rdx]
//   0x225731 lea     rdx, [rax+8]
//   0x225735 mov     [rbx+8], rdx
//   0x225739 jmp     loc_225348
//   0x22573E mov     rdx, [rsi+20h]
//   0x225742 cmp     rdx, 0FFFFFFFFFFFFFFFFh
//   0x225746 jnz     loc_2251A0
//   0x22574C jmp     loc_22519C
//   0x225751 mov     rax, [rbx+8]
//   0x225755 jmp     short loc_225731
//   0x225757 mov     rax, [rbx+8]
//   0x22575B jmp     loc_2255D7
//   0x225760 mov     rax, cs:under_debugger_ptr
//   0x225767 cmp     byte ptr [rax], 0
//   0x22576A jnz     loc_12853A
//   0x225770 mov     edi, 0CE2h
//   0x225775 call    _interr
//   0x22577A mov     rcx, [rbx+8]
//   0x22577E jmp     loc_22559F
// ============================================================

void trace_dev_callback_t__::vfunc_0(/* signature unknown */)
{
    // see disassembly above
}

