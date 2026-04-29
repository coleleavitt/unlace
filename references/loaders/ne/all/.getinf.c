// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_B058
//
// Resolved target: getinf
// Target address:  0xB2F0
// GOT/IAT slot:    0xB058
// Slot symbol:     off_B058
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

