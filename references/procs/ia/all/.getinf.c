// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70B0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70B0 jmp     cs:off_26040
//
// Resolved target: getinf
// Target address:  0x262F8
// GOT/IAT slot:    0x26040
// Slot symbol:     off_26040
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

