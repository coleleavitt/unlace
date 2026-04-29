// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_5028
//
// Resolved target: getinf
// Target address:  0x5160
// GOT/IAT slot:    0x5028
// Slot symbol:     off_5028
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

