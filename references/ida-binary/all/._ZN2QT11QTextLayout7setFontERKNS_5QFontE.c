// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B000
// Name:            ._ZN2QT11QTextLayout7setFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B000 jmp     cs:_ZN2QT11QTextLayout7setFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT11QTextLayout7setFontERKNS_5QFontE
// Target address:  0x8D9628
// GOT/IAT slot:    0x8A44A0
// Slot symbol:     _ZN2QT11QTextLayout7setFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout7setFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout7setFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT11QTextLayout7setFontERKNS_5QFontE(/* forwarded args */);
}

