// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2100D0
// Name:           sub_2100D0
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2100D0 push    r15
//   0x2100D2 push    r14
//   0x2100D4 push    r13
//   0x2100D6 push    r12
//   0x2100D8 push    rbp
//   0x2100D9 push    rbx
//   0x2100DA sub     rsp, 78h
//   0x2100DE mov     rax, fs:28h
//   0x2100E7 mov     [rsp+0A8h+var_40], rax
//   0x2100EC xor     eax, eax
//   0x2100EE cmp     byte ptr [rsi], 9
//   0x2100F1 jz      short loc_210120
//   0x2100F3 mov     rax, [rsp+0A8h+var_40]
//   0x2100F8 sub     rax, fs:28h
//   0x210101 jnz     loc_210270
//   0x210107 add     rsp, 78h
//   0x21010B xor     eax, eax
//   0x21010D pop     rbx
//   0x21010E pop     rbp
//   0x21010F pop     r12
//   0x210111 pop     r13
//   0x210113 pop     r14
//   0x210115 pop     r15
//   0x210117 retn
//   0x210118 align 20h
//   0x210120 mov     rax, [rsi+8]
//   0x210124 mov     r12, rdi
//   0x210127 mov     rbx, rsi
//   0x21012A movsxd  rbp, dword ptr [rax+10h]
//   0x21012E shl     rbp, 5
//   0x210132 add     rbp, [rdi+60h]
//   0x210136 mov     rax, [rbp+8]
//   0x21013A test    cl, cl
//   0x21013C jnz     short loc_210158
//   0x21013E add     qword ptr [rbp+10h], 1
//   0x210143 test    rax, rax
//   0x210146 jz      short loc_210168
//   0x210148 test    byte ptr [rbx+1], 10h
//   0x21014C jz      short loc_2100F3
//   0x21014E mov     byte ptr [rbp+18h], 1
//   0x210152 jmp     short loc_2100F3
//   0x210154 align 8
//   0x210158 add     rax, 1
//   0x21015C mov     [rbp+8], rax
//   0x210160 jmp     short loc_210148
//   0x210162 align 8
//   0x210168 mov     rdx, [rsi+8]
//   0x21016C mov     rcx, [rdx]
//   0x21016F movsxd  rax, dword ptr [rdx+10h]
//   0x210173 cmp     [rcx+1B8h], rax
//   0x21017A jb      loc_2103AB
//   0x210180 lea     rsi, [rax+rax*2]
//   0x210184 lea     rsi, [rax+rsi*4]
//   0x210188 mov     rax, [rcx+1B0h]
//   0x21018F lea     r13, [rax+rsi*8]
//   0x210193 mov     eax, [r13+18h]
//   0x210197 test    ah, 1
//   0x21019A jz      short loc_210148
//   0x21019C cmp     qword ptr [rdx+8], 0
//   0x2101A1 jnz     short loc_210148
//   0x2101A3 mov     edx, [r13+58h]
//   0x2101A7 cmp     edx, [rbx+4]
//   0x2101AA jnz     short loc_210148
//   0x2101AC test    eax, 2080h
//   0x2101B1 jnz     short loc_210148
//   0x2101B3 mov     rax, [rdi+20h]
//   0x2101B7 mov     ecx, [rax]
//   0x2101B9 cmp     ecx, 4
//   0x2101BC jz      short loc_2101CF
//   0x2101BE cmp     ecx, 43h ; 'C'
//   0x2101C1 jnz     short loc_210148
//   0x2101C3 mov     edi, [rax+44h]
//   0x2101C6 cmp     [rax+24h], edi
//   0x2101C9 jnz     loc_210148
//   0x2101CF lea     rcx, [rax+20h]
//   0x2101D3 cmp     rbx, rcx
//   0x2101D6 jnz     loc_210148
//   0x2101DC cmp     byte ptr [rax+40h], 9
//   0x2101E0 jnz     loc_210148
//   0x2101E6 mov     rax, [rax+48h]
//   0x2101EA cmp     qword ptr [rax+8], 0
//   0x2101EF jnz     loc_210148
//   0x2101F5 test    byte ptr [rbx+1], 10h
//   0x2101F9 jnz     loc_21014E
//   0x2101FF movsxd  r9, dword ptr [rax+10h]
//   0x210203 mov     r8, [r12+8]
//   0x210208 imul    rcx, r9, 68h ; 'h'
//   0x21020C add     rcx, [r8+1B0h]
//   0x210213 mov     [rsp+0A8h+var_9C], r9d
//   0x210218 mov     r14, rcx
//   0x21021B cmp     edx, [rcx+58h]
//   0x21021E jnz     loc_2100F3
//   0x210224 mov     rax, [r8+4E8h]
//   0x21022B mov     r15, rax
//   0x21022E jmp     short loc_21025E
//   0x210230 mov     rsi, r14
//   0x210233 mov     rdi, r15
//   0x210236 mov     [rsp+0A8h+var_90], r9
//   0x21023B mov     [rsp+0A8h+var_98], r8
//   0x210240 call    sub_32AC50
//   0x210245 mov     r9, [rsp+0A8h+var_90]
//   0x21024A test    eax, eax
//   0x21024C jz      short loc_210275
//   0x21024E mov     r8, [rsp+0A8h+var_98]
//   0x210253 add     r15, 60h ; '`'
//   0x210257 mov     rax, [r8+4E8h]
//   0x21025E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x210266 add     rax, rdx
//   0x210269 cmp     r15, rax
//   0x21026C jnz     short loc_210230
//   0x21026E jmp     short loc_210285
//   0x210270 call    ___stack_chk_fail
//   0x210275 test    r15, r15
//   0x210278 jz      short loc_210285
//   0x21027A test    byte ptr [r15+58h], 8
//   0x21027F jnz     loc_210148
//   0x210285 test    word ptr [r14+18h], 180h
//   0x21028C jnz     loc_210148
//   0x210292 mov     rax, [r12+60h]
//   0x210297 shl     r9, 5
//   0x21029B mov     r15, r9
//   0x21029E cmp     qword ptr [rax+r9+8], 0
//   0x2102A4 jnz     loc_210148
//   0x2102AA mov     edx, [r13+58h]
//   0x2102AE mov     rsi, [r12+8]
//   0x2102B3 mov     rdi, r13
//   0x2102B6 call    sub_1BDA50
//   0x2102BB test    al, al
//   0x2102BD jnz     loc_210148
//   0x2102C3 mov     edx, [r14+58h]
//   0x2102C7 mov     rsi, [r12+8]
//   0x2102CC mov     rdi, r14
//   0x2102CF call    sub_1BDA50
//   0x2102D4 test    al, al
//   0x2102D6 jnz     loc_210148
//   0x2102DC cmp     qword ptr [r12+38h], 0
//   0x2102E2 jz      loc_210404
//   0x2102E8 mov     rax, [r12+10h]
//   0x2102ED movsxd  rdx, dword ptr [rax+48h]
//   0x2102F1 mov     rax, [r12+30h]
//   0x2102F6 movsxd  rax, dword ptr [rax+rdx*4]
//   0x2102FA cmp     eax, 0FFFFFFFFh
//   0x2102FD jz      loc_210398
//   0x210303 imul    rax, 18h
//   0x210307 add     rax, [r12+48h]
//   0x21030C lea     rcx, off_4B30E8
//   0x210313 mov     r13, [rax]
//   0x210316 mov     rax, [rax+8]
//   0x21031A lea     r8, [r13+rax*4+0]
//   0x21031F jmp     short loc_210393
//   0x210321 xor     edi, edi
//   0x210323 mov     eax, [r13+0]
//   0x210327 mov     rsi, [r12+20h]
//   0x21032C mov     [rsp+0A8h+var_60], 0
//   0x210331 mov     [rsp+0A8h+var_80], rdi
//   0x210336 mov     rdx, [r12+8]
//   0x21033B mov     [rsp+0A8h+var_78], rdi
//   0x210340 mov     [rsp+0A8h+var_70], rdi
//   0x210345 mov     [rsp+0A8h+var_68], rdi
//   0x21034A mov     edi, [rsp+0A8h+var_9C]
//   0x21034E mov     [rsp+0A8h+var_88], rcx
//   0x210353 mov     [rsp+0A8h+var_58], rsi
//   0x210358 mov     [rsp+0A8h+var_50], edi
//   0x21035C cmp     eax, [rdx+40h]
//   0x21035F jnb     short loc_2103D5
//   0x210361 mov     rdx, [rdx+210h]
//   0x210368 lea     rsi, [rsp+0A8h+var_88]
//   0x21036D mov     [rsp+0A8h+var_98], r8
//   0x210372 add     r13, 4
//   0x210376 mov     rdi, [rdx+rax*8]
//   0x21037A call    sub_11A9F0
//   0x21037F mov     r8, [rsp+0A8h+var_98]
//   0x210384 lea     rcx, off_4B30E8
//   0x21038B test    eax, eax
//   0x21038D jnz     loc_210148
//   0x210393 cmp     r13, r8
//   0x210396 jnz     short loc_210321
//   0x210398 mov     rdx, [r12+20h]
//   0x21039D mov     rax, [r12+60h]
//   0x2103A2 mov     [rax+r15], rdx
//   0x2103A6 jmp     loc_210148
//   0x2103AB mov     rax, cs:under_debugger_ptr
//   0x2103B2 cmp     byte ptr [rax], 0
//   0x2103B5 jnz     loc_44384
//   0x2103BB mov     rax, [rsp+0A8h+var_40]
//   0x2103C0 sub     rax, fs:28h
//   0x2103C9 jnz     short loc_2103FF
//   0x2103CB mov     edi, 0C83Ah
//   0x2103D0 call    sub_37CFE0
//   0x2103D5 mov     rax, cs:under_debugger_ptr
//   0x2103DC cmp     byte ptr [rax], 0
//   0x2103DF jnz     loc_44384
//   0x2103E5 mov     rax, [rsp+0A8h+var_40]
//   0x2103EA sub     rax, fs:28h
//   0x2103F3 jnz     short loc_210425
//   0x2103F5 mov     edi, 0CDEFh
//   0x2103FA call    sub_37CFE0
//   0x2103FF call    ___stack_chk_fail
//   0x210404 mov     rdi, [r12+8]
//   0x210409 call    sub_62660
//   0x21040E lea     rdx, [r12+48h]
//   0x210413 lea     rsi, [r12+30h]
//   0x210418 mov     rdi, rax
//   0x21041B call    sub_30AD00
//   0x210420 jmp     loc_2102E8
//   0x210425 call    ___stack_chk_fail
// ============================================================

void sub_2100D0(/* signature unknown */)
{
    // see disassembly above
}

