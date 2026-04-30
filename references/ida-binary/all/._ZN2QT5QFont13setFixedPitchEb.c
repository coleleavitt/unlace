// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C10
// Name:            ._ZN2QT5QFont13setFixedPitchEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C10 jmp     cs:_ZN2QT5QFont13setFixedPitchEb_ptr
//
// Resolved target: _ZN2QT5QFont13setFixedPitchEb
// Target address:  0x8D4278
// GOT/IAT slot:    0x8A02A8
// Slot symbol:     _ZN2QT5QFont13setFixedPitchEb_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT5QFont13setFixedPitchEb(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont13setFixedPitchEb via GOT/IAT indirection
    return _ZN2QT5QFont13setFixedPitchEb(/* forwarded args */);
}

