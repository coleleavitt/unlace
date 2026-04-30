// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118ED0
// Name:            ._ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118ED0 jmp     cs:_ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE
// Target address:  0x8D8100
// GOT/IAT slot:    0x8A3408
// Slot symbol:     _ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT13QTextDocument14setDefaultFontERKNS_5QFontE(/* forwarded args */);
}

