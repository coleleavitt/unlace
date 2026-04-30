// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118EB0
// Name:            ._ZN2QT10QTransform9translateEdd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118EB0 jmp     cs:_ZN2QT10QTransform9translateEdd_ptr
//
// Resolved target: _ZN2QT10QTransform9translateEdd
// Target address:  0x8D80F0
// GOT/IAT slot:    0x8A33F8
// Slot symbol:     _ZN2QT10QTransform9translateEdd_ptr
// Target type:     _QWORD(QT::QTransform *__hidden this, double, double)
// ============================================================

/* see target sig */ ._ZN2QT10QTransform9translateEdd(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTransform9translateEdd via GOT/IAT indirection
    return _ZN2QT10QTransform9translateEdd(/* forwarded args */);
}

