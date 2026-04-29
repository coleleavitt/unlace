// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70F0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70F0 jmp     cs:off_19060
//
// Resolved target: getinf
// Target address:  0x19590
// GOT/IAT slot:    0x19060
// Slot symbol:     off_19060
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

