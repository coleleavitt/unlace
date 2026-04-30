// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113450
// Name:            ._ZNK2QT11QGridLayout11columnCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113450 jmp     cs:_ZNK2QT11QGridLayout11columnCountEv_ptr
//
// Resolved target: _ZNK2QT11QGridLayout11columnCountEv
// Target address:  0x8D47F8
// GOT/IAT slot:    0x8A06C8
// Slot symbol:     _ZNK2QT11QGridLayout11columnCountEv_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QGridLayout11columnCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QGridLayout11columnCountEv via GOT/IAT indirection
    return _ZNK2QT11QGridLayout11columnCountEv(/* forwarded args */);
}

