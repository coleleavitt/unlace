// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118090
// Name:            ._ZN2QT9QGradient10setColorAtEdRKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118090 jmp     cs:_ZN2QT9QGradient10setColorAtEdRKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT9QGradient10setColorAtEdRKNS_6QColorE
// Target address:  0x8D7878
// GOT/IAT slot:    0x8A2CE8
// Slot symbol:     _ZN2QT9QGradient10setColorAtEdRKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QGradient *__hidden this, double, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT9QGradient10setColorAtEdRKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QGradient10setColorAtEdRKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT9QGradient10setColorAtEdRKNS_6QColorE(/* forwarded args */);
}

