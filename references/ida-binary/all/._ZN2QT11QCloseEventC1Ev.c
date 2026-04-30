// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118400
// Name:            ._ZN2QT11QCloseEventC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118400 jmp     cs:_ZN2QT11QCloseEventC1Ev_ptr
//
// Resolved target: _ZN2QT11QCloseEventC1Ev
// Target address:  0x8D7A80
// GOT/IAT slot:    0x8A2EA0
// Slot symbol:     _ZN2QT11QCloseEventC1Ev_ptr
// Target type:     _QWORD(QT::QCloseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QCloseEventC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QCloseEventC1Ev via GOT/IAT indirection
    return _ZN2QT11QCloseEventC1Ev(/* forwarded args */);
}

