// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173E0
// Name:            ._ZN2QT4QPen9setWidthFEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173E0 jmp     cs:off_4F9D8
//
// Resolved target: _ZN2QT4QPen9setWidthFEd
// Target address:  0x50F90
// GOT/IAT slot:    0x4F9D8
// Slot symbol:     off_4F9D8
// Target type:     _QWORD(QT::QPen *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT4QPen9setWidthFEd(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPen9setWidthFEd via GOT/IAT indirection
    return _ZN2QT4QPen9setWidthFEd(/* forwarded args */);
}

