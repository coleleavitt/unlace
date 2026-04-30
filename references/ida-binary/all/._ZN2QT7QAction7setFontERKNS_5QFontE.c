// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117640
// Name:            ._ZN2QT7QAction7setFontERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117640 jmp     cs:_ZN2QT7QAction7setFontERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT7QAction7setFontERKNS_5QFontE
// Target address:  0x8D71E8
// GOT/IAT slot:    0x8A27C0
// Slot symbol:     _ZN2QT7QAction7setFontERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT7QAction7setFontERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction7setFontERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT7QAction7setFontERKNS_5QFontE(/* forwarded args */);
}

