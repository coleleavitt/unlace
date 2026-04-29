// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C10
// Name:            ._ZN2QT6QColor8fromHsvFEffff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C10 jmp     cs:off_4F5F0
//
// Resolved target: _ZN2QT6QColor8fromHsvFEffff
// Target address:  0x50878
// GOT/IAT slot:    0x4F5F0
// Slot symbol:     off_4F5F0
// Target type:     _QWORD(QT::QColor *__hidden this, float, float, float, float)
// ============================================================

/* see target sig */ ._ZN2QT6QColor8fromHsvFEffff(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor8fromHsvFEffff via GOT/IAT indirection
    return _ZN2QT6QColor8fromHsvFEffff(/* forwarded args */);
}

