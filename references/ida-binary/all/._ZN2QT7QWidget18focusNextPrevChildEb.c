// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E40
// Name:            ._ZN2QT7QWidget18focusNextPrevChildEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E40 jmp     cs:_ZN2QT7QWidget18focusNextPrevChildEb_ptr
//
// Resolved target: _ZN2QT7QWidget18focusNextPrevChildEb
// Target address:  0x8D4E68
// GOT/IAT slot:    0x8A0BC0
// Slot symbol:     _ZN2QT7QWidget18focusNextPrevChildEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget18focusNextPrevChildEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget18focusNextPrevChildEb via GOT/IAT indirection
    return _ZN2QT7QWidget18focusNextPrevChildEb(/* forwarded args */);
}

