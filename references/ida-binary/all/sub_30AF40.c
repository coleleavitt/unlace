// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x30AF40
// Name:           sub_30AF40
// Function size:  330 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x30AF40 push    rbp
//   0x30AF41 push    rbx
//   0x30AF42 sub     rsp, 58h
//   0x30AF46 mov     rax, fs:28h
//   0x30AF4F mov     [rsp+68h+var_20], rax
//   0x30AF54 xor     eax, eax
//   0x30AF56 call    sub_426230
//   0x30AF5B mov     edx, 1
//   0x30AF60 mov     esi, 1
//   0x30AF65 mov     rdi, rax
//   0x30AF68 call    sub_41C640
//   0x30AF6D mov     edi, 40h ; '@'; unsigned __int64
//   0x30AF72 call    __Znwm; operator new(ulong)
//   0x30AF77 mov     rdi, rax; QT::QWidget *
//   0x30AF7A mov     rbx, rax
//   0x30AF7D call    sub_4279C0
//   0x30AF82 mov     rdi, rbx
//   0x30AF85 call    sub_4279B0
//   0x30AF8A test    al, al
//   0x30AF8C jz      short loc_30AF9F
//   0x30AF8E mov     rax, [rbx]
//   0x30AF91 mov     rdi, rbx
//   0x30AF94 call    qword ptr [rax+1A8h]
//   0x30AF9A cmp     eax, 1
//   0x30AF9D jz      short loc_30AFC0
//   0x30AF9F xor     eax, eax
//   0x30AFA1 mov     rdx, [rsp+68h+var_20]
//   0x30AFA6 sub     rdx, fs:28h
//   0x30AFAF jnz     loc_30B06D
//   0x30AFB5 add     rsp, 58h
//   0x30AFB9 pop     rbx
//   0x30AFBA pop     rbp
//   0x30AFBB retn
//   0x30AFBC align 20h
//   0x30AFC0 mov     rsi, rbx
//   0x30AFC3 lea     rdi, [rsp+68h+var_58]
//   0x30AFC8 lea     rbx, s1
//   0x30AFCF call    sub_4289A0
//   0x30AFD4 xor     eax, eax
//   0x30AFD6 cmp     [rsp+68h+var_50], 0
//   0x30AFDC jz      short loc_30AFFA
//   0x30AFDE mov     rbx, [rsp+68h+var_58]
//   0x30AFE3 test    rbx, rbx
//   0x30AFE6 jz      short loc_30AFFA
//   0x30AFE8 cmp     byte ptr [rbx], 0
//   0x30AFEB jz      short loc_30AFFA
//   0x30AFED lea     rdi, [rbx+1]; s
//   0x30AFF1 call    _strlen
//   0x30AFF6 add     rax, 1
//   0x30AFFA mov     rdx, rbx
//   0x30AFFD lea     rbx, [rsp+68h+ptr]
//   0x30B002 mov     rsi, rax
//   0x30B005 mov     rdi, rbx
//   0x30B008 call    __ZN2QT7QString8fromUtf8ENS_14QByteArrayViewE; QT::QString::fromUtf8(QT::QByteArrayView)
//   0x30B00D xor     esi, esi
//   0x30B00F mov     rdi, rbx; QT::QString *
//   0x30B012 call    sub_30A6D0
//   0x30B017 mov     rdx, [rsp+68h+ptr]
//   0x30B01C test    rdx, rdx
//   0x30B01F jz      short loc_30B027
//   0x30B021 lock sub dword ptr [rdx], 1
//   0x30B025 jz      short loc_30B058
//   0x30B027 mov     rdi, [rsp+68h+var_58]
//   0x30B02C test    rdi, rdi
//   0x30B02F jz      loc_30AFA1
//   0x30B035 mov     [rsp+68h+var_59], al
//   0x30B039 mov     [rsp+68h+var_50], 0
//   0x30B042 call    _qfree
//   0x30B047 movzx   eax, [rsp+68h+var_59]
//   0x30B04C jmp     loc_30AFA1
//   0x30B051 align 8
//   0x30B058 mov     rdi, [rsp+68h+ptr]; ptr
//   0x30B05D mov     [rsp+68h+var_59], al
//   0x30B061 call    _free
//   0x30B066 movzx   eax, [rsp+68h+var_59]
//   0x30B06B jmp     short loc_30B027
//   0x30B06D call    ___stack_chk_fail
//   0x30B072 mov     rbp, rax
//   0x30B075 jmp     loc_1368EF
//   0x30B07A mov     rbp, rax
//   0x30B07D jmp     loc_136914
//   0x30B082 mov     rbp, rax
//   0x30B085 jmp     loc_13691C
// ============================================================

void sub_30AF40(/* signature unknown */)
{
    // see disassembly above
}

