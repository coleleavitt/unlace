// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1AEA0
// Name:           sub_1AEA0
// Function size:  279 bytes (78 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1AEA0 push    r13
//   0x1AEA2 mov     esi, 7
//   0x1AEA7 push    r12
//   0x1AEA9 push    rbp
//   0x1AEAA push    rbx
//   0x1AEAB mov     rbx, rdi
//   0x1AEAE sub     rsp, 8
//   0x1AEB2 mov     rax, [rdi+10h]
//   0x1AEB6 mov     byte ptr [rdi+194h], 1
//   0x1AEBD lea     rbp, [rax+50h]
//   0x1AEC1 mov     rdi, rbp
//   0x1AEC4 call    sub_3BD30
//   0x1AEC9 test    eax, eax
//   0x1AECB jz      short loc_1AEFB
//   0x1AECD mov     esi, eax
//   0x1AECF mov     rdi, rbp
//   0x1AED2 call    sub_3BD50
//   0x1AED7 mov     rdx, rax
//   0x1AEDA test    rax, rax
//   0x1AEDD jz      short loc_1AEFB
//   0x1AEDF mov     rdi, [rbx+8]
//   0x1AEE3 mov     rsi, [rbx+10h]
//   0x1AEE7 call    sub_41B70
//   0x1AEEC mov     rdi, rax
//   0x1AEEF mov     rbp, rax
//   0x1AEF2 call    _is_mapped
//   0x1AEF7 test    al, al
//   0x1AEF9 jnz     short loc_1AF10
//   0x1AEFB add     rsp, 8
//   0x1AEFF pop     rbx
//   0x1AF00 pop     rbp
//   0x1AF01 pop     r12
//   0x1AF03 pop     r13
//   0x1AF05 retn
//   0x1AF06 align 10h
//   0x1AF10 mov     rdi, rbp
//   0x1AF13 call    _get_qword
//   0x1AF18 cmp     dword ptr [rbx+178h], 4
//   0x1AF1F mov     r12, rax
//   0x1AF22 jz      short loc_1AF70
//   0x1AF24 mov     rax, [rbx+18Ch]
//   0x1AF2B cmp     rax, r12
//   0x1AF2E jnb     short loc_1AEFB
//   0x1AF30 mov     r13, r12
//   0x1AF33 sub     r13, rax
//   0x1AF36 mov     rdi, r13
//   0x1AF39 call    _is_mapped
//   0x1AF3E test    al, al
//   0x1AF40 jz      short loc_1AEFB
//   0x1AF42 mov     rdi, r13
//   0x1AF45 call    _getseg
//   0x1AF4A test    rax, rax
//   0x1AF4D jz      short loc_1AEFB
//   0x1AF4F cmp     r13, [rax]
//   0x1AF52 jnz     short loc_1AEFB
//   0x1AF54 mov     [rbx+184h], r12
//   0x1AF5B mov     dword ptr [rbx+178h], 3
//   0x1AF65 jmp     short loc_1AF8D
//   0x1AF67 align 10h
//   0x1AF70 mov     rdx, [rbx+184h]
//   0x1AF77 cmp     rax, rdx
//   0x1AF7A jz      short loc_1AF8D
//   0x1AF7C mov     rsi, rax
//   0x1AF7F lea     rdi, aAutohideSessio; "AUTOHIDE SESSION\naddress of the GOT he"...
//   0x1AF86 xor     eax, eax
//   0x1AF88 call    sub_BFC0
//   0x1AF8D mov     r9, [rbx+18Ch]
//   0x1AF94 add     rsp, 8
//   0x1AF98 mov     rdi, rbp
//   0x1AF9B xor     esi, esi
//   0x1AF9D pop     rbx
//   0x1AF9E xor     r8d, r8d
//   0x1AFA1 pop     rbp
//   0x1AFA2 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x1AFA9 pop     r12
//   0x1AFAB mov     edx, 9
//   0x1AFB0 pop     r13
//   0x1AFB2 jmp     _op_offset
// ============================================================

void sub_1AEA0(/* signature unknown */)
{
    // see disassembly above
}

