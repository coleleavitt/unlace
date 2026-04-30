// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117CB0
// Name:            ._ZN2QT6QTimer13setSingleShotEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117CB0 jmp     cs:_ZN2QT6QTimer13setSingleShotEb_ptr
//
// Resolved target: _ZN2QT6QTimer13setSingleShotEb
// Target address:  0x8D75E0
// GOT/IAT slot:    0x8A2AF8
// Slot symbol:     _ZN2QT6QTimer13setSingleShotEb_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer13setSingleShotEb(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer13setSingleShotEb via GOT/IAT indirection
    return _ZN2QT6QTimer13setSingleShotEb(/* forwarded args */);
}

