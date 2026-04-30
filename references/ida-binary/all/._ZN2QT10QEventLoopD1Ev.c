// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114BF0
// Name:            ._ZN2QT10QEventLoopD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114BF0 jmp     cs:_ZN2QT10QEventLoopD1Ev_ptr
//
// Resolved target: _ZN2QT10QEventLoopD1Ev
// Target address:  0x8D5768
// GOT/IAT slot:    0x8A1298
// Slot symbol:     _ZN2QT10QEventLoopD1Ev_ptr
// Target type:     void(QT::QEventLoop *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QEventLoopD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT10QEventLoopD1Ev via GOT/IAT indirection
    return _ZN2QT10QEventLoopD1Ev(/* forwarded args */);
}

