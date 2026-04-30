// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113500
// Name:            ._ZNK2QT7QLayout15contentsMarginsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113500 jmp     cs:_ZNK2QT7QLayout15contentsMarginsEv_ptr
//
// Resolved target: _ZNK2QT7QLayout15contentsMarginsEv
// Target address:  0x8D4868
// GOT/IAT slot:    0x8A0720
// Slot symbol:     _ZNK2QT7QLayout15contentsMarginsEv_ptr
// Target type:     _QWORD(QT::QLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QLayout15contentsMarginsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QLayout15contentsMarginsEv via GOT/IAT indirection
    return _ZNK2QT7QLayout15contentsMarginsEv(/* forwarded args */);
}

