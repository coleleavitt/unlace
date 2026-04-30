// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1164E0
// Name:            ._ZN2QT7QWidget6scrollEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1164E0 jmp     cs:_ZN2QT7QWidget6scrollEii_ptr
//
// Resolved target: _ZN2QT7QWidget6scrollEii
// Target address:  0x8D66C8
// GOT/IAT slot:    0x8A1F10
// Slot symbol:     _ZN2QT7QWidget6scrollEii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget6scrollEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget6scrollEii via GOT/IAT indirection
    return _ZN2QT7QWidget6scrollEii(/* forwarded args */);
}

