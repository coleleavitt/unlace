// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x171D0
// Name:            ._ZNK2QT13QPinchGesture11changeFlagsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x171D0 jmp     cs:off_4F8D0
//
// Resolved target: _ZNK2QT13QPinchGesture11changeFlagsEv
// Target address:  0x50DA8
// GOT/IAT slot:    0x4F8D0
// Slot symbol:     off_4F8D0
// Target type:     _QWORD(QT::QPinchGesture *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QPinchGesture11changeFlagsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QPinchGesture11changeFlagsEv via GOT/IAT indirection
    return _ZNK2QT13QPinchGesture11changeFlagsEv(/* forwarded args */);
}

