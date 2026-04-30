// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116120
// Name:            ._ZN2QT10QBoxLayout13insertStretchEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116120 jmp     cs:_ZN2QT10QBoxLayout13insertStretchEii_ptr
//
// Resolved target: _ZN2QT10QBoxLayout13insertStretchEii
// Target address:  0x8D6488
// GOT/IAT slot:    0x8A1D30
// Slot symbol:     _ZN2QT10QBoxLayout13insertStretchEii_ptr
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout13insertStretchEii(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout13insertStretchEii via GOT/IAT indirection
    return _ZN2QT10QBoxLayout13insertStretchEii(/* forwarded args */);
}

