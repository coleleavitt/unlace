// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x37A290
// Name:           sub_37A290
// Function size:  732 bytes (161 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x37A290 push    r15
//   0x37A292 lea     rdx, [rdi+0A0h]
//   0x37A299 mov     r15, rdi
//   0x37A29C push    r14
//   0x37A29E push    r13
//   0x37A2A0 push    r12
//   0x37A2A2 push    rbp
//   0x37A2A3 push    rbx
//   0x37A2A4 sub     rsp, 1E8h
//   0x37A2AB mov     r13, [rdi+68h]
//   0x37A2AF mov     eax, [rsi+8]
//   0x37A2B2 mov     rbp, [rdi+48h]
//   0x37A2B6 lea     r12, [rsp+218h+var_158]
//   0x37A2BE mov     r9, [rdi+8]
//   0x37A2C2 mov     rbx, fs:28h
//   0x37A2CB mov     [rsp+218h+var_40], rbx
//   0x37A2D3 mov     rbx, rsi
//   0x37A2D6 lea     ecx, [rax-5]
//   0x37A2D9 mov     r8, r12
//   0x37A2DC mov     rsi, r13
//   0x37A2DF mov     rdi, rbp
//   0x37A2E2 call    sub_3681D0
//   0x37A2E7 test    al, al
//   0x37A2E9 jnz     short loc_37A330
//   0x37A2EB xor     edi, edi
//   0x37A2ED lea     rsi, aSetMemberType; "set_member_type"
//   0x37A2F4 call    _set_error_string
//   0x37A2F9 mov     edi, 38h ; '8'
//   0x37A2FE call    _set_qerrno
//   0x37A303 mov     rdx, [rsp+218h+var_40]
//   0x37A30B sub     rdx, fs:28h
//   0x37A314 jnz     loc_37A557
//   0x37A31A add     rsp, 1E8h
//   0x37A321 pop     rbx
//   0x37A322 pop     rbp
//   0x37A323 pop     r12
//   0x37A325 pop     r13
//   0x37A327 pop     r14
//   0x37A329 pop     r15
//   0x37A32B retn
//   0x37A32C align 10h
//   0x37A330 mov     qword ptr [rbx+8], 0
//   0x37A338 lea     r14, [rsp+218h+var_1F0]
//   0x37A33D mov     rsi, r9
//   0x37A340 mov     [rsp+218h+var_1F0], 0
//   0x37A349 mov     rdi, r14
//   0x37A34C call    _get_type_by_tid
//   0x37A351 test    al, al
//   0x37A353 jnz     short loc_37A368
//   0x37A355 mov     rdi, r14
//   0x37A358 call    _clear_tinfo_t
//   0x37A35D xor     eax, eax
//   0x37A35F jmp     short loc_37A303
//   0x37A361 align 8
//   0x37A368 mov     rdi, [rsp+218h+var_1F0]
//   0x37A36D pxor    xmm0, xmm0
//   0x37A371 lea     rax, [rsp+218h+var_1E8]
//   0x37A376 mov     esi, 2
//   0x37A37B mov     [rsp+218h+var_1D8], 0
//   0x37A384 mov     [rsp+218h+ptr], 0
//   0x37A38D mov     [rsp+218h+var_178], 1
//   0x37A399 mov     [rsp+218h+var_170], 0FFFFFFFFh
//   0x37A3A4 mov     [rsp+218h+var_168], 0
//   0x37A3B0 mov     [rsp+218h+var_160], 0
//   0x37A3B8 mov     [rsp+218h+var_210], rax
//   0x37A3BD movaps  [rsp+218h+var_1E8], xmm0
//   0x37A3C2 movups  [rsp+218h+var_1D0], xmm0
//   0x37A3C7 movaps  [rsp+218h+var_1B8], xmm0
//   0x37A3CC movaps  [rsp+218h+var_1A8], xmm0
//   0x37A3D1 call    _get_tinfo_property
//   0x37A3D6 and     eax, 3Fh
//   0x37A3D9 mov     rdx, [r15+28h]
//   0x37A3DD mov     rsi, [rsp+218h+var_1F0]
//   0x37A3E2 cmp     al, 1Dh
//   0x37A3E4 jz      loc_37A520
//   0x37A3EA shl     rdx, 3
//   0x37A3EE lea     rax, [rsp+218h+var_1E8]
//   0x37A3F3 mov     qword ptr [rsp+218h+var_1E8], rdx
//   0x37A3F8 mov     rdi, rax
//   0x37A3FB xor     edx, edx
//   0x37A3FD mov     [rsp+218h+var_210], rax
//   0x37A402 call    _find_tinfo_udt_member
//   0x37A407 mov     [rsp+218h+var_204], eax
//   0x37A40B cmp     [rsp+218h+var_204], 0FFFFFFFFh
//   0x37A410 jz      loc_37A548
//   0x37A416 mov     rdx, r12
//   0x37A419 mov     rsi, rbp
//   0x37A41C mov     rdi, 0FFFFFFFFFFFFFFFFh
//   0x37A423 call    _get_data_elsize
//   0x37A428 mov     r8, rax
//   0x37A42B lea     rax, qword_2CCB598
//   0x37A432 cmp     qword ptr [rsp+218h+var_1D0], 0
//   0x37A438 lea     r9, haystack
//   0x37A43F mov     rax, [rax]
//   0x37A442 mov     rdi, [rax+688h]
//   0x37A449 jz      short loc_37A450
//   0x37A44B mov     r9, [rsp+218h+var_1D8]
//   0x37A450 imul    r8, [r15+88h]
//   0x37A458 lea     rax, [rsp+218h+var_1A8]
//   0x37A45D mov     rcx, r12
//   0x37A460 mov     rdx, rbp
//   0x37A463 mov     rsi, rax
//   0x37A466 mov     [rsp+218h+var_200], rax
//   0x37A46B mov     r15, rax
//   0x37A46E call    sub_614E90
//   0x37A473 test    al, al
//   0x37A475 jz      short loc_37A4D3
//   0x37A477 lea     rax, qword_2CCB598
//   0x37A47E mov     r8, r12
//   0x37A481 mov     rcx, r13
//   0x37A484 mov     rdx, rbp
//   0x37A487 mov     rsi, [rsp+218h+var_210]
//   0x37A48C mov     rax, [rax]
//   0x37A48F mov     rdi, [rax+688h]
//   0x37A496 call    sub_6BE720
//   0x37A49B mov     rax, qword ptr [rsp+218h+var_1A8+8]
//   0x37A4A0 lea     r8, [rsp+218h+var_1A8+8]
//   0x37A4A5 mov     rcx, r15
//   0x37A4A8 mov     rdi, r14
//   0x37A4AB movsxd  rdx, [rsp+218h+var_204]
//   0x37A4B0 mov     r9d, 0
//   0x37A4B6 mov     esi, 0Ch
//   0x37A4BB test    rax, rax
//   0x37A4BE cmovz   r8, rax
//   0x37A4C2 call    _set_tinfo_property4
//   0x37A4C7 test    eax, eax
//   0x37A4C9 setz    al
//   0x37A4CC movzx   eax, al
//   0x37A4CF mov     [rbx+8], rax
//   0x37A4D3 mov     rdi, [rsp+218h+var_200]
//   0x37A4D8 call    _clear_tinfo_t
//   0x37A4DD mov     rdi, [rsp+218h+ptr]; ptr
//   0x37A4E2 test    rdi, rdi
//   0x37A4E5 jz      short loc_37A4F5
//   0x37A4E7 mov     qword ptr [rsp+218h+var_1B8], 0
//   0x37A4F0 call    _qfree
//   0x37A4F5 mov     rdi, [rsp+218h+var_1D8]; ptr
//   0x37A4FA test    rdi, rdi
//   0x37A4FD jz      loc_37A355
//   0x37A503 mov     qword ptr [rsp+218h+var_1D0], 0
//   0x37A50C call    _qfree
//   0x37A511 mov     rdi, r14
//   0x37A514 call    _clear_tinfo_t
//   0x37A519 xor     eax, eax
//   0x37A51B jmp     loc_37A303
//   0x37A520 lea     rax, [rsp+218h+var_1E8]
//   0x37A525 mov     qword ptr [rsp+218h+var_1E8], rdx
//   0x37A52A mov     edx, 1
//   0x37A52F mov     rdi, rax
//   0x37A532 mov     [rsp+218h+var_210], rax
//   0x37A537 call    _find_tinfo_udt_member
//   0x37A53C jmp     loc_37A407
//   0x37A541 align 8
//   0x37A548 lea     rax, [rsp+218h+var_1A8]
//   0x37A54D mov     [rsp+218h+var_200], rax
//   0x37A552 jmp     loc_37A4D3
//   0x37A557 call    ___stack_chk_fail
//   0x37A55C mov     rbx, rax
//   0x37A55F jmp     loc_2B02E8
//   0x37A564 mov     rbx, rax
//   0x37A567 jmp     loc_2B02DE
// ============================================================

void sub_37A290(/* signature unknown */)
{
    // see disassembly above
}

