// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16040
// Name:            ._ZNK2QT6QColor6darkerEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16040 jmp     cs:off_4F008
//
// Resolved target: _ZNK2QT6QColor6darkerEi
// Target address:  0x4FE28
// GOT/IAT slot:    0x4F008
// Slot symbol:     off_4F008
// Target type:     _QWORD(QT::QColor *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor6darkerEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor6darkerEi via GOT/IAT indirection
    return _ZNK2QT6QColor6darkerEi(/* forwarded args */);
}

