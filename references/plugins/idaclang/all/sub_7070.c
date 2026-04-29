// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x7070
// Name:           sub_7070
// Function size:  523 bytes (138 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x7070 push    rbx
//   0x7071 sub     rsp, 10h
//   0x7075 mov     rbx, fs:28h
//   0x707E mov     [rsp+18h+var_10], rbx
//   0x7083 mov     rbx, rdx
//   0x7086 cmp     rsi, 5Eh ; '^'
//   0x708A jz      loc_7180
//   0x7090 cmp     rsi, 60h ; '`'
//   0x7094 jz      short loc_70D0
//   0x7096 cmp     rsi, 56h ; 'V'
//   0x709A jnz     short loc_70AC
//   0x709C mov     rdi, [rdi+10h]
//   0x70A0 add     rdi, 90h
//   0x70A7 call    sub_6E00
//   0x70AC xor     eax, eax
//   0x70AE mov     rdx, [rsp+18h+var_10]
//   0x70B3 sub     rdx, fs:28h
//   0x70BC jnz     loc_7249
//   0x70C2 add     rsp, 10h
//   0x70C6 pop     rbx
//   0x70C7 retn
//   0x70C8 align 10h
//   0x70D0 lea     rsi, aIdaclang; "$ idaclang"
//   0x70D7 mov     rdi, rsp
//   0x70DA xor     ecx, ecx
//   0x70DC xor     edx, edx
//   0x70DE call    _netnode_check
//   0x70E3 mov     eax, [rbx]
//   0x70E5 mov     rsi, [rsp+18h+var_18]
//   0x70E9 cmp     eax, 2Fh ; '/'
//   0x70EC jbe     loc_71B0
//   0x70F2 mov     rdx, [rbx+8]
//   0x70F6 lea     rax, [rdx+8]
//   0x70FA mov     [rbx+8], rax
//   0x70FE mov     rdi, [rdx]
//   0x7101 lea     rdx, [rax+8]
//   0x7105 mov     [rbx+8], rdx
//   0x7109 mov     r8d, [rax]
//   0x710C cmp     r8b, 70h ; 'p'
//   0x7110 jnz     short loc_70AC
//   0x7112 cmp     rsi, rdi
//   0x7115 jnz     short loc_70AC
//   0x7117 lea     rcx, [rdx+8]
//   0x711B mov     [rbx+8], rcx
//   0x711F mov     rsi, [rdx]
//   0x7122 lea     rax, [rcx+8]
//   0x7126 mov     [rbx+8], rax
//   0x712A mov     r10, [rcx]
//   0x712D lea     rcx, [rax+8]
//   0x7131 mov     [rbx+8], rcx
//   0x7135 mov     r9d, [rax]
//   0x7138 lea     rax, [rcx+8]
//   0x713C mov     [rbx+8], rax
//   0x7140 lea     rax, [rsi-3]
//   0x7144 cmp     rax, 1
//   0x7148 jbe     loc_7230
//   0x714E cmp     rsi, 1
//   0x7152 jbe     loc_7230
//   0x7158 cmp     rsi, 2
//   0x715C jz      loc_723F
//   0x7162 mov     rdi, [rcx]
//   0x7165 mov     rdx, rsi
//   0x7168 xor     eax, eax
//   0x716A lea     rsi, aIdaclangWrongN; "idaclang: wrong node index %a"
//   0x7171 call    sub_67C0
//   0x7176 jmp     loc_70AC
//   0x717B align 20h
//   0x7180 mov     eax, [rbx]
//   0x7182 cmp     eax, 2Fh ; '/'
//   0x7185 ja      short loc_71A0
//   0x7187 mov     edx, eax
//   0x7189 add     eax, 8
//   0x718C add     rdx, [rbx+10h]
//   0x7190 mov     [rbx], eax
//   0x7192 mov     rdi, [rdx]
//   0x7195 call    sub_1D000
//   0x719A jmp     loc_70AC
//   0x719F align 20h
//   0x71A0 mov     rdx, [rbx+8]
//   0x71A4 lea     rax, [rdx+8]
//   0x71A8 mov     [rbx+8], rax
//   0x71AC jmp     short loc_7192
//   0x71AE align 10h
//   0x71B0 mov     rcx, [rbx+10h]
//   0x71B4 lea     edx, [rax+8]
//   0x71B7 mov     edi, eax
//   0x71B9 mov     [rbx], edx
//   0x71BB mov     rdi, [rcx+rdi]
//   0x71BF cmp     rdi, rsi
//   0x71C2 setz    r9b
//   0x71C6 cmp     edx, 2Fh ; '/'
//   0x71C9 ja      loc_724E
//   0x71CF lea     esi, [rax+10h]
//   0x71D2 mov     [rbx], esi
//   0x71D4 mov     r8d, [rcx+rdx]
//   0x71D8 cmp     r8b, 70h ; 'p'
//   0x71DC jnz     loc_70AC
//   0x71E2 test    r9b, r9b
//   0x71E5 jz      loc_70AC
//   0x71EB cmp     esi, 2Fh ; '/'
//   0x71EE ja      loc_7272
//   0x71F4 lea     edx, [rax+18h]
//   0x71F7 mov     [rbx], edx
//   0x71F9 mov     rsi, [rcx+rsi]
//   0x71FD cmp     edx, 2Fh ; '/'
//   0x7200 ja      short loc_7269
//   0x7202 lea     r9d, [rax+20h]
//   0x7206 mov     [rbx], r9d
//   0x7209 mov     r10, [rcx+rdx]
//   0x720D cmp     r9d, 2Fh ; '/'
//   0x7211 ja      short loc_7260
//   0x7213 lea     edx, [rax+28h]
//   0x7216 mov     [rbx], edx
//   0x7218 mov     r9d, [rcx+r9]
//   0x721C cmp     edx, 2Fh ; '/'
//   0x721F ja      short loc_7257
//   0x7221 add     eax, 30h ; '0'
//   0x7224 add     rcx, rdx
//   0x7227 mov     [rbx], eax
//   0x7229 jmp     loc_7140
//   0x722E align 10h
//   0x7230 movsxd  rcx, r9d
//   0x7233 movzx   r8d, r8b
//   0x7237 mov     rdx, r10
//   0x723A call    _netnode_supset
//   0x723F mov     eax, 1
//   0x7244 jmp     loc_70AE
//   0x7249 call    ___stack_chk_fail
//   0x724E mov     rax, [rbx+8]
//   0x7252 jmp     loc_7101
//   0x7257 mov     rcx, [rbx+8]
//   0x725B jmp     loc_7138
//   0x7260 mov     rax, [rbx+8]
//   0x7264 jmp     loc_712D
//   0x7269 mov     rcx, [rbx+8]
//   0x726D jmp     loc_7122
//   0x7272 mov     rdx, [rbx+8]
//   0x7276 jmp     loc_7117
// ============================================================

void sub_7070(/* signature unknown */)
{
    // see disassembly above
}

