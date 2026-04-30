// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B570
// Name:            ._ZN2QT9QComboBox10removeItemEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B570 jmp     cs:_ZN2QT9QComboBox10removeItemEi_ptr
//
// Resolved target: _ZN2QT9QComboBox10removeItemEi
// Target address:  0x8D99B0
// GOT/IAT slot:    0x8A4758
// Slot symbol:     _ZN2QT9QComboBox10removeItemEi_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox10removeItemEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox10removeItemEi via GOT/IAT indirection
    return _ZN2QT9QComboBox10removeItemEi(/* forwarded args */);
}

