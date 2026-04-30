// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116DB0
// Name:            ._ZN2QT4QPenC1ERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116DB0 jmp     cs:_ZN2QT4QPenC1ERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT4QPenC1ERKNS_6QColorE
// Target address:  0x8D6C60
// GOT/IAT slot:    0x8A2378
// Slot symbol:     _ZN2QT4QPenC1ERKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QPen *__hidden this, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT4QPenC1ERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPenC1ERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT4QPenC1ERKNS_6QColorE(/* forwarded args */);
}

