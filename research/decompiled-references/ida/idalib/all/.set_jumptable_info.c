// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7700
// Name:            .set_jumptable_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7700 jmp     cs:off_2C79368
//
// Resolved target: set_jumptable_info
// Target address:  0x59F0B0
// GOT/IAT slot:    0x2C79368
// Slot symbol:     off_2C79368
// Target type:     <no type info>
// ============================================================

void .set_jumptable_info(/* see target signature */)
{
    // Tail-call to set_jumptable_info via GOT/IAT indirection
    return set_jumptable_info(/* forwarded args */);
}

