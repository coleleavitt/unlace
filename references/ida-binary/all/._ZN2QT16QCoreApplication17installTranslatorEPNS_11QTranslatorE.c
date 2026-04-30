// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D10
// Name:            ._ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D10 jmp     cs:_ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE_ptr
//
// Resolved target: _ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE
// Target address:  0x8D4D90
// GOT/IAT slot:    0x8A0B28
// Slot symbol:     _ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, QT::QTranslator *)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE via GOT/IAT indirection
    return _ZN2QT16QCoreApplication17installTranslatorEPNS_11QTranslatorE(/* forwarded args */);
}

