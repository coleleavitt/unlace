// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115780
// Name:            ._ZNK2QT6QColor7lighterEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115780 jmp     cs:_ZNK2QT6QColor7lighterEi_ptr
//
// Resolved target: _ZNK2QT6QColor7lighterEi
// Target address:  0x8D5E68
// GOT/IAT slot:    0x8A1860
// Slot symbol:     _ZNK2QT6QColor7lighterEi_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor7lighterEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor7lighterEi via GOT/IAT indirection
    return _ZNK2QT6QColor7lighterEi(/* forwarded args */);
}

