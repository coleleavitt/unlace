// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B680
// Name:            ._ZNK2QT11QMetaObject6methodEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B680 jmp     cs:_ZNK2QT11QMetaObject6methodEi_ptr
//
// Resolved target: _ZNK2QT11QMetaObject6methodEi
// Target address:  0x8D9A50
// GOT/IAT slot:    0x8A47E0
// Slot symbol:     _ZNK2QT11QMetaObject6methodEi_ptr
// Target type:     _QWORD(QT::QMetaObject *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject6methodEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject6methodEi via GOT/IAT indirection
    return _ZNK2QT11QMetaObject6methodEi(/* forwarded args */);
}

