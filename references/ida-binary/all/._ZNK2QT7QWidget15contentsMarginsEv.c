// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116550
// Name:            ._ZNK2QT7QWidget15contentsMarginsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116550 jmp     cs:_ZNK2QT7QWidget15contentsMarginsEv_ptr
//
// Resolved target: _ZNK2QT7QWidget15contentsMarginsEv
// Target address:  0x8D6710
// GOT/IAT slot:    0x8A1F48
// Slot symbol:     _ZNK2QT7QWidget15contentsMarginsEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget15contentsMarginsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget15contentsMarginsEv via GOT/IAT indirection
    return _ZNK2QT7QWidget15contentsMarginsEv(/* forwarded args */);
}

