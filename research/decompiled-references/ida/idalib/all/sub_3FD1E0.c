// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3FD1E0
// Name:           sub_3FD1E0
// Function size:  256 bytes (65 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3FD1E0 push    r12; int
//   0x3FD1E2 push    rbp; int
//   0x3FD1E3 mov     rbp, rsi
//   0x3FD1E6 push    rbx; __int64
//   0x3FD1E7 mov     rbx, rdi
//   0x3FD1EA sub     rsp, 10h
//   0x3FD1EE mov     rax, fs:28h
//   0x3FD1F7 mov     [rsp+28h+var_20], rax; void *
//   0x3FD1FC xor     eax, eax
//   0x3FD1FE add     dword ptr [rdi+320h], 1
//   0x3FD205 mov     rdx, [rsi+8]
//   0x3FD209 lea     rdi, aConvertingStor_0; "Converting storage for segment %a..%a.."...
//   0x3FD210 mov     rsi, [rsi]
//   0x3FD213 call    sub_3BBF30
//   0x3FD218 mov     rdx, [rbp+8]
//   0x3FD21C mov     rsi, [rbp+0]
//   0x3FD220 mov     rdi, rbx; int
//   0x3FD223 mov     ecx, 80h
//   0x3FD228 call    sub_3D2F00
//   0x3FD22D mov     r12d, eax
//   0x3FD230 test    eax, eax
//   0x3FD232 jz      short loc_3FD270
//   0x3FD234 mov     eax, [rbx+320h]
//   0x3FD23A test    eax, eax
//   0x3FD23C jle     short loc_3FD247
//   0x3FD23E sub     eax, 1
//   0x3FD241 mov     [rbx+320h], eax
//   0x3FD247 mov     rax, [rsp+28h+var_20]
//   0x3FD24C sub     rax, fs:28h
//   0x3FD255 jnz     loc_3FD2DB
//   0x3FD25B add     rsp, 10h
//   0x3FD25F mov     eax, r12d
//   0x3FD262 pop     rbx
//   0x3FD263 pop     rbp
//   0x3FD264 pop     r12
//   0x3FD266 retn
//   0x3FD267 align 10h
//   0x3FD270 lea     rsi, [rbx+388h]; int
//   0x3FD277 xor     r8d, r8d
//   0x3FD27A mov     rcx, rbp; int
//   0x3FD27D xor     edx, edx; int
//   0x3FD27F mov     rdi, rbx; void *
//   0x3FD282 call    sub_3C07A0
//   0x3FD287 mov     r12d, eax
//   0x3FD28A test    eax, eax
//   0x3FD28C jnz     short loc_3FD234
//   0x3FD28E mov     rsi, [rbp+0]
//   0x3FD292 mov     edx, [rbp+8]
//   0x3FD295 lea     rcx, [rsp+28h+var_21]
//   0x3FD29A mov     rdi, rbx
//   0x3FD29D sub     edx, esi
//   0x3FD29F call    sub_3FD0A0
//   0x3FD2A4 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x3FD2A8 jz      short loc_3FD2D0
//   0x3FD2AA mov     rdx, [rbp+8]
//   0x3FD2AE mov     rsi, [rbp+0]
//   0x3FD2B2 mov     rdi, [rbx]
//   0x3FD2B5 call    sub_4D8B80
//   0x3FD2BA cmp     [rsp+28h+var_21], 0
//   0x3FD2BF jz      loc_3FD234
//   0x3FD2C5 mov     r12d, 0FFFFFFFCh
//   0x3FD2CB jmp     loc_3FD234
//   0x3FD2D0 mov     r12d, 0FFFFFFFDh
//   0x3FD2D6 jmp     loc_3FD234
//   0x3FD2DB call    ___stack_chk_fail
// ============================================================

void sub_3FD1E0(/* signature unknown */)
{
    // see disassembly above
}

