// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B50
// Name:            ._ZNK2QT6QColor5greenEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B50 jmp     cs:_ZNK2QT6QColor5greenEv_ptr
//
// Resolved target: _ZNK2QT6QColor5greenEv
// Target address:  0x8D56F0
// GOT/IAT slot:    0x8A1248
// Slot symbol:     _ZNK2QT6QColor5greenEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor5greenEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor5greenEv via GOT/IAT indirection
    return _ZNK2QT6QColor5greenEv(/* forwarded args */);
}

