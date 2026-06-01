// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1C88F0
// Name:           sub_1C88F0
// Function size:  137 bytes (46 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1C88F0 push    rbp; int
//   0x1C88F1 mov     ebp, esi
//   0x1C88F3 push    rbx; int
//   0x1C88F4 mov     rbx, rdi
//   0x1C88F7 sub     rsp, 8
//   0x1C88FB call    sub_4A0300
//   0x1C8900 test    rax, rax
//   0x1C8903 jz      short loc_1C8940
//   0x1C8905 mov     rdx, [rax+958h]
//   0x1C890C mov     rdi, rax
//   0x1C890F mov     eax, [rdx+0Ch]
//   0x1C8912 mov     ecx, eax
//   0x1C8914 and     eax, 0FFFFFFDFh
//   0x1C8917 or      ecx, 20h
//   0x1C891A test    bpl, bpl
//   0x1C891D cmovnz  eax, ecx
//   0x1C8920 xor     ecx, ecx
//   0x1C8922 xor     esi, esi
//   0x1C8924 mov     [rdx+0Ch], eax
//   0x1C8927 mov     edx, 7
//   0x1C892C call    sub_4A4600
//   0x1C8931 add     rsp, 8
//   0x1C8935 mov     eax, 1
//   0x1C893A pop     rbx
//   0x1C893B pop     rbp
//   0x1C893C retn
//   0x1C893D align 20h
//   0x1C8940 mov     rdi, rbx
//   0x1C8943 call    sub_5210D0
//   0x1C8948 lea     rdi, off_887C80; this
//   0x1C894F mov     rsi, rax; QT::QObject *
//   0x1C8952 call    __ZNK2QT11QMetaObject4castEPKNS_7QObjectE; QT::QMetaObject::cast(QT::QObject const*)
//   0x1C8957 test    rax, rax
//   0x1C895A jz      short loc_1C8970
//   0x1C895C add     rsp, 8
//   0x1C8960 movzx   esi, bpl
//   0x1C8964 mov     rdi, rax
//   0x1C8967 pop     rbx
//   0x1C8968 pop     rbp
//   0x1C8969 jmp     sub_2DC230
//   0x1C896E align 10h
//   0x1C8970 add     rsp, 8
//   0x1C8974 xor     eax, eax
//   0x1C8976 pop     rbx
//   0x1C8977 pop     rbp
//   0x1C8978 retn
// ============================================================

void sub_1C88F0(/* signature unknown */)
{
    // see disassembly above
}

