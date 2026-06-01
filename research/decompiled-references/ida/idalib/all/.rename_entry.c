// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC20
// Name:            .rename_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC20 jmp     cs:off_2C7BDF8
//
// Resolved target: rename_entry
// Target address:  0x5B46B0
// GOT/IAT slot:    0x2C7BDF8
// Slot symbol:     off_2C7BDF8
// Target type:     <no type info>
// ============================================================

void .rename_entry(/* see target signature */)
{
    // Tail-call to rename_entry via GOT/IAT indirection
    return rename_entry(/* forwarded args */);
}

