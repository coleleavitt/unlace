// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113320
// Name:            ._ZN2QT6QDebugD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113320 jmp     cs:_ZN2QT6QDebugD1Ev_ptr
//
// Resolved target: _ZN2QT6QDebugD1Ev
// Target address:  0x8D4730
// GOT/IAT slot:    0x8A0630
// Slot symbol:     _ZN2QT6QDebugD1Ev_ptr
// Target type:     void(QT::QDebug *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QDebugD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QDebugD1Ev via GOT/IAT indirection
    return _ZN2QT6QDebugD1Ev(/* forwarded args */);
}

