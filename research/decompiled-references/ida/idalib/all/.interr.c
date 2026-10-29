// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB850
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB850 jmp     cs:off_2C7B410
//
// Resolved target: interr
// Target address:  0x840D20
// GOT/IAT slot:    0x2C7B410
// Slot symbol:     off_2C7B410
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

