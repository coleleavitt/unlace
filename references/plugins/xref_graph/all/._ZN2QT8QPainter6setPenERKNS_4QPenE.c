// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16ED0
// Name:            ._ZN2QT8QPainter6setPenERKNS_4QPenE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16ED0 jmp     cs:off_4F750
//
// Resolved target: _ZN2QT8QPainter6setPenERKNS_4QPenE
// Target address:  0x50B08
// GOT/IAT slot:    0x4F750
// Slot symbol:     off_4F750
// Target type:     <no type info>
// ============================================================

void ._ZN2QT8QPainter6setPenERKNS_4QPenE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter6setPenERKNS_4QPenE via GOT/IAT indirection
    return _ZN2QT8QPainter6setPenERKNS_4QPenE(/* forwarded args */);
}

