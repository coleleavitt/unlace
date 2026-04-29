// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5120
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5120 jmp     cs:off_15078
//
// Resolved target: getinf
// Target address:  0x16108
// GOT/IAT slot:    0x15078
// Slot symbol:     off_15078
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

