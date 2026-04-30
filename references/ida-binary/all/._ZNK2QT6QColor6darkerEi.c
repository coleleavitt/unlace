// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110F0
// Name:            ._ZNK2QT6QColor6darkerEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110F0 jmp     cs:_ZNK2QT6QColor6darkerEi_ptr
//
// Resolved target: _ZNK2QT6QColor6darkerEi
// Target address:  0x8D3110
// GOT/IAT slot:    0x89F518
// Slot symbol:     _ZNK2QT6QColor6darkerEi_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor6darkerEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor6darkerEi via GOT/IAT indirection
    return _ZNK2QT6QColor6darkerEi(/* forwarded args */);
}

