// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B390
// Name:            ._ZN2QT9QSplitter16setStretchFactorEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B390 jmp     cs:_ZN2QT9QSplitter16setStretchFactorEii_ptr
//
// Resolved target: _ZN2QT9QSplitter16setStretchFactorEii
// Target address:  0x8D9880
// GOT/IAT slot:    0x8A4668
// Slot symbol:     _ZN2QT9QSplitter16setStretchFactorEii_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter16setStretchFactorEii(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter16setStretchFactorEii via GOT/IAT indirection
    return _ZN2QT9QSplitter16setStretchFactorEii(/* forwarded args */);
}

