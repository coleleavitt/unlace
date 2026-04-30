// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116390
// Name:            ._ZNK2QT6QLabel4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116390 jmp     cs:_ZNK2QT6QLabel4textEv_ptr
//
// Resolved target: _ZNK2QT6QLabel4textEv
// Target address:  0x8D6600
// GOT/IAT slot:    0x8A1E68
// Slot symbol:     _ZNK2QT6QLabel4textEv_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QLabel4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QLabel4textEv via GOT/IAT indirection
    return _ZNK2QT6QLabel4textEv(/* forwarded args */);
}

