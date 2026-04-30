// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114300
// Name:            ._ZN2QT9QTreeView14setColumnWidthEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114300 jmp     cs:_ZN2QT9QTreeView14setColumnWidthEii_ptr
//
// Resolved target: _ZN2QT9QTreeView14setColumnWidthEii
// Target address:  0x8D5138
// GOT/IAT slot:    0x8A0E20
// Slot symbol:     _ZN2QT9QTreeView14setColumnWidthEii_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView14setColumnWidthEii(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView14setColumnWidthEii via GOT/IAT indirection
    return _ZN2QT9QTreeView14setColumnWidthEii(/* forwarded args */);
}

