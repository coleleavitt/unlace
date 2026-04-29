// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C50
// Name:            ._ZN2QT4QPenC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C50 jmp     cs:off_4F610
//
// Resolved target: _ZN2QT4QPenC1ERKS0_
// Target address:  0x508A8
// GOT/IAT slot:    0x4F610
// Slot symbol:     off_4F610
// Target type:     <no type info>
// ============================================================

void ._ZN2QT4QPenC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPenC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT4QPenC1ERKS0_(/* forwarded args */);
}

