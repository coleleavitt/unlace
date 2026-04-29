// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AC0
// Name:            ._ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AC0 jmp     cs:off_4F548
//
// Resolved target: _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE
// Target address:  0x50778
// GOT/IAT slot:    0x4F548
// Slot symbol:     off_4F548
// Target type:     _QWORD(QT::QTextFormat *__hidden this, int, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE via GOT/IAT indirection
    return _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE(/* forwarded args */);
}

