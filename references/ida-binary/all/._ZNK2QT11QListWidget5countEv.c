// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115040
// Name:            ._ZNK2QT11QListWidget5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115040 jmp     cs:_ZNK2QT11QListWidget5countEv_ptr
//
// Resolved target: _ZNK2QT11QListWidget5countEv
// Target address:  0x8D59F8
// GOT/IAT slot:    0x8A14C0
// Slot symbol:     _ZNK2QT11QListWidget5countEv_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget5countEv via GOT/IAT indirection
    return _ZNK2QT11QListWidget5countEv(/* forwarded args */);
}

