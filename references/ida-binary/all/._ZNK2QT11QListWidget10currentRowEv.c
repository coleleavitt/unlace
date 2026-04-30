// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114560
// Name:            ._ZNK2QT11QListWidget10currentRowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114560 jmp     cs:_ZNK2QT11QListWidget10currentRowEv_ptr
//
// Resolved target: _ZNK2QT11QListWidget10currentRowEv
// Target address:  0x8D52E0
// GOT/IAT slot:    0x8A0F50
// Slot symbol:     _ZNK2QT11QListWidget10currentRowEv_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget10currentRowEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget10currentRowEv via GOT/IAT indirection
    return _ZNK2QT11QListWidget10currentRowEv(/* forwarded args */);
}

