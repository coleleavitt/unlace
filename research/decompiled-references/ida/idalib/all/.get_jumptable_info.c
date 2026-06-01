// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC4C0
// Name:            .get_jumptable_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC4C0 jmp     cs:off_2C7BA48
//
// Resolved target: get_jumptable_info
// Target address:  0x59EFA0
// GOT/IAT slot:    0x2C7BA48
// Slot symbol:     off_2C7BA48
// Target type:     <no type info>
// ============================================================

void .get_jumptable_info(/* see target signature */)
{
    // Tail-call to get_jumptable_info via GOT/IAT indirection
    return get_jumptable_info(/* forwarded args */);
}

