// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DB0
// Name:            ._ZN2QT7QTabBar20setUsesScrollButtonsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DB0 jmp     cs:_ZN2QT7QTabBar20setUsesScrollButtonsEb_ptr
//
// Resolved target: _ZN2QT7QTabBar20setUsesScrollButtonsEb
// Target address:  0x8D8048
// GOT/IAT slot:    0x8A3378
// Slot symbol:     _ZN2QT7QTabBar20setUsesScrollButtonsEb_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar20setUsesScrollButtonsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar20setUsesScrollButtonsEb via GOT/IAT indirection
    return _ZN2QT7QTabBar20setUsesScrollButtonsEb(/* forwarded args */);
}

