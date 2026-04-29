// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17090
// Name:            ._ZNK2QT11QListWidget11currentItemEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17090 jmp     cs:off_4F830
//
// Resolved target: _ZNK2QT11QListWidget11currentItemEv
// Target address:  0x50C78
// GOT/IAT slot:    0x4F830
// Slot symbol:     off_4F830
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget11currentItemEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget11currentItemEv via GOT/IAT indirection
    return _ZNK2QT11QListWidget11currentItemEv(/* forwarded args */);
}

