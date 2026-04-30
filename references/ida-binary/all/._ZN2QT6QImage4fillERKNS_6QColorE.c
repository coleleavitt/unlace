// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E80
// Name:            ._ZN2QT6QImage4fillERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E80 jmp     cs:_ZN2QT6QImage4fillERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT6QImage4fillERKNS_6QColorE
// Target address:  0x8D4418
// GOT/IAT slot:    0x8A03E0
// Slot symbol:     _ZN2QT6QImage4fillERKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QImage *__hidden this, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT6QImage4fillERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImage4fillERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT6QImage4fillERKNS_6QColorE(/* forwarded args */);
}

