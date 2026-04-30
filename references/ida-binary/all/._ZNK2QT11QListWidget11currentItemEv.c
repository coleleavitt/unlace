// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119100
// Name:            ._ZNK2QT11QListWidget11currentItemEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119100 jmp     cs:_ZNK2QT11QListWidget11currentItemEv_ptr
//
// Resolved target: _ZNK2QT11QListWidget11currentItemEv
// Target address:  0x8D8260
// GOT/IAT slot:    0x8A3520
// Slot symbol:     _ZNK2QT11QListWidget11currentItemEv_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget11currentItemEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget11currentItemEv via GOT/IAT indirection
    return _ZNK2QT11QListWidget11currentItemEv(/* forwarded args */);
}

