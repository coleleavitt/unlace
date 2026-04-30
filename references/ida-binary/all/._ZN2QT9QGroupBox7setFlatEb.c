// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C00
// Name:            ._ZN2QT9QGroupBox7setFlatEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C00 jmp     cs:_ZN2QT9QGroupBox7setFlatEb_ptr
//
// Resolved target: _ZN2QT9QGroupBox7setFlatEb
// Target address:  0x8D4270
// GOT/IAT slot:    0x8A02A0
// Slot symbol:     _ZN2QT9QGroupBox7setFlatEb_ptr
// Target type:     _QWORD(QT::QGroupBox *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QGroupBox7setFlatEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QGroupBox7setFlatEb via GOT/IAT indirection
    return _ZN2QT9QGroupBox7setFlatEb(/* forwarded args */);
}

