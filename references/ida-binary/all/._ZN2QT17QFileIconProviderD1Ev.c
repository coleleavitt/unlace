// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1192A0
// Name:            ._ZN2QT17QFileIconProviderD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1192A0 jmp     cs:_ZN2QT17QFileIconProviderD1Ev_ptr
//
// Resolved target: _ZN2QT17QFileIconProviderD1Ev
// Target address:  0x8D8380
// GOT/IAT slot:    0x8A35F0
// Slot symbol:     _ZN2QT17QFileIconProviderD1Ev_ptr
// Target type:     void(QT::QFileIconProvider *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT17QFileIconProviderD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT17QFileIconProviderD1Ev via GOT/IAT indirection
    return _ZN2QT17QFileIconProviderD1Ev(/* forwarded args */);
}

