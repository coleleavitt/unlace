// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116810
// Name:            ._ZNK2QT9QGroupBox5titleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116810 jmp     cs:_ZNK2QT9QGroupBox5titleEv_ptr
//
// Resolved target: _ZNK2QT9QGroupBox5titleEv
// Target address:  0x8D6900
// GOT/IAT slot:    0x8A20A8
// Slot symbol:     _ZNK2QT9QGroupBox5titleEv_ptr
// Target type:     _QWORD(QT::QGroupBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QGroupBox5titleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QGroupBox5titleEv via GOT/IAT indirection
    return _ZNK2QT9QGroupBox5titleEv(/* forwarded args */);
}

