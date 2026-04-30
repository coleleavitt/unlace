// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117160
// Name:            ._ZN2QT6QImageD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117160 jmp     cs:_ZN2QT6QImageD1Ev_ptr
//
// Resolved target: _ZN2QT6QImageD1Ev
// Target address:  0x8D6EB8
// GOT/IAT slot:    0x8A2550
// Slot symbol:     _ZN2QT6QImageD1Ev_ptr
// Target type:     void(QT::QImage *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QImageD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImageD1Ev via GOT/IAT indirection
    return _ZN2QT6QImageD1Ev(/* forwarded args */);
}

