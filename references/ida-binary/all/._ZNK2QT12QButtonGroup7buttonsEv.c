// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117070
// Name:            ._ZNK2QT12QButtonGroup7buttonsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117070 jmp     cs:_ZNK2QT12QButtonGroup7buttonsEv_ptr
//
// Resolved target: _ZNK2QT12QButtonGroup7buttonsEv
// Target address:  0x8D6E10
// GOT/IAT slot:    0x8A24D8
// Slot symbol:     _ZNK2QT12QButtonGroup7buttonsEv_ptr
// Target type:     _QWORD(QT::QButtonGroup *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QButtonGroup7buttonsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QButtonGroup7buttonsEv via GOT/IAT indirection
    return _ZNK2QT12QButtonGroup7buttonsEv(/* forwarded args */);
}

