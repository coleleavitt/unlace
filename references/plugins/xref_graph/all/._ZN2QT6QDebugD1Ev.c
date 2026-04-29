// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x164E0
// Name:            ._ZN2QT6QDebugD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x164E0 jmp     cs:off_4F258
//
// Resolved target: _ZN2QT6QDebugD1Ev
// Target address:  0x50210
// GOT/IAT slot:    0x4F258
// Slot symbol:     off_4F258
// Target type:     void(QT::QDebug *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QDebugD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QDebugD1Ev via GOT/IAT indirection
    return _ZN2QT6QDebugD1Ev(/* forwarded args */);
}

