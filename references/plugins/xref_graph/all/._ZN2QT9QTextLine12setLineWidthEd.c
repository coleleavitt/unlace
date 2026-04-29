// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17290
// Name:            ._ZN2QT9QTextLine12setLineWidthEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17290 jmp     cs:off_4F930
//
// Resolved target: _ZN2QT9QTextLine12setLineWidthEd
// Target address:  0x50E38
// GOT/IAT slot:    0x4F930
// Slot symbol:     off_4F930
// Target type:     _QWORD(QT::QTextLine *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT9QTextLine12setLineWidthEd(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextLine12setLineWidthEd via GOT/IAT indirection
    return _ZN2QT9QTextLine12setLineWidthEd(/* forwarded args */);
}

