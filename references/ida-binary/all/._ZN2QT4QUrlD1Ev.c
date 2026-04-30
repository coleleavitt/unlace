// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119080
// Name:            ._ZN2QT4QUrlD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119080 jmp     cs:_ZN2QT4QUrlD1Ev_ptr
//
// Resolved target: _ZN2QT4QUrlD1Ev
// Target address:  0x8D8218
// GOT/IAT slot:    0x8A34E0
// Slot symbol:     _ZN2QT4QUrlD1Ev_ptr
// Target type:     void(QT::QUrl *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT4QUrlD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT4QUrlD1Ev via GOT/IAT indirection
    return _ZN2QT4QUrlD1Ev(/* forwarded args */);
}

