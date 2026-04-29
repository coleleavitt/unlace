// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F5970
// Name:           sub_1F5970
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F5970 push    r12
//   0x1F5972 push    rbp
//   0x1F5973 push    rbx
//   0x1F5974 sub     rsp, 50h
//   0x1F5978 mov     rax, fs:28h
//   0x1F5981 mov     [rsp+68h+var_20], rax
//   0x1F5986 xor     eax, eax
//   0x1F5988 test    byte ptr [rdi+2], 8
//   0x1F598C jnz     short loc_1F599A
//   0x1F598E cmp     dword ptr [rdi+138h], 7
//   0x1F5995 mov     rbx, rdi
//   0x1F5998 jle     short loc_1F59C0
//   0x1F599A mov     rax, [rsp+68h+var_20]
//   0x1F599F sub     rax, fs:28h
//   0x1F59A8 jnz     loc_1F5C57
//   0x1F59AE add     rsp, 50h
//   0x1F59B2 pop     rbx
//   0x1F59B3 pop     rbp
//   0x1F59B4 pop     r12
//   0x1F59B6 retn
//   0x1F59B7 align 20h
//   0x1F59C0 mov     rbp, [rdi+3A8h]
//   0x1F59C7 mov     rdi, [rbp+18h]
//   0x1F59CB test    rdi, rdi
//   0x1F59CE jz      short loc_1F59ED
//   0x1F59D0 mov     qword ptr [rbp+20h], 0
//   0x1F59D8 call    _qfree
//   0x1F59DD mov     qword ptr [rbp+18h], 0
//   0x1F59E5 mov     qword ptr [rbp+28h], 0
//   0x1F59ED mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1F59F4 mov     rdi, rbx
//   0x1F59F7 call    sub_1F5770
//   0x1F59FC test    eax, eax
//   0x1F59FE jnz     loc_1F5C5C
//   0x1F5A04 cmp     byte ptr [rbx+140h], 0
//   0x1F5A0B mov     rbp, rsp
//   0x1F5A0E jnz     loc_1F5A9D
//   0x1F5A14 mov     rdi, rbx
//   0x1F5A17 lea     r12, off_4B1DB8
//   0x1F5A1E call    sub_378480
//   0x1F5A23 mov     rdi, rbx
//   0x1F5A26 call    sub_36CC80
//   0x1F5A2B pxor    xmm0, xmm0
//   0x1F5A2F mov     rsi, rsp
//   0x1F5A32 mov     rdi, rbx
//   0x1F5A35 mov     [rsp+68h+var_60], 0
//   0x1F5A3E mov     [rsp+68h+var_58], 0
//   0x1F5A47 mov     [rsp+68h+var_50], 0
//   0x1F5A50 mov     [rsp+68h+var_48], 0
//   0x1F5A59 mov     [rsp+68h+var_68], r12
//   0x1F5A5D mov     [rsp+68h+var_40], 0
//   0x1F5A66 mov     [rsp+68h+var_28], 0
//   0x1F5A6F movaps  [rsp+68h+var_38], xmm0
//   0x1F5A74 call    sub_315D30
//   0x1F5A79 mov     rdi, rbx
//   0x1F5A7C call    sub_1EC240
//   0x1F5A81 mov     rdi, [rsp+68h+var_40]
//   0x1F5A86 mov     [rsp+68h+var_68], r12
//   0x1F5A8A test    rdi, rdi
//   0x1F5A8D jz      short loc_1F5A9D
//   0x1F5A8F mov     qword ptr [rsp+68h+var_38], 0
//   0x1F5A98 call    _qfree
//   0x1F5A9D mov     rdi, rbx
//   0x1F5AA0 call    sub_FA4C0
//   0x1F5AA5 or      dword ptr [rbx], 80000h
//   0x1F5AAB mov     rdi, rbx
//   0x1F5AAE call    sub_1EE590
//   0x1F5AB3 mov     rdi, rbx
//   0x1F5AB6 call    sub_137B80
//   0x1F5ABB mov     rdi, rbx
//   0x1F5ABE call    sub_20E060
//   0x1F5AC3 mov     rdi, rbx
//   0x1F5AC6 call    sub_20E290
//   0x1F5ACB mov     rdi, rbx
//   0x1F5ACE call    sub_20E3D0
//   0x1F5AD3 mov     rdi, rbx
//   0x1F5AD6 call    sub_214810
//   0x1F5ADB mov     rsi, rbp
//   0x1F5ADE lea     rax, off_4B2530
//   0x1F5AE5 mov     rdi, rbx
//   0x1F5AE8 mov     [rsp+68h+var_60], 0
//   0x1F5AF1 mov     [rsp+68h+var_58], 0
//   0x1F5AFA mov     [rsp+68h+var_50], 0
//   0x1F5B03 mov     [rsp+68h+var_48], 0
//   0x1F5B0C mov     [rsp+68h+var_68], rax
//   0x1F5B10 call    sub_11AE20
//   0x1F5B15 mov     rdi, rbx
//   0x1F5B18 call    sub_214F00
//   0x1F5B1D mov     rdi, rbx
//   0x1F5B20 call    sub_20E5E0
//   0x1F5B25 mov     rsi, rbp
//   0x1F5B28 mov     rdi, rbx
//   0x1F5B2B mov     byte ptr [rsp+68h+var_40], 0
//   0x1F5B30 mov     [rsp+68h+var_60], 0
//   0x1F5B39 lea     rax, off_4B25F8
//   0x1F5B40 mov     [rsp+68h+var_58], 0
//   0x1F5B49 mov     [rsp+68h+var_50], 0
//   0x1F5B52 mov     [rsp+68h+var_48], 0
//   0x1F5B5B mov     [rsp+68h+var_68], rax
//   0x1F5B5F call    sub_11AFF0
//   0x1F5B64 mov     rdi, rbx
//   0x1F5B67 call    sub_1EBE80
//   0x1F5B6C mov     rdi, rbx
//   0x1F5B6F call    sub_215EE0
//   0x1F5B74 mov     eax, [rbx+48h]
//   0x1F5B77 cmp     eax, 10h
//   0x1F5B7A jbe     loc_1F5C48
//   0x1F5B80 cmp     eax, 0B0h
//   0x1F5B85 jz      short loc_1F5BF0
//   0x1F5B87 cmp     eax, 100h
//   0x1F5B8C jz      short loc_1F5BF0
//   0x1F5B8E mov     rax, [rbx+1B8h]
//   0x1F5B95 mov     rbp, [rbx+1B0h]
//   0x1F5B9C lea     rdx, [rax+rax*2]
//   0x1F5BA0 lea     rax, [rax+rdx*4]
//   0x1F5BA4 lea     r12, [rbp+rax*8+0]
//   0x1F5BA9 cmp     r12, rbp
//   0x1F5BAC jnz     short loc_1F5BB9
//   0x1F5BAE jmp     short loc_1F5BF0
//   0x1F5BB0 add     rbp, 68h ; 'h'
//   0x1F5BB4 cmp     r12, rbp
//   0x1F5BB7 jz      short loc_1F5BF0
//   0x1F5BB9 test    byte ptr [rbp+19h], 1
//   0x1F5BBD jz      short loc_1F5BB0
//   0x1F5BBF mov     rdi, [rbp+50h]
//   0x1F5BC3 mov     esi, 2
//   0x1F5BC8 call    _get_tinfo_property
//   0x1F5BCD and     eax, 0Fh
//   0x1F5BD0 cmp     al, 0Bh
//   0x1F5BD2 jnz     short loc_1F5BB0
//   0x1F5BD4 mov     edx, 15h
//   0x1F5BD9 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1F5BE0 mov     rdi, rbx
//   0x1F5BE3 xor     eax, eax
//   0x1F5BE5 call    sub_32B650
//   0x1F5BEA nop     word ptr [rax+rax+00h]
//   0x1F5BF0 mov     rdi, [rbx+3A8h]
//   0x1F5BF7 mov     rax, [rdi]
//   0x1F5BFA call    qword ptr [rax+40h]
//   0x1F5BFD mov     esi, 8
//   0x1F5C02 mov     rdi, rbx
//   0x1F5C05 call    sub_32B380
//   0x1F5C0A xor     esi, esi
//   0x1F5C0C xor     eax, eax
//   0x1F5C0E lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1F5C15 mov     rdi, rbx
//   0x1F5C18 call    sub_62520
//   0x1F5C1D mov     rax, [rsp+68h+var_20]
//   0x1F5C22 sub     rax, fs:28h
//   0x1F5C2B jnz     short loc_1F5C57
//   0x1F5C2D add     rsp, 50h
//   0x1F5C31 mov     rdi, rbx
//   0x1F5C34 mov     esi, 1
//   0x1F5C39 pop     rbx
//   0x1F5C3A pop     rbp
//   0x1F5C3B pop     r12
//   0x1F5C3D jmp     sub_31C610
//   0x1F5C42 align 8
//   0x1F5C48 mov     edi, 63h ; 'c'
//   0x1F5C4D call    _getinf
//   0x1F5C52 jmp     loc_1F5B80
//   0x1F5C57 call    ___stack_chk_fail
//   0x1F5C5C mov     rax, cs:under_debugger_ptr
//   0x1F5C63 cmp     byte ptr [rax], 0
//   0x1F5C66 jnz     loc_42B60
//   0x1F5C6C mov     rax, [rsp+68h+var_20]
//   0x1F5C71 sub     rax, fs:28h
//   0x1F5C7A jnz     short loc_1F5C57
//   0x1F5C7C mov     edi, 0C4B4h
//   0x1F5C81 call    sub_37CFE0
//   0x1F5C86 mov     rbx, rax
//   0x1F5C89 jmp     loc_42B62
// ============================================================

void sub_1F5970(/* signature unknown */)
{
    // see disassembly above
}

