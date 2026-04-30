// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C30
// Name:            ._ZNK2QT8QGesture5stateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C30 jmp     cs:_ZNK2QT8QGesture5stateEv_ptr
//
// Resolved target: _ZNK2QT8QGesture5stateEv
// Target address:  0x8D89A8
// GOT/IAT slot:    0x8A3AB8
// Slot symbol:     _ZNK2QT8QGesture5stateEv_ptr
// Target type:     _QWORD(QT::QGesture *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QGesture5stateEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QGesture5stateEv via GOT/IAT indirection
    return _ZNK2QT8QGesture5stateEv(/* forwarded args */);
}

