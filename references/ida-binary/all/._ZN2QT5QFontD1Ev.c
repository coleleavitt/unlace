// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C80
// Name:            ._ZN2QT5QFontD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C80 jmp     cs:_ZN2QT5QFontD1Ev_ptr
//
// Resolved target: _ZN2QT5QFontD1Ev
// Target address:  0x8D7F90
// GOT/IAT slot:    0x8A32E0
// Slot symbol:     _ZN2QT5QFontD1Ev_ptr
// Target type:     void(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QFontD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFontD1Ev via GOT/IAT indirection
    return _ZN2QT5QFontD1Ev(/* forwarded args */);
}

