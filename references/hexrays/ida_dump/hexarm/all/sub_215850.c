// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x215850
// Name:           sub_215850
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x215850 push    r15
//   0x215852 push    r14
//   0x215854 push    r13
//   0x215856 push    r12
//   0x215858 push    rbp
//   0x215859 push    rbx
//   0x21585A sub     rsp, 78h
//   0x21585E mov     rax, fs:28h
//   0x215867 mov     [rsp+0A8h+var_40], rax
//   0x21586C xor     eax, eax
//   0x21586E cmp     byte ptr [rsi], 9
//   0x215871 jz      short loc_2158A0
//   0x215873 mov     rax, [rsp+0A8h+var_40]
//   0x215878 sub     rax, fs:28h
//   0x215881 jnz     loc_2159F0
//   0x215887 add     rsp, 78h
//   0x21588B xor     eax, eax
//   0x21588D pop     rbx
//   0x21588E pop     rbp
//   0x21588F pop     r12
//   0x215891 pop     r13
//   0x215893 pop     r14
//   0x215895 pop     r15
//   0x215897 retn
//   0x215898 align 20h
//   0x2158A0 mov     rax, [rsi+8]
//   0x2158A4 mov     r12, rdi
//   0x2158A7 mov     rbx, rsi
//   0x2158AA movsxd  rbp, dword ptr [rax+10h]
//   0x2158AE shl     rbp, 5
//   0x2158B2 add     rbp, [rdi+60h]
//   0x2158B6 mov     rax, [rbp+8]
//   0x2158BA test    cl, cl
//   0x2158BC jnz     short loc_2158D8
//   0x2158BE add     qword ptr [rbp+10h], 1
//   0x2158C3 test    rax, rax
//   0x2158C6 jz      short loc_2158E8
//   0x2158C8 test    byte ptr [rbx+1], 10h
//   0x2158CC jz      short loc_215873
//   0x2158CE mov     byte ptr [rbp+18h], 1
//   0x2158D2 jmp     short loc_215873
//   0x2158D4 align 8
//   0x2158D8 add     rax, 1
//   0x2158DC mov     [rbp+8], rax
//   0x2158E0 jmp     short loc_2158C8
//   0x2158E2 align 8
//   0x2158E8 mov     rdx, [rsi+8]
//   0x2158EC mov     rcx, [rdx]
//   0x2158EF movsxd  rax, dword ptr [rdx+10h]
//   0x2158F3 cmp     [rcx+1B8h], rax
//   0x2158FA jb      loc_215B2B
//   0x215900 lea     rsi, [rax+rax*2]
//   0x215904 lea     rsi, [rax+rsi*4]
//   0x215908 mov     rax, [rcx+1B0h]
//   0x21590F lea     r13, [rax+rsi*8]
//   0x215913 mov     eax, [r13+18h]
//   0x215917 test    ah, 1
//   0x21591A jz      short loc_2158C8
//   0x21591C cmp     qword ptr [rdx+8], 0
//   0x215921 jnz     short loc_2158C8
//   0x215923 mov     edx, [r13+58h]
//   0x215927 cmp     edx, [rbx+4]
//   0x21592A jnz     short loc_2158C8
//   0x21592C test    eax, 2080h
//   0x215931 jnz     short loc_2158C8
//   0x215933 mov     rax, [rdi+20h]
//   0x215937 mov     ecx, [rax]
//   0x215939 cmp     ecx, 4
//   0x21593C jz      short loc_21594F
//   0x21593E cmp     ecx, 43h ; 'C'
//   0x215941 jnz     short loc_2158C8
//   0x215943 mov     edi, [rax+44h]
//   0x215946 cmp     [rax+24h], edi
//   0x215949 jnz     loc_2158C8
//   0x21594F lea     rcx, [rax+20h]
//   0x215953 cmp     rbx, rcx
//   0x215956 jnz     loc_2158C8
//   0x21595C cmp     byte ptr [rax+40h], 9
//   0x215960 jnz     loc_2158C8
//   0x215966 mov     rax, [rax+48h]
//   0x21596A cmp     qword ptr [rax+8], 0
//   0x21596F jnz     loc_2158C8
//   0x215975 test    byte ptr [rbx+1], 10h
//   0x215979 jnz     loc_2158CE
//   0x21597F movsxd  r9, dword ptr [rax+10h]
//   0x215983 mov     r8, [r12+8]
//   0x215988 imul    rcx, r9, 68h ; 'h'
//   0x21598C add     rcx, [r8+1B0h]
//   0x215993 mov     [rsp+0A8h+var_9C], r9d
//   0x215998 mov     r14, rcx
//   0x21599B cmp     edx, [rcx+58h]
//   0x21599E jnz     loc_215873
//   0x2159A4 mov     rax, [r8+4E8h]
//   0x2159AB mov     r15, rax
//   0x2159AE jmp     short loc_2159DE
//   0x2159B0 mov     rsi, r14
//   0x2159B3 mov     rdi, r15
//   0x2159B6 mov     [rsp+0A8h+var_90], r9
//   0x2159BB mov     [rsp+0A8h+var_98], r8
//   0x2159C0 call    sub_330B00
//   0x2159C5 mov     r9, [rsp+0A8h+var_90]
//   0x2159CA test    eax, eax
//   0x2159CC jz      short loc_2159F5
//   0x2159CE mov     r8, [rsp+0A8h+var_98]
//   0x2159D3 add     r15, 60h ; '`'
//   0x2159D7 mov     rax, [r8+4E8h]
//   0x2159DE imul    rdx, [r8+4F0h], 60h ; '`'
//   0x2159E6 add     rax, rdx
//   0x2159E9 cmp     r15, rax
//   0x2159EC jnz     short loc_2159B0
//   0x2159EE jmp     short loc_215A05
//   0x2159F0 call    ___stack_chk_fail
//   0x2159F5 test    r15, r15
//   0x2159F8 jz      short loc_215A05
//   0x2159FA test    byte ptr [r15+58h], 8
//   0x2159FF jnz     loc_2158C8
//   0x215A05 test    word ptr [r14+18h], 180h
//   0x215A0C jnz     loc_2158C8
//   0x215A12 mov     rax, [r12+60h]
//   0x215A17 shl     r9, 5
//   0x215A1B mov     r15, r9
//   0x215A1E cmp     qword ptr [rax+r9+8], 0
//   0x215A24 jnz     loc_2158C8
//   0x215A2A mov     edx, [r13+58h]
//   0x215A2E mov     rsi, [r12+8]
//   0x215A33 mov     rdi, r13
//   0x215A36 call    sub_1C2210
//   0x215A3B test    al, al
//   0x215A3D jnz     loc_2158C8
//   0x215A43 mov     edx, [r14+58h]
//   0x215A47 mov     rsi, [r12+8]
//   0x215A4C mov     rdi, r14
//   0x215A4F call    sub_1C2210
//   0x215A54 test    al, al
//   0x215A56 jnz     loc_2158C8
//   0x215A5C cmp     qword ptr [r12+38h], 0
//   0x215A62 jz      loc_215B84
//   0x215A68 mov     rax, [r12+10h]
//   0x215A6D movsxd  rdx, dword ptr [rax+48h]
//   0x215A71 mov     rax, [r12+30h]
//   0x215A76 movsxd  rax, dword ptr [rax+rdx*4]
//   0x215A7A cmp     eax, 0FFFFFFFFh
//   0x215A7D jz      loc_215B18
//   0x215A83 imul    rax, 18h
//   0x215A87 add     rax, [r12+48h]
//   0x215A8C lea     rcx, off_4D9E08
//   0x215A93 mov     r13, [rax]
//   0x215A96 mov     rax, [rax+8]
//   0x215A9A lea     r8, [r13+rax*4+0]
//   0x215A9F jmp     short loc_215B13
//   0x215AA1 xor     edi, edi
//   0x215AA3 mov     eax, [r13+0]
//   0x215AA7 mov     rsi, [r12+20h]
//   0x215AAC mov     [rsp+0A8h+var_60], 0
//   0x215AB1 mov     [rsp+0A8h+var_80], rdi
//   0x215AB6 mov     rdx, [r12+8]
//   0x215ABB mov     [rsp+0A8h+var_78], rdi
//   0x215AC0 mov     [rsp+0A8h+var_70], rdi
//   0x215AC5 mov     [rsp+0A8h+var_68], rdi
//   0x215ACA mov     edi, [rsp+0A8h+var_9C]
//   0x215ACE mov     [rsp+0A8h+var_88], rcx
//   0x215AD3 mov     [rsp+0A8h+var_58], rsi
//   0x215AD8 mov     [rsp+0A8h+var_50], edi
//   0x215ADC cmp     eax, [rdx+40h]
//   0x215ADF jnb     short loc_215B55
//   0x215AE1 mov     rdx, [rdx+210h]
//   0x215AE8 lea     rsi, [rsp+0A8h+var_88]
//   0x215AED mov     [rsp+0A8h+var_98], r8
//   0x215AF2 add     r13, 4
//   0x215AF6 mov     rdi, [rdx+rax*8]
//   0x215AFA call    sub_11EFF0
//   0x215AFF mov     r8, [rsp+0A8h+var_98]
//   0x215B04 lea     rcx, off_4D9E08
//   0x215B0B test    eax, eax
//   0x215B0D jnz     loc_2158C8
//   0x215B13 cmp     r13, r8
//   0x215B16 jnz     short loc_215AA1
//   0x215B18 mov     rdx, [r12+20h]
//   0x215B1D mov     rax, [r12+60h]
//   0x215B22 mov     [rax+r15], rdx
//   0x215B26 jmp     loc_2158C8
//   0x215B2B mov     rax, cs:under_debugger_ptr
//   0x215B32 cmp     byte ptr [rax], 0
//   0x215B35 jnz     loc_4754E
//   0x215B3B mov     rax, [rsp+0A8h+var_40]
//   0x215B40 sub     rax, fs:28h
//   0x215B49 jnz     short loc_215B7F
//   0x215B4B mov     edi, 0C83Ah
//   0x215B50 call    sub_3835A0
//   0x215B55 mov     rax, cs:under_debugger_ptr
//   0x215B5C cmp     byte ptr [rax], 0
//   0x215B5F jnz     loc_4754E
//   0x215B65 mov     rax, [rsp+0A8h+var_40]
//   0x215B6A sub     rax, fs:28h
//   0x215B73 jnz     short loc_215BA5
//   0x215B75 mov     edi, 0CDEFh
//   0x215B7A call    sub_3835A0
//   0x215B7F call    ___stack_chk_fail
//   0x215B84 mov     rdi, [r12+8]
//   0x215B89 call    sub_66AE0
//   0x215B8E lea     rdx, [r12+48h]
//   0x215B93 lea     rsi, [r12+30h]
//   0x215B98 mov     rdi, rax
//   0x215B9B call    sub_310980
//   0x215BA0 jmp     loc_215A68
//   0x215BA5 call    ___stack_chk_fail
// ============================================================

void sub_215850(/* signature unknown */)
{
    // see disassembly above
}

