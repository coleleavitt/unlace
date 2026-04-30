// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB00
// Name:            ._ZNK2QT6QColor3redEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB00 jmp     cs:_ZNK2QT6QColor3redEv_ptr
//
// Resolved target: _ZNK2QT6QColor3redEv
// Target address:  0x8D9328
// GOT/IAT slot:    0x8A4220
// Slot symbol:     _ZNK2QT6QColor3redEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor3redEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor3redEv via GOT/IAT indirection
    return _ZNK2QT6QColor3redEv(/* forwarded args */);
}

