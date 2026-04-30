// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116DE0
// Name:            ._ZNK2QT6QFrame10frameWidthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116DE0 jmp     cs:_ZNK2QT6QFrame10frameWidthEv_ptr
//
// Resolved target: _ZNK2QT6QFrame10frameWidthEv
// Target address:  0x8D6C80
// GOT/IAT slot:    0x8A2390
// Slot symbol:     _ZNK2QT6QFrame10frameWidthEv_ptr
// Target type:     _QWORD(QT::QFrame *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QFrame10frameWidthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QFrame10frameWidthEv via GOT/IAT indirection
    return _ZNK2QT6QFrame10frameWidthEv(/* forwarded args */);
}

