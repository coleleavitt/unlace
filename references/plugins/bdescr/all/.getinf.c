// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_7030
//
// Resolved target: getinf
// Target address:  0x7160
// GOT/IAT slot:    0x7030
// Slot symbol:     off_7030
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

