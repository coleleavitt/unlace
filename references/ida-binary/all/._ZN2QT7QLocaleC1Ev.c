// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B30
// Name:            ._ZN2QT7QLocaleC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B30 jmp     cs:_ZN2QT7QLocaleC1Ev_ptr
//
// Resolved target: _ZN2QT7QLocaleC1Ev
// Target address:  0x8D6AE0
// GOT/IAT slot:    0x8A2238
// Slot symbol:     _ZN2QT7QLocaleC1Ev_ptr
// Target type:     _QWORD(QT::QLocale *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QLocaleC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLocaleC1Ev via GOT/IAT indirection
    return _ZN2QT7QLocaleC1Ev(/* forwarded args */);
}

