// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118140
// Name:            ._ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118140 jmp     cs:_ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE
// Target address:  0x8D78F0
// GOT/IAT slot:    0x8A2D40
// Slot symbol:     _ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QFontDialog *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT11QFontDialog14setCurrentFontERKNS_5QFontE(/* forwarded args */);
}

