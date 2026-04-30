// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB60
// Name:            ._ZN2QT4QPen9setWidthFEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB60 jmp     cs:_ZN2QT4QPen9setWidthFEd_ptr
//
// Resolved target: _ZN2QT4QPen9setWidthFEd
// Target address:  0x8D9360
// GOT/IAT slot:    0x8A4250
// Slot symbol:     _ZN2QT4QPen9setWidthFEd_ptr
// Target type:     _QWORD(QT::QPen *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT4QPen9setWidthFEd(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPen9setWidthFEd via GOT/IAT indirection
    return _ZN2QT4QPen9setWidthFEd(/* forwarded args */);
}

