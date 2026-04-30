// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118EA0
// Name:            ._ZN2QT5QIconD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118EA0 jmp     cs:_ZN2QT5QIconD1Ev_ptr
//
// Resolved target: _ZN2QT5QIconD1Ev
// Target address:  0x8D80E8
// GOT/IAT slot:    0x8A33F0
// Slot symbol:     _ZN2QT5QIconD1Ev_ptr
// Target type:     void(QT::QIcon *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QIconD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconD1Ev via GOT/IAT indirection
    return _ZN2QT5QIconD1Ev(/* forwarded args */);
}

