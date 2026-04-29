// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x20E110
// Name:           sub_20E110
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x20E110 push    r15
//   0x20E112 push    r14
//   0x20E114 push    r13
//   0x20E116 push    r12
//   0x20E118 push    rbp
//   0x20E119 push    rbx
//   0x20E11A sub     rsp, 78h
//   0x20E11E mov     rax, fs:28h
//   0x20E127 mov     [rsp+0A8h+var_40], rax
//   0x20E12C xor     eax, eax
//   0x20E12E cmp     byte ptr [rsi], 9
//   0x20E131 jz      short loc_20E160
//   0x20E133 mov     rax, [rsp+0A8h+var_40]
//   0x20E138 sub     rax, fs:28h
//   0x20E141 jnz     loc_20E2B0
//   0x20E147 add     rsp, 78h
//   0x20E14B xor     eax, eax
//   0x20E14D pop     rbx
//   0x20E14E pop     rbp
//   0x20E14F pop     r12
//   0x20E151 pop     r13
//   0x20E153 pop     r14
//   0x20E155 pop     r15
//   0x20E157 retn
//   0x20E158 align 20h
//   0x20E160 mov     rax, [rsi+8]
//   0x20E164 mov     r12, rdi
//   0x20E167 mov     rbx, rsi
//   0x20E16A movsxd  rbp, dword ptr [rax+10h]
//   0x20E16E shl     rbp, 5
//   0x20E172 add     rbp, [rdi+60h]
//   0x20E176 mov     rax, [rbp+8]
//   0x20E17A test    cl, cl
//   0x20E17C jnz     short loc_20E198
//   0x20E17E add     qword ptr [rbp+10h], 1
//   0x20E183 test    rax, rax
//   0x20E186 jz      short loc_20E1A8
//   0x20E188 test    byte ptr [rbx+1], 10h
//   0x20E18C jz      short loc_20E133
//   0x20E18E mov     byte ptr [rbp+18h], 1
//   0x20E192 jmp     short loc_20E133
//   0x20E194 align 8
//   0x20E198 add     rax, 1
//   0x20E19C mov     [rbp+8], rax
//   0x20E1A0 jmp     short loc_20E188
//   0x20E1A2 align 8
//   0x20E1A8 mov     rdx, [rsi+8]
//   0x20E1AC mov     rcx, [rdx]
//   0x20E1AF movsxd  rax, dword ptr [rdx+10h]
//   0x20E1B3 cmp     [rcx+1B8h], rax
//   0x20E1BA jb      loc_20E3EB
//   0x20E1C0 lea     rsi, [rax+rax*2]
//   0x20E1C4 lea     rsi, [rax+rsi*4]
//   0x20E1C8 mov     rax, [rcx+1B0h]
//   0x20E1CF lea     r13, [rax+rsi*8]
//   0x20E1D3 mov     eax, [r13+18h]
//   0x20E1D7 test    ah, 1
//   0x20E1DA jz      short loc_20E188
//   0x20E1DC cmp     qword ptr [rdx+8], 0
//   0x20E1E1 jnz     short loc_20E188
//   0x20E1E3 mov     edx, [r13+58h]
//   0x20E1E7 cmp     edx, [rbx+4]
//   0x20E1EA jnz     short loc_20E188
//   0x20E1EC test    eax, 2080h
//   0x20E1F1 jnz     short loc_20E188
//   0x20E1F3 mov     rax, [rdi+20h]
//   0x20E1F7 mov     ecx, [rax]
//   0x20E1F9 cmp     ecx, 4
//   0x20E1FC jz      short loc_20E20F
//   0x20E1FE cmp     ecx, 43h ; 'C'
//   0x20E201 jnz     short loc_20E188
//   0x20E203 mov     edi, [rax+44h]
//   0x20E206 cmp     [rax+24h], edi
//   0x20E209 jnz     loc_20E188
//   0x20E20F lea     rcx, [rax+20h]
//   0x20E213 cmp     rbx, rcx
//   0x20E216 jnz     loc_20E188
//   0x20E21C cmp     byte ptr [rax+40h], 9
//   0x20E220 jnz     loc_20E188
//   0x20E226 mov     rax, [rax+48h]
//   0x20E22A cmp     qword ptr [rax+8], 0
//   0x20E22F jnz     loc_20E188
//   0x20E235 test    byte ptr [rbx+1], 10h
//   0x20E239 jnz     loc_20E18E
//   0x20E23F movsxd  r9, dword ptr [rax+10h]
//   0x20E243 mov     r8, [r12+8]
//   0x20E248 imul    rcx, r9, 68h ; 'h'
//   0x20E24C add     rcx, [r8+1B0h]
//   0x20E253 mov     [rsp+0A8h+var_9C], r9d
//   0x20E258 mov     r14, rcx
//   0x20E25B cmp     edx, [rcx+58h]
//   0x20E25E jnz     loc_20E133
//   0x20E264 mov     rax, [r8+4E8h]
//   0x20E26B mov     r15, rax
//   0x20E26E jmp     short loc_20E29E
//   0x20E270 mov     rsi, r14
//   0x20E273 mov     rdi, r15
//   0x20E276 mov     [rsp+0A8h+var_90], r9
//   0x20E27B mov     [rsp+0A8h+var_98], r8
//   0x20E280 call    sub_329190
//   0x20E285 mov     r9, [rsp+0A8h+var_90]
//   0x20E28A test    eax, eax
//   0x20E28C jz      short loc_20E2B5
//   0x20E28E mov     r8, [rsp+0A8h+var_98]
//   0x20E293 add     r15, 60h ; '`'
//   0x20E297 mov     rax, [r8+4E8h]
//   0x20E29E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x20E2A6 add     rax, rdx
//   0x20E2A9 cmp     r15, rax
//   0x20E2AC jnz     short loc_20E270
//   0x20E2AE jmp     short loc_20E2C5
//   0x20E2B0 call    ___stack_chk_fail
//   0x20E2B5 test    r15, r15
//   0x20E2B8 jz      short loc_20E2C5
//   0x20E2BA test    byte ptr [r15+58h], 8
//   0x20E2BF jnz     loc_20E188
//   0x20E2C5 test    word ptr [r14+18h], 180h
//   0x20E2CC jnz     loc_20E188
//   0x20E2D2 mov     rax, [r12+60h]
//   0x20E2D7 shl     r9, 5
//   0x20E2DB mov     r15, r9
//   0x20E2DE cmp     qword ptr [rax+r9+8], 0
//   0x20E2E4 jnz     loc_20E188
//   0x20E2EA mov     edx, [r13+58h]
//   0x20E2EE mov     rsi, [r12+8]
//   0x20E2F3 mov     rdi, r13
//   0x20E2F6 call    sub_1BBF50
//   0x20E2FB test    al, al
//   0x20E2FD jnz     loc_20E188
//   0x20E303 mov     edx, [r14+58h]
//   0x20E307 mov     rsi, [r12+8]
//   0x20E30C mov     rdi, r14
//   0x20E30F call    sub_1BBF50
//   0x20E314 test    al, al
//   0x20E316 jnz     loc_20E188
//   0x20E31C cmp     qword ptr [r12+38h], 0
//   0x20E322 jz      loc_20E444
//   0x20E328 mov     rax, [r12+10h]
//   0x20E32D movsxd  rdx, dword ptr [rax+48h]
//   0x20E331 mov     rax, [r12+30h]
//   0x20E336 movsxd  rax, dword ptr [rax+rdx*4]
//   0x20E33A cmp     eax, 0FFFFFFFFh
//   0x20E33D jz      loc_20E3D8
//   0x20E343 imul    rax, 18h
//   0x20E347 add     rax, [r12+48h]
//   0x20E34C lea     rcx, off_4ABF48
//   0x20E353 mov     r13, [rax]
//   0x20E356 mov     rax, [rax+8]
//   0x20E35A lea     r8, [r13+rax*4+0]
//   0x20E35F jmp     short loc_20E3D3
//   0x20E361 xor     edi, edi
//   0x20E363 mov     eax, [r13+0]
//   0x20E367 mov     rsi, [r12+20h]
//   0x20E36C mov     [rsp+0A8h+var_60], 0
//   0x20E371 mov     [rsp+0A8h+var_80], rdi
//   0x20E376 mov     rdx, [r12+8]
//   0x20E37B mov     [rsp+0A8h+var_78], rdi
//   0x20E380 mov     [rsp+0A8h+var_70], rdi
//   0x20E385 mov     [rsp+0A8h+var_68], rdi
//   0x20E38A mov     edi, [rsp+0A8h+var_9C]
//   0x20E38E mov     [rsp+0A8h+var_88], rcx
//   0x20E393 mov     [rsp+0A8h+var_58], rsi
//   0x20E398 mov     [rsp+0A8h+var_50], edi
//   0x20E39C cmp     eax, [rdx+40h]
//   0x20E39F jnb     short loc_20E415
//   0x20E3A1 mov     rdx, [rdx+210h]
//   0x20E3A8 lea     rsi, [rsp+0A8h+var_88]
//   0x20E3AD mov     [rsp+0A8h+var_98], r8
//   0x20E3B2 add     r13, 4
//   0x20E3B6 mov     rdi, [rdx+rax*8]
//   0x20E3BA call    sub_118EF0
//   0x20E3BF mov     r8, [rsp+0A8h+var_98]
//   0x20E3C4 lea     rcx, off_4ABF48
//   0x20E3CB test    eax, eax
//   0x20E3CD jnz     loc_20E188
//   0x20E3D3 cmp     r13, r8
//   0x20E3D6 jnz     short loc_20E361
//   0x20E3D8 mov     rdx, [r12+20h]
//   0x20E3DD mov     rax, [r12+60h]
//   0x20E3E2 mov     [rax+r15], rdx
//   0x20E3E6 jmp     loc_20E188
//   0x20E3EB mov     rax, cs:under_debugger_ptr
//   0x20E3F2 cmp     byte ptr [rax], 0
//   0x20E3F5 jnz     loc_4330A
//   0x20E3FB mov     rax, [rsp+0A8h+var_40]
//   0x20E400 sub     rax, fs:28h
//   0x20E409 jnz     short loc_20E43F
//   0x20E40B mov     edi, 0C83Ah
//   0x20E410 call    sub_37B760
//   0x20E415 mov     rax, cs:under_debugger_ptr
//   0x20E41C cmp     byte ptr [rax], 0
//   0x20E41F jnz     loc_4330A
//   0x20E425 mov     rax, [rsp+0A8h+var_40]
//   0x20E42A sub     rax, fs:28h
//   0x20E433 jnz     short loc_20E465
//   0x20E435 mov     edi, 0CDEFh
//   0x20E43A call    sub_37B760
//   0x20E43F call    ___stack_chk_fail
//   0x20E444 mov     rdi, [r12+8]
//   0x20E449 call    sub_60B60
//   0x20E44E lea     rdx, [r12+48h]
//   0x20E453 lea     rsi, [r12+30h]
//   0x20E458 mov     rdi, rax
//   0x20E45B call    sub_309240
//   0x20E460 jmp     loc_20E328
//   0x20E465 call    ___stack_chk_fail
// ============================================================

void sub_20E110(/* signature unknown */)
{
    // see disassembly above
}

