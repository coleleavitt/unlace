// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16500
// Name:            ._ZN2QT11QTextFormatC2ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16500 jmp     cs:off_4F268
//
// Resolved target: _ZN2QT11QTextFormatC2ERKS0_
// Target address:  0x50220
// GOT/IAT slot:    0x4F268
// Slot symbol:     off_4F268
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QTextFormatC2ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextFormatC2ERKS0_ via GOT/IAT indirection
    return _ZN2QT11QTextFormatC2ERKS0_(/* forwarded args */);
}

