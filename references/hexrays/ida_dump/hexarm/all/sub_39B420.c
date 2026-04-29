// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39B420
// Name:           sub_39B420
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39B420 push    rbx
//   0x39B421 sub     rsp, 10h
//   0x39B425 mov     eax, [rdi+14h]
//   0x39B428 mov     rbx, fs:28h
//   0x39B431 mov     [rsp+18h+var_10], rbx
//   0x39B436 mov     rbx, rdi
//   0x39B439 mov     edx, eax
//   0x39B43B and     edx, 0DFFFFFFFh
//   0x39B441 mov     [rdi+14h], edx
//   0x39B444 test    eax, 0E000000h
//   0x39B449 jnz     short loc_39B480
//   0x39B44B mov     eax, [rbx+10h]
//   0x39B44E lea     edx, [rax-1000004h]
//   0x39B454 cmp     edx, 1
//   0x39B457 jbe     loc_39B520
//   0x39B45D cmp     eax, 1000000h
//   0x39B462 jz      short loc_39B4C0
//   0x39B464 xor     eax, eax
//   0x39B466 mov     rdx, [rsp+18h+var_10]
//   0x39B46B sub     rdx, fs:28h
//   0x39B474 jnz     loc_39B552
//   0x39B47A add     rsp, 10h
//   0x39B47E pop     rbx
//   0x39B47F retn
//   0x39B480 cmp     edx, 4000000h
//   0x39B486 jnz     short loc_39B464
//   0x39B488 mov     eax, [rbx+10h]
//   0x39B48B lea     edx, [rax-1000004h]
//   0x39B491 cmp     edx, 1
//   0x39B494 jbe     loc_39B540
//   0x39B49A cmp     eax, 41h ; 'A'
//   0x39B49D jnz     short loc_39B464
//   0x39B49F mov     r8, cs:callui_ptr
//   0x39B4A6 xor     ecx, ecx
//   0x39B4A8 xor     edx, edx
//   0x39B4AA mov     edi, 64h ; 'd'
//   0x39B4AF lea     rsi, aSelectall; "SelectAll"
//   0x39B4B6 xor     eax, eax
//   0x39B4B8 call    qword ptr [r8]
//   0x39B4BB movzx   eax, al
//   0x39B4BE jmp     short loc_39B466
//   0x39B4C0 mov     rax, [rbx+8]
//   0x39B4C4 mov     rcx, [rax+8]
//   0x39B4C8 test    rcx, rcx
//   0x39B4CB jz      short loc_39B464
//   0x39B4CD mov     r8, cs:callui_ptr
//   0x39B4D4 xor     edx, edx
//   0x39B4D6 xor     eax, eax
//   0x39B4D8 lea     rsi, [rsp+18h+var_14]
//   0x39B4DD mov     edi, 7Eh ; '~'
//   0x39B4E2 call    qword ptr [r8]
//   0x39B4E5 test    al, al
//   0x39B4E7 jz      loc_39B464
//   0x39B4ED mov     eax, [rsp+18h+var_14]
//   0x39B4F1 test    eax, eax
//   0x39B4F3 jg      loc_39B464
//   0x39B4F9 mov     rax, [rbx+8]
//   0x39B4FD mov     rdx, [rax+80h]
//   0x39B504 test    byte ptr [rdx+25Dh], 10h
//   0x39B50B jz      short loc_39B52D
//   0x39B50D mov     rdi, [rax+10h]
//   0x39B511 call    sub_38A320
//   0x39B516 jmp     short loc_39B52D
//   0x39B518 align 20h
//   0x39B520 mov     rdi, [rbx+8]
//   0x39B524 xor     edx, edx
//   0x39B526 xor     esi, esi
//   0x39B528 call    sub_39AD00
//   0x39B52D mov     eax, 1
//   0x39B532 jmp     loc_39B466
//   0x39B537 align 20h
//   0x39B540 mov     rdi, [rbx+8]
//   0x39B544 mov     edx, 8
//   0x39B549 xor     esi, esi
//   0x39B54B call    sub_39AD00
//   0x39B550 jmp     short loc_39B52D
//   0x39B552 call    ___stack_chk_fail
// ============================================================

void sub_39B420(/* signature unknown */)
{
    // see disassembly above
}

