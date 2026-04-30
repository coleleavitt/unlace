// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118720
// Name:            ._ZN2QT11QTreeWidget14setColumnCountEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118720 jmp     cs:_ZN2QT11QTreeWidget14setColumnCountEi_ptr
//
// Resolved target: _ZN2QT11QTreeWidget14setColumnCountEi
// Target address:  0x8D7C60
// GOT/IAT slot:    0x8A3030
// Slot symbol:     _ZN2QT11QTreeWidget14setColumnCountEi_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QTreeWidget14setColumnCountEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTreeWidget14setColumnCountEi via GOT/IAT indirection
    return _ZN2QT11QTreeWidget14setColumnCountEi(/* forwarded args */);
}

