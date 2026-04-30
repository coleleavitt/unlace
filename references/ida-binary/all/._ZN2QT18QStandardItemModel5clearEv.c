// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B10
// Name:            ._ZN2QT18QStandardItemModel5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B10 jmp     cs:_ZN2QT18QStandardItemModel5clearEv_ptr
//
// Resolved target: _ZN2QT18QStandardItemModel5clearEv
// Target address:  0x8D88F0
// GOT/IAT slot:    0x8A3A28
// Slot symbol:     _ZN2QT18QStandardItemModel5clearEv_ptr
// Target type:     _QWORD(QT::QStandardItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QStandardItemModel5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT18QStandardItemModel5clearEv via GOT/IAT indirection
    return _ZN2QT18QStandardItemModel5clearEv(/* forwarded args */);
}

