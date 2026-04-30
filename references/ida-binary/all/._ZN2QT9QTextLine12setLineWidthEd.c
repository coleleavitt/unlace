// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0D0
// Name:            ._ZN2QT9QTextLine12setLineWidthEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0D0 jmp     cs:_ZN2QT9QTextLine12setLineWidthEd_ptr
//
// Resolved target: _ZN2QT9QTextLine12setLineWidthEd
// Target address:  0x8D8CB0
// GOT/IAT slot:    0x8A3D08
// Slot symbol:     _ZN2QT9QTextLine12setLineWidthEd_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT9QTextLine12setLineWidthEd(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextLine12setLineWidthEd via GOT/IAT indirection
    return _ZN2QT9QTextLine12setLineWidthEd(/* forwarded args */);
}

