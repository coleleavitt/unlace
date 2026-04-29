// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1FB0F0
// Name:           sub_1FB0F0
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1FB0F0 push    r12
//   0x1FB0F2 push    rbp
//   0x1FB0F3 push    rbx
//   0x1FB0F4 sub     rsp, 50h
//   0x1FB0F8 mov     rax, fs:28h
//   0x1FB101 mov     [rsp+68h+var_20], rax
//   0x1FB106 xor     eax, eax
//   0x1FB108 test    byte ptr [rdi+2], 8
//   0x1FB10C jnz     short loc_1FB11A
//   0x1FB10E cmp     dword ptr [rdi+138h], 7
//   0x1FB115 mov     rbx, rdi
//   0x1FB118 jle     short loc_1FB140
//   0x1FB11A mov     rax, [rsp+68h+var_20]
//   0x1FB11F sub     rax, fs:28h
//   0x1FB128 jnz     loc_1FB3D7
//   0x1FB12E add     rsp, 50h
//   0x1FB132 pop     rbx
//   0x1FB133 pop     rbp
//   0x1FB134 pop     r12
//   0x1FB136 retn
//   0x1FB137 align 20h
//   0x1FB140 mov     rbp, [rdi+3A8h]
//   0x1FB147 mov     rdi, [rbp+18h]
//   0x1FB14B test    rdi, rdi
//   0x1FB14E jz      short loc_1FB16D
//   0x1FB150 mov     qword ptr [rbp+20h], 0
//   0x1FB158 call    _qfree
//   0x1FB15D mov     qword ptr [rbp+18h], 0
//   0x1FB165 mov     qword ptr [rbp+28h], 0
//   0x1FB16D mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1FB174 mov     rdi, rbx
//   0x1FB177 call    sub_1FAEF0
//   0x1FB17C test    eax, eax
//   0x1FB17E jnz     loc_1FB3DC
//   0x1FB184 cmp     byte ptr [rbx+140h], 0
//   0x1FB18B mov     rbp, rsp
//   0x1FB18E jnz     loc_1FB21D
//   0x1FB194 mov     rdi, rbx
//   0x1FB197 lea     r12, off_4D8A98
//   0x1FB19E call    sub_37EA40
//   0x1FB1A3 mov     rdi, rbx
//   0x1FB1A6 call    sub_373240
//   0x1FB1AB pxor    xmm0, xmm0
//   0x1FB1AF mov     rsi, rsp
//   0x1FB1B2 mov     rdi, rbx
//   0x1FB1B5 mov     [rsp+68h+var_60], 0
//   0x1FB1BE mov     [rsp+68h+var_58], 0
//   0x1FB1C7 mov     [rsp+68h+var_50], 0
//   0x1FB1D0 mov     [rsp+68h+var_48], 0
//   0x1FB1D9 mov     [rsp+68h+var_68], r12
//   0x1FB1DD mov     [rsp+68h+var_40], 0
//   0x1FB1E6 mov     [rsp+68h+var_28], 0
//   0x1FB1EF movaps  [rsp+68h+var_38], xmm0
//   0x1FB1F4 call    sub_31B9B0
//   0x1FB1F9 mov     rdi, rbx
//   0x1FB1FC call    sub_1F19C0
//   0x1FB201 mov     rdi, [rsp+68h+var_40]
//   0x1FB206 mov     [rsp+68h+var_68], r12
//   0x1FB20A test    rdi, rdi
//   0x1FB20D jz      short loc_1FB21D
//   0x1FB20F mov     qword ptr [rsp+68h+var_38], 0
//   0x1FB218 call    _qfree
//   0x1FB21D mov     rdi, rbx
//   0x1FB220 call    sub_FEAC0
//   0x1FB225 or      dword ptr [rbx], 80000h
//   0x1FB22B mov     rdi, rbx
//   0x1FB22E call    sub_1F3D10
//   0x1FB233 mov     rdi, rbx
//   0x1FB236 call    sub_13C180
//   0x1FB23B mov     rdi, rbx
//   0x1FB23E call    sub_2137E0
//   0x1FB243 mov     rdi, rbx
//   0x1FB246 call    sub_213A10
//   0x1FB24B mov     rdi, rbx
//   0x1FB24E call    sub_213B50
//   0x1FB253 mov     rdi, rbx
//   0x1FB256 call    sub_219F90
//   0x1FB25B mov     rsi, rbp
//   0x1FB25E lea     rax, off_4D9250
//   0x1FB265 mov     rdi, rbx
//   0x1FB268 mov     [rsp+68h+var_60], 0
//   0x1FB271 mov     [rsp+68h+var_58], 0
//   0x1FB27A mov     [rsp+68h+var_50], 0
//   0x1FB283 mov     [rsp+68h+var_48], 0
//   0x1FB28C mov     [rsp+68h+var_68], rax
//   0x1FB290 call    sub_11F420
//   0x1FB295 mov     rdi, rbx
//   0x1FB298 call    sub_21A680
//   0x1FB29D mov     rdi, rbx
//   0x1FB2A0 call    sub_213D60
//   0x1FB2A5 mov     rsi, rbp
//   0x1FB2A8 mov     rdi, rbx
//   0x1FB2AB mov     byte ptr [rsp+68h+var_40], 0
//   0x1FB2B0 mov     [rsp+68h+var_60], 0
//   0x1FB2B9 lea     rax, off_4D9318
//   0x1FB2C0 mov     [rsp+68h+var_58], 0
//   0x1FB2C9 mov     [rsp+68h+var_50], 0
//   0x1FB2D2 mov     [rsp+68h+var_48], 0
//   0x1FB2DB mov     [rsp+68h+var_68], rax
//   0x1FB2DF call    sub_11F5F0
//   0x1FB2E4 mov     rdi, rbx
//   0x1FB2E7 call    sub_1F1600
//   0x1FB2EC mov     rdi, rbx
//   0x1FB2EF call    sub_21B660
//   0x1FB2F4 mov     eax, [rbx+48h]
//   0x1FB2F7 cmp     eax, 10h
//   0x1FB2FA jbe     loc_1FB3C8
//   0x1FB300 cmp     eax, 0B0h
//   0x1FB305 jz      short loc_1FB370
//   0x1FB307 cmp     eax, 100h
//   0x1FB30C jz      short loc_1FB370
//   0x1FB30E mov     rax, [rbx+1B8h]
//   0x1FB315 mov     rbp, [rbx+1B0h]
//   0x1FB31C lea     rdx, [rax+rax*2]
//   0x1FB320 lea     rax, [rax+rdx*4]
//   0x1FB324 lea     r12, [rbp+rax*8+0]
//   0x1FB329 cmp     r12, rbp
//   0x1FB32C jnz     short loc_1FB339
//   0x1FB32E jmp     short loc_1FB370
//   0x1FB330 add     rbp, 68h ; 'h'
//   0x1FB334 cmp     r12, rbp
//   0x1FB337 jz      short loc_1FB370
//   0x1FB339 test    byte ptr [rbp+19h], 1
//   0x1FB33D jz      short loc_1FB330
//   0x1FB33F mov     rdi, [rbp+50h]
//   0x1FB343 mov     esi, 2
//   0x1FB348 call    _get_tinfo_property
//   0x1FB34D and     eax, 0Fh
//   0x1FB350 cmp     al, 0Bh
//   0x1FB352 jnz     short loc_1FB330
//   0x1FB354 mov     edx, 15h
//   0x1FB359 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1FB360 mov     rdi, rbx
//   0x1FB363 xor     eax, eax
//   0x1FB365 call    sub_331510
//   0x1FB36A nop     word ptr [rax+rax+00h]
//   0x1FB370 mov     rdi, [rbx+3A8h]
//   0x1FB377 mov     rax, [rdi]
//   0x1FB37A call    qword ptr [rax+40h]
//   0x1FB37D mov     esi, 8
//   0x1FB382 mov     rdi, rbx
//   0x1FB385 call    sub_331240
//   0x1FB38A xor     esi, esi
//   0x1FB38C xor     eax, eax
//   0x1FB38E lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1FB395 mov     rdi, rbx
//   0x1FB398 call    sub_669A0
//   0x1FB39D mov     rax, [rsp+68h+var_20]
//   0x1FB3A2 sub     rax, fs:28h
//   0x1FB3AB jnz     short loc_1FB3D7
//   0x1FB3AD add     rsp, 50h
//   0x1FB3B1 mov     rdi, rbx
//   0x1FB3B4 mov     esi, 1
//   0x1FB3B9 pop     rbx
//   0x1FB3BA pop     rbp
//   0x1FB3BB pop     r12
//   0x1FB3BD jmp     sub_322290
//   0x1FB3C2 align 8
//   0x1FB3C8 mov     edi, 63h ; 'c'
//   0x1FB3CD call    _getinf
//   0x1FB3D2 jmp     loc_1FB300
//   0x1FB3D7 call    ___stack_chk_fail
//   0x1FB3DC mov     rax, cs:under_debugger_ptr
//   0x1FB3E3 cmp     byte ptr [rax], 0
//   0x1FB3E6 jnz     loc_45D2A
//   0x1FB3EC mov     rax, [rsp+68h+var_20]
//   0x1FB3F1 sub     rax, fs:28h
//   0x1FB3FA jnz     short loc_1FB3D7
//   0x1FB3FC mov     edi, 0C4B4h
//   0x1FB401 call    sub_3835A0
//   0x1FB406 mov     rbx, rax
//   0x1FB409 jmp     loc_45D2C
// ============================================================

void sub_1FB0F0(/* signature unknown */)
{
    // see disassembly above
}

