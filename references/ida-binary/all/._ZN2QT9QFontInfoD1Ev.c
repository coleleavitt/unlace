// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A820
// Name:            ._ZN2QT9QFontInfoD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A820 jmp     cs:_ZN2QT9QFontInfoD1Ev_ptr
//
// Resolved target: _ZN2QT9QFontInfoD1Ev
// Target address:  0x8D9168
// GOT/IAT slot:    0x8A40B0
// Slot symbol:     _ZN2QT9QFontInfoD1Ev_ptr
// Target type:     void(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QFontInfoD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QFontInfoD1Ev via GOT/IAT indirection
    return _ZN2QT9QFontInfoD1Ev(/* forwarded args */);
}

