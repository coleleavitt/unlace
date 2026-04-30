// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F00
// Name:            ._ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F00 jmp     cs:_ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE_ptr
//
// Resolved target: _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE
// Target address:  0x8D6318
// GOT/IAT slot:    0x8A1C20
// Slot symbol:     _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE_ptr
// Target type:     _QWORD(QT::QTextFormat *__hidden this, int, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE via GOT/IAT indirection
    return _ZN2QT11QTextFormat11setPropertyEiRKNS_8QVariantE(/* forwarded args */);
}

