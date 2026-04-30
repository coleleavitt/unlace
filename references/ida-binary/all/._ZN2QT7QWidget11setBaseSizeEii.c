// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170C0
// Name:            ._ZN2QT7QWidget11setBaseSizeEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170C0 jmp     cs:_ZN2QT7QWidget11setBaseSizeEii_ptr
//
// Resolved target: _ZN2QT7QWidget11setBaseSizeEii
// Target address:  0x8D6E48
// GOT/IAT slot:    0x8A2500
// Slot symbol:     _ZN2QT7QWidget11setBaseSizeEii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget11setBaseSizeEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget11setBaseSizeEii via GOT/IAT indirection
    return _ZN2QT7QWidget11setBaseSizeEii(/* forwarded args */);
}

