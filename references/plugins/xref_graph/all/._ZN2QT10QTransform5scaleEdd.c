// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x167E0
// Name:            ._ZN2QT10QTransform5scaleEdd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x167E0 jmp     cs:off_4F3D8
//
// Resolved target: _ZN2QT10QTransform5scaleEdd
// Target address:  0x50468
// GOT/IAT slot:    0x4F3D8
// Slot symbol:     off_4F3D8
// Target type:     _QWORD(QT::QTransform *__hidden this, double, double)
// ============================================================

/* see target sig */ ._ZN2QT10QTransform5scaleEdd(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTransform5scaleEdd via GOT/IAT indirection
    return _ZN2QT10QTransform5scaleEdd(/* forwarded args */);
}

