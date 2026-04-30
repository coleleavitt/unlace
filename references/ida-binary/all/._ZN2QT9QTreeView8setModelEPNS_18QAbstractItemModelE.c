// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115FF0
// Name:            ._ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115FF0 jmp     cs:_ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE_ptr
//
// Resolved target: _ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE
// Target address:  0x8D63D8
// GOT/IAT slot:    0x8A1C98
// Slot symbol:     _ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, QT::QAbstractItemModel *)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE via GOT/IAT indirection
    return _ZN2QT9QTreeView8setModelEPNS_18QAbstractItemModelE(/* forwarded args */);
}

