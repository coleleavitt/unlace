// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112680
// Name:            ._ZN2QT7QObjectD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112680 jmp     cs:_ZN2QT7QObjectD2Ev_ptr
//
// Resolved target: _ZN2QT7QObjectD2Ev
// Target address:  0x8D3F18
// GOT/IAT slot:    0x89FFE0
// Slot symbol:     _ZN2QT7QObjectD2Ev_ptr
// Target type:     void(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QObjectD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObjectD2Ev via GOT/IAT indirection
    return _ZN2QT7QObjectD2Ev(/* forwarded args */);
}

