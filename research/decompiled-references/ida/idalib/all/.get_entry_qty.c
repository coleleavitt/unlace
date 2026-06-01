// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3C0
// Name:            .get_entry_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3C0 jmp     cs:off_2C7B9C8
//
// Resolved target: get_entry_qty
// Target address:  0x5B4180
// GOT/IAT slot:    0x2C7B9C8
// Slot symbol:     off_2C7B9C8
// Target type:     <no type info>
// ============================================================

void .get_entry_qty(/* see target signature */)
{
    // Tail-call to get_entry_qty via GOT/IAT indirection
    return get_entry_qty(/* forwarded args */);
}

