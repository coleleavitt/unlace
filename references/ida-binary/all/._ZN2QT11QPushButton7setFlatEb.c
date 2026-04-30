// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111910
// Name:            ._ZN2QT11QPushButton7setFlatEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111910 jmp     cs:_ZN2QT11QPushButton7setFlatEb_ptr
//
// Resolved target: _ZN2QT11QPushButton7setFlatEb
// Target address:  0x8D3670
// GOT/IAT slot:    0x89F928
// Slot symbol:     _ZN2QT11QPushButton7setFlatEb_ptr
// Target type:     _QWORD(QT::QPushButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QPushButton7setFlatEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPushButton7setFlatEb via GOT/IAT indirection
    return _ZN2QT11QPushButton7setFlatEb(/* forwarded args */);
}

