// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9F0
// Name:            ._ZN2QT7QWidget14setAcceptDropsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9F0 jmp     cs:_ZN2QT7QWidget14setAcceptDropsEb_ptr
//
// Resolved target: _ZN2QT7QWidget14setAcceptDropsEb
// Target address:  0x8D9C70
// GOT/IAT slot:    0x8A4998
// Slot symbol:     _ZN2QT7QWidget14setAcceptDropsEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14setAcceptDropsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14setAcceptDropsEb via GOT/IAT indirection
    return _ZN2QT7QWidget14setAcceptDropsEb(/* forwarded args */);
}

