// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F30
// Name:            ._ZNK2QT5QMenu10menuActionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F30 jmp     cs:_ZNK2QT5QMenu10menuActionEv_ptr
//
// Resolved target: _ZNK2QT5QMenu10menuActionEv
// Target address:  0x8D8140
// GOT/IAT slot:    0x8A3438
// Slot symbol:     _ZNK2QT5QMenu10menuActionEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QMenu10menuActionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QMenu10menuActionEv via GOT/IAT indirection
    return _ZNK2QT5QMenu10menuActionEv(/* forwarded args */);
}

