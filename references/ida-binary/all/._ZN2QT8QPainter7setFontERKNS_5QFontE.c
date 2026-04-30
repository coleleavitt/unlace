// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1174F0
// Name:            ._ZN2QT8QPainter7setFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1174F0 jmp     cs:_ZN2QT8QPainter7setFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT8QPainter7setFontERKNS_5QFontE
// Target address:  0x8D7110
// GOT/IAT slot:    0x8A2718
// Slot symbol:     _ZN2QT8QPainter7setFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter7setFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter7setFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT8QPainter7setFontERKNS_5QFontE(/* forwarded args */);
}

