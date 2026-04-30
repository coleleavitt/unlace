// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1125F0
// Name:            ._ZN2QT4QUrlC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1125F0 jmp     cs:_ZN2QT4QUrlC1Ev_ptr
//
// Resolved target: _ZN2QT4QUrlC1Ev
// Target address:  0x8D3EA8
// GOT/IAT slot:    0x89FF98
// Slot symbol:     _ZN2QT4QUrlC1Ev_ptr
// Target type:     _QWORD(QT::QUrl *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT4QUrlC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT4QUrlC1Ev via GOT/IAT indirection
    return _ZN2QT4QUrlC1Ev(/* forwarded args */);
}

