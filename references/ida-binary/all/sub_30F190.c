// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x30F190
// Name:           sub_30F190
// Function size:  143 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x30F190 push    rbp; int
//   0x30F191 push    rbx; int
//   0x30F192 sub     rsp, 8
//   0x30F196 mov     rax, [rdi+140h]
//   0x30F19D test    rax, rax
//   0x30F1A0 jz      short loc_30F213
//   0x30F1A2 mov     rax, [rax+8]
//   0x30F1A6 mov     rbp, rdi
//   0x30F1A9 lea     rdi, off_887F00; this
//   0x30F1B0 mov     rsi, [rax+10h]; QT::QObject *
//   0x30F1B4 call    __ZNK2QT11QMetaObject4castEPKNS_7QObjectE; QT::QMetaObject::cast(QT::QObject const*)
//   0x30F1B9 mov     rbx, rax
//   0x30F1BC test    rax, rax
//   0x30F1BF jz      short loc_30F1E0
//   0x30F1C1 mov     rdi, cs:qword_8CD8B8; QT::QWidget *
//   0x30F1C8 mov     rsi, rbx
//   0x30F1CB mov     edx, 1
//   0x30F1D0 call    sub_4CB2D0
//   0x30F1D5 add     rsp, 8
//   0x30F1D9 mov     rax, rbx
//   0x30F1DC pop     rbx
//   0x30F1DD pop     rbp
//   0x30F1DE retn
//   0x30F1DF align 20h
//   0x30F1E0 mov     rdi, [rbp+140h]; QT::QWidget *
//   0x30F1E7 test    rdi, rdi
//   0x30F1EA jz      short loc_30F213
//   0x30F1EC xor     esi, esi
//   0x30F1EE call    sub_2DDD60
//   0x30F1F3 mov     edx, 8
//   0x30F1F8 mov     rbx, rax
//   0x30F1FB mov     rax, [rbp+160h]
//   0x30F202 mov     rsi, rbx
//   0x30F205 mov     rdi, [rax+18h]; QT::QWidget *
//   0x30F209 call    sub_4CAF50
//   0x30F20E test    rbx, rbx
//   0x30F211 jnz     short loc_30F1C1
//   0x30F213 xor     ebx, ebx
//   0x30F215 add     rsp, 8
//   0x30F219 mov     rax, rbx
//   0x30F21C pop     rbx
//   0x30F21D pop     rbp
//   0x30F21E retn
// ============================================================

void sub_30F190(/* signature unknown */)
{
    // see disassembly above
}

