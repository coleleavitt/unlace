// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D70
// Name:            ._ZN2QT11QCloseEventD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D70 jmp     cs:_ZN2QT11QCloseEventD1Ev_ptr
//
// Resolved target: _ZN2QT11QCloseEventD1Ev
// Target address:  0x8D7668
// GOT/IAT slot:    0x8A2B58
// Slot symbol:     _ZN2QT11QCloseEventD1Ev_ptr
// Target type:     void(QT::QCloseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QCloseEventD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QCloseEventD1Ev via GOT/IAT indirection
    return _ZN2QT11QCloseEventD1Ev(/* forwarded args */);
}

