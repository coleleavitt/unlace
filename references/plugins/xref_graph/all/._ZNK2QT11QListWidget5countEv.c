// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x168F0
// Name:            ._ZNK2QT11QListWidget5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x168F0 jmp     cs:off_4F460
//
// Resolved target: _ZNK2QT11QListWidget5countEv
// Target address:  0x505B0
// GOT/IAT slot:    0x4F460
// Slot symbol:     off_4F460
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget5countEv via GOT/IAT indirection
    return _ZNK2QT11QListWidget5countEv(/* forwarded args */);
}

