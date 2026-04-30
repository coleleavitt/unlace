// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119720
// Name:            ._ZN2QT7QLocaleD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119720 jmp     cs:_ZN2QT7QLocaleD1Ev_ptr
//
// Resolved target: _ZN2QT7QLocaleD1Ev
// Target address:  0x8D86A0
// GOT/IAT slot:    0x8A3830
// Slot symbol:     _ZN2QT7QLocaleD1Ev_ptr
// Target type:     void(QT::QLocale *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QLocaleD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLocaleD1Ev via GOT/IAT indirection
    return _ZN2QT7QLocaleD1Ev(/* forwarded args */);
}

