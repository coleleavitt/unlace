// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16290
// Name:            ._ZNK2QT13QPinchGesture11scaleFactorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16290 jmp     cs:off_4F130
//
// Resolved target: _ZNK2QT13QPinchGesture11scaleFactorEv
// Target address:  0x4FFD0
// GOT/IAT slot:    0x4F130
// Slot symbol:     off_4F130
// Target type:     _QWORD(QT::QPinchGesture *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QPinchGesture11scaleFactorEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QPinchGesture11scaleFactorEv via GOT/IAT indirection
    return _ZNK2QT13QPinchGesture11scaleFactorEv(/* forwarded args */);
}

