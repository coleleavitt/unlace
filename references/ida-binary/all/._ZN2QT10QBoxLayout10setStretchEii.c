// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115970
// Name:            ._ZN2QT10QBoxLayout10setStretchEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115970 jmp     cs:_ZN2QT10QBoxLayout10setStretchEii_ptr
//
// Resolved target: _ZN2QT10QBoxLayout10setStretchEii
// Target address:  0x8D5FA0
// GOT/IAT slot:    0x8A1958
// Slot symbol:     _ZN2QT10QBoxLayout10setStretchEii_ptr
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout10setStretchEii(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout10setStretchEii via GOT/IAT indirection
    return _ZN2QT10QBoxLayout10setStretchEii(/* forwarded args */);
}

