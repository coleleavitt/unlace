// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x111C0
// Name:           sub_111C0
// Function size:  224 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x111C0 push    r13
//   0x111C2 push    r12
//   0x111C4 push    rbp
//   0x111C5 push    rbx
//   0x111C6 sub     rsp, 8
//   0x111CA test    rdx, rdx
//   0x111CD jz      loc_1127D
//   0x111D3 lea     r12, [rdx+rsi]
//   0x111D7 mov     rbp, rsi
//   0x111DA mov     esi, 4
//   0x111DF mov     rbx, rdx
//   0x111E2 lea     r13, [r12-1]
//   0x111E7 mov     rdi, r13
//   0x111EA call    _get_flags_ex
//   0x111EF and     eax, 600h
//   0x111F4 cmp     rax, 200h
//   0x111FA jz      short loc_11270
//   0x111FC test    rax, rax
//   0x111FF jz      short loc_11250
//   0x11201 mov     rdi, r12
//   0x11204 cmp     rdi, 0FFFFFFFFFFFFFFFFh
//   0x11208 jz      short loc_11250
//   0x1120A call    _get_item_end
//   0x1120F mov     r13, rax
//   0x11212 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x11216 jz      short loc_11250
//   0x11218 cmp     r12, rax
//   0x1121B jnb     short loc_11250
//   0x1121D mov     rdx, rbx
//   0x11220 mov     rdi, rbp
//   0x11223 mov     esi, 3
//   0x11228 xor     ecx, ecx
//   0x1122A call    _del_items
//   0x1122F add     rsp, 8
//   0x11233 mov     rsi, r13
//   0x11236 mov     rdi, r12
//   0x11239 pop     rbx
//   0x1123A mov     edx, 0C8h
//   0x1123F pop     rbp
//   0x11240 pop     r12
//   0x11242 pop     r13
//   0x11244 jmp     _auto_mark_range
//   0x11249 align 10h
//   0x11250 add     rsp, 8
//   0x11254 mov     rdx, rbx
//   0x11257 mov     rdi, rbp
//   0x1125A xor     ecx, ecx
//   0x1125C pop     rbx
//   0x1125D mov     esi, 3
//   0x11262 pop     rbp
//   0x11263 pop     r12
//   0x11265 pop     r13
//   0x11267 jmp     _del_items
//   0x1126C align 10h
//   0x11270 mov     rdi, r13
//   0x11273 call    _prev_not_tail
//   0x11278 mov     rdi, rax
//   0x1127B jmp     short loc_11204
//   0x1127D mov     rax, cs:under_debugger_ptr
//   0x11284 cmp     byte ptr [rax], 0
//   0x11287 jnz     loc_6FF6
//   0x1128D mov     edi, 7747h
//   0x11292 call    _interr
//   0x11297 nop     word ptr [rax+rax+00000000h]
// ============================================================

void sub_111C0(/* signature unknown */)
{
    // see disassembly above
}

