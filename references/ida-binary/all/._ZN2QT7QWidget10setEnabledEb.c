// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1139C0
// Name:            ._ZN2QT7QWidget10setEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1139C0 jmp     cs:_ZN2QT7QWidget10setEnabledEb_ptr
//
// Resolved target: _ZN2QT7QWidget10setEnabledEb
// Target address:  0x8D4B70
// GOT/IAT slot:    0x8A0980
// Slot symbol:     _ZN2QT7QWidget10setEnabledEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget10setEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10setEnabledEb via GOT/IAT indirection
    return _ZN2QT7QWidget10setEnabledEb(/* forwarded args */);
}

