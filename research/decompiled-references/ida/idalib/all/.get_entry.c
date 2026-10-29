// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A95B0
// Name:            .get_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A95B0 jmp     cs:off_2C7A2C0
//
// Resolved target: get_entry
// Target address:  0x5B41C0
// GOT/IAT slot:    0x2C7A2C0
// Slot symbol:     off_2C7A2C0
// Target type:     <no type info>
// ============================================================

void .get_entry(/* see target signature */)
{
    // Tail-call to get_entry via GOT/IAT indirection
    return get_entry(/* forwarded args */);
}

