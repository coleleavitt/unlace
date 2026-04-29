// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x580A0
// Name:           sub_580A0
// Function size:  1302 bytes (308 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x580A0 push    r15
//   0x580A2 push    r14
//   0x580A4 mov     r14, rdi
//   0x580A7 push    r13
//   0x580A9 push    r12
//   0x580AB push    rbp
//   0x580AC mov     rbp, r8
//   0x580AF push    rbx
//   0x580B0 mov     rbx, rdx
//   0x580B3 sub     rsp, 78h
//   0x580B7 mov     [rsp+0A8h+var_80], rsi
//   0x580BC mov     [rsp+0A8h+var_88], ecx
//   0x580C0 mov     [rsp+0A8h+var_81], r9b
//   0x580C5 mov     r12, fs:28h
//   0x580CE mov     [rsp+0A8h+var_40], r12
//   0x580D3 mov     r12, [rdi+8]
//   0x580D7 sub     r12, [rdi]
//   0x580DA mov     edi, 58h ; 'X'; unsigned __int64
//   0x580DF sar     r12, 3
//   0x580E3 mov     [rsi], r12d
//   0x580E6 call    __Znwm; operator new(ulong)
//   0x580EB pxor    xmm0, xmm0
//   0x580EF mov     edx, 0FFFFFFFFh
//   0x580F4 mov     r15, rax
//   0x580F7 lea     rax, unk_AEE20
//   0x580FE movups  xmmword ptr [r15+20h], xmm0
//   0x58103 movdqa  xmm0, cs:xmmword_94150
//   0x5810B add     rax, 10h
//   0x5810F mov     [r15+10h], r12d
//   0x58113 mov     [r15], rax
//   0x58116 mov     rax, cs:qword_93F98
//   0x5811D mov     [r15+8], r14
//   0x58121 mov     [r15+30h], rax
//   0x58125 mov     rax, 1FFFFFFFFh
//   0x5812F mov     dword ptr [r15+14h], 2
//   0x58137 mov     qword ptr [r15+18h], 0
//   0x5813F mov     [r15+38h], rax
//   0x58143 mov     dword ptr [r15+50h], 0FFFFFFFFh
//   0x5814B mov     [r15+54h], dx
//   0x58150 movups  xmmword ptr [r15+40h], xmm0
//   0x58155 test    rbp, rbp
//   0x58158 jz      short loc_5816E
//   0x5815A mov     rdi, rbp; s
//   0x5815D call    _strlen
//   0x58162 mov     r12, rax
//   0x58165 test    rax, rax
//   0x58168 jnz     loc_58460
//   0x5816E mov     rax, [r14+8]
//   0x58172 cmp     rax, [r14+10h]
//   0x58176 jz      loc_584A4
//   0x5817C mov     [rax], r15
//   0x5817F mov     rax, [r14+8]
//   0x58183 xor     r15d, r15d
//   0x58186 add     rax, 8
//   0x5818A mov     [r14+8], rax
//   0x5818E mov     rdx, [r14]
//   0x58191 mov     rbp, [rbx]
//   0x58194 sub     rax, rdx
//   0x58197 sar     rax, 3
//   0x5819B mov     [rsp+0A8h+var_70], rax
//   0x581A0 mov     rax, [rbx+8]
//   0x581A4 mov     [rsp+0A8h+var_78], rax
//   0x581A9 cmp     rbp, rax
//   0x581AC jz      loc_5858D
//   0x581B2 lea     rax, [rsp+0A8h+var_64]
//   0x581B7 mov     [rsp+0A8h+var_A0], rax
//   0x581BC mov     rdi, [rbp+0]
//   0x581C0 mov     rax, [rdi]
//   0x581C3 call    qword ptr [rax+20h]
//   0x581C6 mov     rdi, [rbp+0]
//   0x581CA mov     rbx, rax
//   0x581CD mov     rax, [rdi]
//   0x581D0 call    qword ptr [rax+18h]
//   0x581D3 add     eax, ebx
//   0x581D5 cmp     [rsp+0A8h+var_81], 0
//   0x581DA mov     [rsp+0A8h+var_A4], eax
//   0x581DE jnz     loc_58550
//   0x581E4 mov     rdi, [rbp+0]
//   0x581E8 lea     rax, [rsp+0A8h+var_58]
//   0x581ED mov     edx, 4
//   0x581F2 mov     [rsp+0A8h+var_98], rax
//   0x581F7 mov     rsi, rax
//   0x581FA mov     rax, [rdi]
//   0x581FD call    qword ptr [rax+30h]
//   0x58200 test    al, al
//   0x58202 jz      loc_582F0
//   0x58208 cmp     dword ptr [rsp+0A8h+var_58], 4
//   0x5820D jnz     loc_5856F
//   0x58213 mov     rax, [rsp+0A8h+var_80]
//   0x58218 mov     rdi, [rsp+0A8h+var_98]
//   0x5821D pxor    xmm1, xmm1
//   0x58221 xor     esi, esi
//   0x58223 mov     ecx, 4
//   0x58228 mov     edx, 1
//   0x5822D movups  [rsp+0A8h+var_50], xmm1
//   0x58232 mov     [rsp+0A8h+var_58], 0
//   0x5823B mov     ebx, [rax]
//   0x5823D call    _qvector_reserve
//   0x58242 mov     rdx, qword ptr [rsp+0A8h+var_50]
//   0x58247 mov     [rsp+0A8h+var_58], rax
//   0x5824C mov     [rsp+0A8h+var_8C], 0
//   0x58254 mov     [rax+rdx*4], ebx
//   0x58257 add     qword ptr [rsp+0A8h+var_50], 1
//   0x5825D mov     [rsp+0A8h+var_90], 2
//   0x58265 nop     word ptr [rax+rax+00000000h]
//   0x58270 mov     rdi, [rbp+0]
//   0x58274 mov     rax, [rdi]
//   0x58277 call    qword ptr [rax+20h]
//   0x5827A mov     edx, [rsp+0A8h+var_A4]
//   0x5827E cmp     rdx, rax
//   0x58281 jle     loc_584F8
//   0x58287 mov     rdi, [rbp+0]
//   0x5828B mov     rax, [rdi]
//   0x5828E call    qword ptr [rax+20h]
//   0x58291 mov     r13, [rbp+0]
//   0x58295 mov     rbx, rax
//   0x58298 mov     rax, [r13+0]
//   0x5829C mov     rdi, r13
//   0x5829F call    qword ptr [rax+20h]
//   0x582A2 mov     r12, rax
//   0x582A5 mov     rax, [r13+0]
//   0x582A9 mov     rsi, [rsp+0A8h+var_A0]
//   0x582AE mov     rdi, r13
//   0x582B1 mov     edx, 4
//   0x582B6 call    qword ptr [rax+30h]
//   0x582B9 test    al, al
//   0x582BB jz      short loc_582CE
//   0x582BD mov     rax, [r13+0]
//   0x582C1 mov     rsi, r12
//   0x582C4 mov     rdi, r13
//   0x582C7 call    qword ptr [rax+28h]
//   0x582CA test    al, al
//   0x582CC jnz     short loc_58330
//   0x582CE mov     rdi, [rsp+0A8h+var_58]
//   0x582D3 test    rdi, rdi
//   0x582D6 jz      short loc_582F0
//   0x582D8 mov     qword ptr [rsp+0A8h+var_50], 0
//   0x582E1 call    _qfree
//   0x582E6 nop     word ptr [rax+rax+00000000h]
//   0x582F0 xor     ebx, ebx
//   0x582F2 test    r15, r15
//   0x582F5 jz      short loc_58303
//   0x582F7 mov     rax, [r15]
//   0x582FA mov     rdi, r15
//   0x582FD call    qword ptr [rax+110h]
//   0x58303 mov     rax, [rsp+0A8h+var_40]
//   0x58308 sub     rax, fs:28h
//   0x58311 jnz     loc_58594
//   0x58317 add     rsp, 78h
//   0x5831B mov     eax, ebx
//   0x5831D pop     rbx
//   0x5831E pop     rbp
//   0x5831F pop     r12
//   0x58321 pop     r13
//   0x58323 pop     r14
//   0x58325 pop     r15
//   0x58327 retn
//   0x58328 align 10h
//   0x58330 movzx   edi, [rsp+0A8h+var_62]
//   0x58335 call    sub_72B50
//   0x5833A test    al, al
//   0x5833C jz      short loc_58380
//   0x5833E mov     rsi, [rsp+0A8h+var_98]
//   0x58343 mov     rdi, r14
//   0x58346 call    sub_55A80
//   0x5834B mov     eax, dword ptr [rsp+0A8h+var_50]
//   0x5834F add     eax, 1
//   0x58352 mov     [rsp+0A8h+var_90], eax
//   0x58356 movzx   eax, [rsp+0A8h+var_64]
//   0x5835B mov     rdi, [rbp+0]
//   0x5835F mov     ebx, ebx
//   0x58361 lea     rsi, [rax+rbx+2]
//   0x58366 mov     rax, [rdi]
//   0x58369 call    qword ptr [rax+28h]
//   0x5836C test    al, al
//   0x5836E jnz     loc_58270
//   0x58374 jmp     loc_582CE
//   0x58379 align 20h
//   0x58380 mov     rdx, qword ptr [rsp+0A8h+var_50]
//   0x58385 mov     rax, [rsp+0A8h+var_58]
//   0x5838A mov     r8d, ebx
//   0x5838D mov     rdi, r14
//   0x58390 mov     ecx, [rsp+0A8h+var_90]
//   0x58394 lea     rsi, [rsp+0A8h+var_68]
//   0x58399 mov     r9d, [rax+rdx*4-4]
//   0x5839E mov     rdx, rbp
//   0x583A1 call    sub_69100
//   0x583A6 test    al, al
//   0x583A8 jz      short loc_58356
//   0x583AA mov     rax, [r14]
//   0x583AD mov     edx, [rsp+0A8h+var_68]
//   0x583B1 mov     ecx, [rsp+0A8h+var_88]
//   0x583B5 movzx   edi, [rsp+0A8h+var_62]
//   0x583BA lea     r12, [rax+rdx*8]
//   0x583BE mov     rax, [r12]
//   0x583C2 mov     [rax+48h], ecx
//   0x583C5 mov     rax, [r12]
//   0x583C9 mov     [rax+4Ch], ebx
//   0x583CC mov     rax, [rsp+0A8h+var_58]
//   0x583D1 mov     rdx, qword ptr [rsp+0A8h+var_50]
//   0x583D6 mov     edx, [rax+rdx*4-4]
//   0x583DA mov     rax, [r12]
//   0x583DE mov     [rax+40h], edx
//   0x583E1 call    sub_73C30
//   0x583E6 movzx   edi, [rsp+0A8h+var_62]
//   0x583EB test    al, al
//   0x583ED jz      short loc_5840C
//   0x583EF mov     rax, [r12]
//   0x583F3 cmp     di, 113Eh
//   0x583F8 jz      loc_58560
//   0x583FE mov     ecx, [rsp+0A8h+var_8C]
//   0x58402 mov     [rax+50h], ecx
//   0x58405 lea     eax, [rcx+1]
//   0x58408 mov     [rsp+0A8h+var_8C], eax
//   0x5840C call    sub_72AA0
//   0x58411 test    al, al
//   0x58413 jz      loc_58356
//   0x58419 mov     rax, [r12]
//   0x5841D add     [rsp+0A8h+var_90], 1
//   0x58422 mov     rsi, [rsp+0A8h+var_58]
//   0x58427 mov     r12d, [rax+10h]
//   0x5842B mov     rax, qword ptr [rsp+0A8h+var_50]
//   0x58430 lea     rdx, [rax+1]
//   0x58434 cmp     qword ptr [rsp+0A8h+var_50+8], rdx
//   0x58439 jb      loc_584D0
//   0x5843F mov     [rsi+rax*4], r12d
//   0x58443 mov     [rsp+0A8h+var_8C], 0
//   0x5844B add     qword ptr [rsp+0A8h+var_50], 1
//   0x58451 jmp     loc_58356
//   0x58456 align 20h
//   0x58460 lea     r13, [rax+1]
//   0x58464 lea     rdi, [r15+18h]
//   0x58468 mov     ecx, 1
//   0x5846D xor     esi, esi
//   0x5846F mov     rdx, r13
//   0x58472 call    _qvector_reserve
//   0x58477 mov     [r15+18h], rax
//   0x5847B mov     rdi, rax; dest
//   0x5847E mov     rdx, r12; n
//   0x58481 mov     rsi, rbp; src
//   0x58484 mov     [r15+20h], r13
//   0x58488 call    _memmove
//   0x5848D mov     rax, [r15+18h]
//   0x58491 mov     byte ptr [rax+r12], 0
//   0x58496 mov     rax, [r14+8]
//   0x5849A cmp     rax, [r14+10h]
//   0x5849E jnz     loc_5817C
//   0x584A4 lea     rbp, [rsp+0A8h+var_60]
//   0x584A9 mov     rdi, r14
//   0x584AC mov     [rsp+0A8h+var_60], r15
//   0x584B1 mov     rsi, rbp
//   0x584B4 call    sub_57F80
//   0x584B9 mov     r15, [rsp+0A8h+var_60]
//   0x584BE mov     rax, [r14+8]
//   0x584C2 jmp     loc_5818E
//   0x584C7 align 10h
//   0x584D0 mov     rdi, [rsp+0A8h+var_98]
//   0x584D5 mov     ecx, 4
//   0x584DA call    _qvector_reserve
//   0x584DF mov     [rsp+0A8h+var_58], rax
//   0x584E4 mov     rsi, rax
//   0x584E7 mov     rax, qword ptr [rsp+0A8h+var_50]
//   0x584EC jmp     loc_5843F
//   0x584F1 align 8
//   0x584F8 mov     rdi, [rsp+0A8h+var_58]
//   0x584FD test    rdi, rdi
//   0x58500 jz      short loc_58510
//   0x58502 mov     qword ptr [rsp+0A8h+var_50], 0
//   0x5850B call    _qfree
//   0x58510 add     rbp, 8
//   0x58514 cmp     [rsp+0A8h+var_78], rbp
//   0x58519 jnz     loc_581BC
//   0x5851F mov     rdx, [r14]
//   0x58522 mov     rax, [r14+8]
//   0x58526 sub     rax, rdx
//   0x58529 sar     rax, 3
//   0x5852D mov     rcx, [rsp+0A8h+var_80]
//   0x58532 mov     ebx, 1
//   0x58537 mov     ecx, [rcx]
//   0x58539 mov     rdx, [rdx+rcx*8]
//   0x5853D mov     ecx, dword ptr [rsp+0A8h+var_70]
//   0x58541 sub     eax, ecx
//   0x58543 mov     [rdx+44h], eax
//   0x58546 jmp     loc_582F2
//   0x5854B align 10h
//   0x58550 lea     rax, [rsp+0A8h+var_58]
//   0x58555 mov     [rsp+0A8h+var_98], rax
//   0x5855A jmp     loc_58213
//   0x5855F align 20h
//   0x58560 cmp     dword ptr [rax+14h], 1Ah
//   0x58564 jnz     loc_583FE
//   0x5856A jmp     loc_5840C
//   0x5856F mov     rdi, [r14+258h]
//   0x58576 mov     edx, [rsp+0A8h+var_88]
//   0x5857A lea     rsi, aInvalidModuleU; "Invalid module %u stream signature"
//   0x58581 xor     eax, eax
//   0x58583 call    sub_37FD0
//   0x58588 jmp     loc_582F0
//   0x5858D mov     rax, [rsp+0A8h+var_70]
//   0x58592 jmp     short loc_5852D
//   0x58594 call    ___stack_chk_fail
//   0x58599 mov     rbx, rax
//   0x5859C jmp     loc_20404
//   0x585A1 mov     rbx, rax
//   0x585A4 jmp     loc_2042E
//   0x585A9 mov     rbx, rax
//   0x585AC lea     rbp, [rsp+0A8h+var_60]
//   0x585B1 jmp     loc_20409
// ============================================================

void sub_580A0(/* signature unknown */)
{
    // see disassembly above
}

