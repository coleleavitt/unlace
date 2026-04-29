// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1382E0
// Name:           sub_1382E0
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1382E0 push    rbp
//   0x1382E1 push    rbx
//   0x1382E2 mov     rbx, rdi
//   0x1382E5 sub     rsp, 8
//   0x1382E9 cmp     dword ptr [rdi+138h], 1
//   0x1382F0 jle     short loc_138310
//   0x1382F2 or      dword ptr [rdi], 200h
//   0x1382F8 xor     ebp, ebp
//   0x1382FA mov     rdi, rbx
//   0x1382FD mov     esi, 1
//   0x138302 call    sub_321ED0
//   0x138307 add     rsp, 8
//   0x13830B mov     eax, ebp
//   0x13830D pop     rbx
//   0x13830E pop     rbp
//   0x13830F retn
//   0x138310 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x138317 mov     esi, 1
//   0x13831C xor     eax, eax
//   0x13831E call    sub_66FA0
//   0x138323 mov     rdi, rbx
//   0x138326 call    nullsub_182
//   0x13832B mov     rbp, [rbx+208h]
//   0x138332 test    rbp, rbp
//   0x138335 jz      short loc_138351
//   0x138337 nop     word ptr [rax+rax+00000000h]
//   0x138340 mov     rdi, rbp
//   0x138343 call    sub_B62C0
//   0x138348 mov     rbp, [rbp+8]
//   0x13834C test    rbp, rbp
//   0x13834F jnz     short loc_138340
//   0x138351 mov     rdi, rbx
//   0x138354 call    sub_A6DC0
//   0x138359 mov     rdi, rbx
//   0x13835C call    sub_A7130
//   0x138361 or      dword ptr [rbx], 200h
//   0x138367 mov     rdi, rbx
//   0x13836A xor     eax, eax
//   0x13836C lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x138373 mov     esi, 1
//   0x138378 call    sub_66FA0
//   0x13837D mov     rdi, rbx
//   0x138380 call    sub_A0950
//   0x138385 test    eax, eax
//   0x138387 jnz     short loc_1383F0
//   0x138389 mov     rdi, [rbx+3A0h]
//   0x138390 test    rdi, rdi
//   0x138393 jz      short loc_138410
//   0x138395 call    sub_19FD50
//   0x13839A lea     rdx, nullsub_75
//   0x1383A1 mov     [rbx+3A8h], rax
//   0x1383A8 mov     rdi, rax
//   0x1383AB mov     rax, [rax]
//   0x1383AE mov     rax, [rax+10h]
//   0x1383B2 cmp     rax, rdx
//   0x1383B5 jnz     loc_138438
//   0x1383BB mov     rdi, [rbx+5D8h]
//   0x1383C2 mov     rdx, rbx
//   0x1383C5 mov     esi, 4
//   0x1383CA xor     eax, eax
//   0x1383CC call    sub_33E140
//   0x1383D1 mov     ebp, eax
//   0x1383D3 test    eax, eax
//   0x1383D5 jnz     loc_1382FA
//   0x1383DB mov     esi, 2
//   0x1383E0 mov     rdi, rbx
//   0x1383E3 call    sub_330F20
//   0x1383E8 mov     ebp, eax
//   0x1383EA jmp     loc_1382FA
//   0x1383EF align 10h
//   0x1383F0 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x1383F7 mov     esi, 1
//   0x1383FC mov     rdi, rbx
//   0x1383FF xor     eax, eax
//   0x138401 call    sub_66FA0
//   0x138406 jmp     short loc_138389
//   0x138408 align 10h
//   0x138410 mov     rdi, [rbx+5E0h]
//   0x138417 mov     rsi, rbx
//   0x13841A mov     rax, [rdi]
//   0x13841D call    qword ptr [rax+138h]
//   0x138423 mov     [rbx+3A0h], rax
//   0x13842A mov     rdi, rax
//   0x13842D jmp     loc_138395
//   0x138432 align 8
//   0x138438 call    rax
//   0x13843A jmp     loc_1383BB
// ============================================================

void sub_1382E0(/* signature unknown */)
{
    // see disassembly above
}

