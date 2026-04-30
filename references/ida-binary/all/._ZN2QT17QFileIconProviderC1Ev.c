// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194A0
// Name:            ._ZN2QT17QFileIconProviderC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194A0 jmp     cs:_ZN2QT17QFileIconProviderC1Ev_ptr
//
// Resolved target: _ZN2QT17QFileIconProviderC1Ev
// Target address:  0x8D84C0
// GOT/IAT slot:    0x8A36F0
// Slot symbol:     _ZN2QT17QFileIconProviderC1Ev_ptr
// Target type:     _QWORD(QT::QFileIconProvider *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT17QFileIconProviderC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT17QFileIconProviderC1Ev via GOT/IAT indirection
    return _ZN2QT17QFileIconProviderC1Ev(/* forwarded args */);
}

