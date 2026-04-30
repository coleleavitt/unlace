// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117080
// Name:            ._ZN2QT18QStandardItemModel14setColumnCountEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117080 jmp     cs:_ZN2QT18QStandardItemModel14setColumnCountEi_ptr
//
// Resolved target: _ZN2QT18QStandardItemModel14setColumnCountEi
// Target address:  0x8D6E18
// GOT/IAT slot:    0x8A24E0
// Slot symbol:     _ZN2QT18QStandardItemModel14setColumnCountEi_ptr
// Target type:     _QWORD(QT::QStandardItemModel *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT18QStandardItemModel14setColumnCountEi(/* see target signature */)
{
    // Tail-call to _ZN2QT18QStandardItemModel14setColumnCountEi via GOT/IAT indirection
    return _ZN2QT18QStandardItemModel14setColumnCountEi(/* forwarded args */);
}

