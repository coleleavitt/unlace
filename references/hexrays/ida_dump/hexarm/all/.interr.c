// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6A0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6A0 jmp     cs:off_4E9338
//
// Resolved target: interr
// Target address:  0x4EBD28
// GOT/IAT slot:    0x4E9338
// Slot symbol:     off_4E9338
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

