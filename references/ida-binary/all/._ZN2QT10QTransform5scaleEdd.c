// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114510
// Name:            ._ZN2QT10QTransform5scaleEdd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114510 jmp     cs:_ZN2QT10QTransform5scaleEdd_ptr
//
// Resolved target: _ZN2QT10QTransform5scaleEdd
// Target address:  0x8D5288
// GOT/IAT slot:    0x8A0F28
// Slot symbol:     _ZN2QT10QTransform5scaleEdd_ptr
// Target type:     _QWORD(QT::QTransform *__hidden this, double, double)
// ============================================================

/* see target sig */ ._ZN2QT10QTransform5scaleEdd(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTransform5scaleEdd via GOT/IAT indirection
    return _ZN2QT10QTransform5scaleEdd(/* forwarded args */);
}

