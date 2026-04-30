// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111840
// Name:            ._ZNK2QT11QPanGesture5deltaEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111840 jmp     cs:_ZNK2QT11QPanGesture5deltaEv_ptr
//
// Resolved target: _ZNK2QT11QPanGesture5deltaEv
// Target address:  0x8D35F8
// GOT/IAT slot:    0x89F8C0
// Slot symbol:     _ZNK2QT11QPanGesture5deltaEv_ptr
// Target type:     _QWORD(QT::QPanGesture *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QPanGesture5deltaEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QPanGesture5deltaEv via GOT/IAT indirection
    return _ZNK2QT11QPanGesture5deltaEv(/* forwarded args */);
}

