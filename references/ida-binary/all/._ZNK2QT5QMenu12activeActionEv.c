// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119250
// Name:            ._ZNK2QT5QMenu12activeActionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119250 jmp     cs:_ZNK2QT5QMenu12activeActionEv_ptr
//
// Resolved target: _ZNK2QT5QMenu12activeActionEv
// Target address:  0x8D8340
// GOT/IAT slot:    0x8A35C8
// Slot symbol:     _ZNK2QT5QMenu12activeActionEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QMenu12activeActionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QMenu12activeActionEv via GOT/IAT indirection
    return _ZNK2QT5QMenu12activeActionEv(/* forwarded args */);
}

