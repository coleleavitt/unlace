// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160E0
// Name:            ._ZN2QT7QWidget7setFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160E0 jmp     cs:_ZN2QT7QWidget7setFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT7QWidget7setFontERKNS_5QFontE
// Target address:  0x8D6468
// GOT/IAT slot:    0x8A1D10
// Slot symbol:     _ZN2QT7QWidget7setFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget7setFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget7setFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT7QWidget7setFontERKNS_5QFontE(/* forwarded args */);
}

