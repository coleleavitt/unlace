// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9220
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9220 jmp     cs:off_2E0F8
//
// Resolved target: interr
// Target address:  0x2E768
// GOT/IAT slot:    0x2E0F8
// Slot symbol:     off_2E0F8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

