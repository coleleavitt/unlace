// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118490
// Name:            ._ZNK2QT11QListWidget4itemEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118490 jmp     cs:_ZNK2QT11QListWidget4itemEi_ptr
//
// Resolved target: _ZNK2QT11QListWidget4itemEi
// Target address:  0x8D7AC8
// GOT/IAT slot:    0x8A2EE8
// Slot symbol:     _ZNK2QT11QListWidget4itemEi_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QListWidget4itemEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QListWidget4itemEi via GOT/IAT indirection
    return _ZNK2QT11QListWidget4itemEi(/* forwarded args */);
}

