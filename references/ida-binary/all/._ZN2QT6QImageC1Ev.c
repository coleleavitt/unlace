// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111720
// Name:            ._ZN2QT6QImageC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111720 jmp     cs:_ZN2QT6QImageC1Ev_ptr
//
// Resolved target: _ZN2QT6QImageC1Ev
// Target address:  0x8D3528
// GOT/IAT slot:    0x89F830
// Slot symbol:     _ZN2QT6QImageC1Ev_ptr
// Target type:     _QWORD(QT::QImage *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QImageC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImageC1Ev via GOT/IAT indirection
    return _ZN2QT6QImageC1Ev(/* forwarded args */);
}

