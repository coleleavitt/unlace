// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A40
// Name:            ._ZNK2QT5QMenu5titleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A40 jmp     cs:_ZNK2QT5QMenu5titleEv_ptr
//
// Resolved target: _ZNK2QT5QMenu5titleEv
// Target address:  0x8D7E58
// GOT/IAT slot:    0x8A31C0
// Slot symbol:     _ZNK2QT5QMenu5titleEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QMenu5titleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QMenu5titleEv via GOT/IAT indirection
    return _ZNK2QT5QMenu5titleEv(/* forwarded args */);
}

