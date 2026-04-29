// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62C0
// Name:            .add_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62C0 jmp     cs:off_24148
//
// Resolved target: add_mapping
// Target address:  0x25F18
// GOT/IAT slot:    0x24148
// Slot symbol:     off_24148
// Target type:     <no type info>
// ============================================================

void .add_mapping(/* see target signature */)
{
    // Tail-call to add_mapping via GOT/IAT indirection
    return add_mapping(/* forwarded args */);
}

