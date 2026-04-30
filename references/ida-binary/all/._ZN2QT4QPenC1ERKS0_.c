// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A20
// Name:            ._ZN2QT4QPenC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A20 jmp     cs:_ZN2QT4QPenC1ERKS0__ptr
//
// Resolved target: _ZN2QT4QPenC1ERKS0_
// Target address:  0x8D6A38
// GOT/IAT slot:    0x8A21B0
// Slot symbol:     _ZN2QT4QPenC1ERKS0__ptr
// Target type:     _QWORD(QT::QPen *__hidden this, const QT::QPen *)
// ============================================================

/* see target sig */ ._ZN2QT4QPenC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPenC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT4QPenC1ERKS0_(/* forwarded args */);
}

