// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x308080
// Name:           sub_308080
// Function size:  1013 bytes (205 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x308080 push    r14
//   0x308082 push    r13
//   0x308084 push    r12
//   0x308086 push    rbp
//   0x308087 push    rbx
//   0x308088 sub     rsp, 20h
//   0x30808C mov     rbp, fs:28h
//   0x308095 mov     [rsp+48h+var_30], rbp
//   0x30809A mov     rbp, rdi
//   0x30809D mov     rdi, [rdi+20h]
//   0x3080A1 mov     eax, [rdi]
//   0x3080A3 cmp     eax, 4
//   0x3080A6 jz      short loc_3080D0
//   0x3080A8 cmp     eax, 14h
//   0x3080AB jz      short loc_30810F
//   0x3080AD mov     rax, [rsp+48h+var_30]
//   0x3080B2 sub     rax, fs:28h
//   0x3080BB jnz     loc_308434
//   0x3080C1 add     rsp, 20h
//   0x3080C5 xor     eax, eax
//   0x3080C7 pop     rbx
//   0x3080C8 pop     rbp
//   0x3080C9 pop     r12
//   0x3080CB pop     r13
//   0x3080CD pop     r14
//   0x3080CF retn
//   0x3080D0 add     rdi, 20h ; ' '
//   0x3080D4 lea     rsi, [rsp+48h+var_38]
//   0x3080D9 xor     edx, edx
//   0x3080DB mov     ebx, [rbp+38h]
//   0x3080DE call    sub_1196C0
//   0x3080E3 mov     rdi, [rbp+20h]
//   0x3080E7 test    al, al
//   0x3080E9 jz      short loc_308108
//   0x3080EB cmp     rbx, [rsp+48h+var_38]
//   0x3080F0 jnz     short loc_308108
//   0x3080F2 lea     rsi, [rdi+40h]
//   0x3080F6 lea     rdi, [rbp+28h]
//   0x3080FA call    sub_11EAC0
//   0x3080FF jmp     short loc_3080AD
//   0x308101 align 8
//   0x308108 mov     eax, [rdi]
//   0x30810A cmp     eax, 14h
//   0x30810D jnz     short loc_3080AD
//   0x30810F mov     rax, [rbp+8]
//   0x308113 cmp     byte ptr [rdi+20h], 1
//   0x308117 mov     rbx, [rax+5E0h]
//   0x30811E jz      loc_3083A8
//   0x308124 lea     rsi, [rsp+48h+var_40]
//   0x308129 call    sub_1161E0
//   0x30812E test    rax, rax
//   0x308131 jz      loc_3080AD
//   0x308137 mov     rdx, [rsp+48h+var_40]
//   0x30813C cmp     byte ptr [rdx], 1
//   0x30813F jnz     loc_3080AD
//   0x308145 mov     ecx, [rdx+8]
//   0x308148 cmp     [rbx+3Ch], ecx
//   0x30814B jnz     loc_3080AD
//   0x308151 xor     edx, edx
//   0x308153 lea     rsi, [rsp+48h+var_38]
//   0x308158 mov     rdi, rax
//   0x30815B mov     ebx, [rbp+38h]
//   0x30815E call    sub_1196C0
//   0x308163 test    al, al
//   0x308165 jz      loc_3080AD
//   0x30816B cmp     rbx, [rsp+48h+var_38]
//   0x308170 jnz     loc_3080AD
//   0x308176 mov     rax, [rbp+8]
//   0x30817A mov     r13, [rax+5D8h]
//   0x308181 mov     rax, [rbp+20h]
//   0x308185 mov     dword ptr [rax], 4
//   0x30818B mov     rax, [rbp+20h]
//   0x30818F lea     rdi, [rax+30h]
//   0x308193 call    sub_1166E0
//   0x308198 mov     edi, 50h ; 'P'
//   0x30819D call    j__qalloc_or_throw
//   0x3081A2 mov     r12, rax
//   0x3081A5 mov     rax, [rbp+20h]
//   0x3081A9 mov     rdi, r12
//   0x3081AC lea     r14, [r12+20h]
//   0x3081B1 mov     rsi, [rax+18h]
//   0x3081B5 mov     rax, 0FFFFFFFF00000000h
//   0x3081BF mov     qword ptr [r12+28h], 0
//   0x3081C8 mov     [r12+20h], rax
//   0x3081CD mov     [r12+30h], rax
//   0x3081D2 mov     qword ptr [r12+38h], 0
//   0x3081DB mov     [r12+40h], rax
//   0x3081E0 mov     qword ptr [r12+48h], 0
//   0x3081E9 call    sub_329320
//   0x3081EE mov     rbx, [rbp+20h]
//   0x3081F2 lea     rdi, [rbx+20h]
//   0x3081F6 call    sub_1166E0
//   0x3081FB mov     byte ptr [rbx+20h], 4
//   0x3081FF lea     rsi, aGetCurrent; "get_current"
//   0x308206 mov     rdi, r14
//   0x308209 mov     [rbx+28h], r12
//   0x30820D mov     rax, [rbp+20h]
//   0x308211 mov     edx, [rax+44h]
//   0x308214 mov     [rax+24h], edx
//   0x308217 mov     dword ptr [r12], 38h ; '8'
//   0x30821F call    sub_116DE0
//   0x308224 mov     edi, 138h
//   0x308229 call    j__qalloc_or_throw
//   0x30822E pxor    xmm0, xmm0
//   0x308232 mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
//   0x308239 mov     rbx, rax
//   0x30823C mov     qword ptr [rax+8], 0
//   0x308244 mov     qword ptr [rax+10h], 0
//   0x30824C mov     qword ptr [rax+18h], 0
//   0x308254 mov     qword ptr [rax+30h], 0
//   0x30825C mov     qword ptr [rax+48h], 0
//   0x308264 mov     qword ptr [rax+50h], 0
//   0x30826C mov     qword ptr [rax+58h], 0
//   0x308274 mov     qword ptr [rax+60h], 0
//   0x30827C mov     qword ptr [rax+68h], 0
//   0x308284 mov     qword ptr [rax+70h], 0
//   0x30828C mov     qword ptr [rax+88h], 0
//   0x308297 mov     qword ptr [rax+90h], 0
//   0x3082A2 mov     qword ptr [rax+98h], 0
//   0x3082AD mov     qword ptr [rax+0B0h], 0
//   0x3082B8 mov     qword ptr [rax+0B8h], 0
//   0x3082C3 mov     qword ptr [rax+0C0h], 0
//   0x3082CE mov     qword ptr [rax+0D8h], 0
//   0x3082D9 mov     qword ptr [rax+0F0h], 0
//   0x3082E4 mov     qword ptr [rax+0F8h], 0
//   0x3082EF mov     qword ptr [rax+100h], 0
//   0x3082FA mov     qword ptr [rax+118h], 0
//   0x308305 mov     qword ptr [rax+120h], 0
//   0x308310 movups  xmmword ptr [rax+20h], xmm0
//   0x308314 movups  xmmword ptr [rax+38h], xmm0
//   0x308318 movups  xmmword ptr [rax+78h], xmm0
//   0x30831C movups  xmmword ptr [rax+0A0h], xmm0
//   0x308323 movups  xmmword ptr [rax+0C8h], xmm0
//   0x30832A movups  xmmword ptr [rax+0E0h], xmm0
//   0x308331 movups  xmmword ptr [rax+108h], xmm0
//   0x308338 movups  xmmword ptr [rax+128h], xmm0
//   0x30833F mov     byte ptr [r12+40h], 8
//   0x308345 mov     [r12+48h], rax
//   0x30834A mov     rax, [rbp+20h]
//   0x30834E mov     eax, [rax+44h]
//   0x308351 mov     [r12+44h], eax
//   0x308356 or      dword ptr [rbx+118h], 15h
//   0x30835D cmp     byte ptr [r13+518h], 0
//   0x308365 jz      short loc_3083D8
//   0x308367 add     r13, 518h
//   0x30836E mov     rsi, r13
//   0x308371 mov     rdi, rbx
//   0x308374 call    sub_32D9E0
//   0x308379 test    al, al
//   0x30837B jz      loc_308439
//   0x308381 mov     rsi, [rbp+8]
//   0x308385 mov     rdi, rbx
//   0x308388 call    sub_328C40
//   0x30838D mov     rdx, [rbp+10h]
//   0x308391 mov     eax, [rdx+18h]
//   0x308394 and     ah, 0FDh
//   0x308397 or      al, 80h
//   0x308399 mov     [rdx+18h], eax
//   0x30839C jmp     loc_3080AD
//   0x3083A1 align 8
//   0x3083A8 mov     eax, [rdi+28h]
//   0x3083AB cmp     [rbx+3Ch], eax
//   0x3083AE jnz     loc_308124
//   0x3083B4 add     rdi, 30h ; '0'
//   0x3083B8 xor     edx, edx
//   0x3083BA lea     rsi, [rbp+28h]
//   0x3083BE call    sub_11F4A0
//   0x3083C3 test    al, al
//   0x3083C5 jnz     loc_308176
//   0x3083CB mov     rdi, [rbp+20h]
//   0x3083CF jmp     loc_308124
//   0x3083D4 align 8
//   0x3083D8 add     r13, 518h
//   0x3083DF xor     r9d, r9d
//   0x3083E2 xor     r8d, r8d
//   0x3083E5 xor     ecx, ecx
//   0x3083E7 lea     rax, unk_403210
//   0x3083EE xor     esi, esi
//   0x3083F0 lea     rdx, [rsp+48h+var_38]
//   0x3083F5 mov     rdi, r13
//   0x3083F8 mov     [rsp+48h+var_38], rax
//   0x3083FD call    _deserialize_tinfo
//   0x308402 test    al, al
//   0x308404 jnz     loc_30836E
//   0x30840A mov     rax, cs:under_debugger_ptr
//   0x308411 cmp     byte ptr [rax], 0
//   0x308414 jnz     loc_4E42A
//   0x30841A mov     rax, [rsp+48h+var_30]
//   0x30841F sub     rax, fs:28h
//   0x308428 jnz     short loc_308463
//   0x30842A mov     edi, 0C82Bh
//   0x30842F call    sub_37B760
//   0x308434 call    ___stack_chk_fail
//   0x308439 mov     rax, cs:under_debugger_ptr
//   0x308440 cmp     byte ptr [rax], 0
//   0x308443 jnz     loc_4E42A
//   0x308449 mov     rax, [rsp+48h+var_30]
//   0x30844E sub     rax, fs:28h
//   0x308457 jnz     short loc_308468
//   0x308459 mov     edi, 0C552h
//   0x30845E call    sub_37B760
//   0x308463 call    ___stack_chk_fail
//   0x308468 call    ___stack_chk_fail
//   0x30846D mov     rbx, rax
//   0x308470 jmp     loc_4E42C
// ============================================================

void sub_308080(/* signature unknown */)
{
    // see disassembly above
}

