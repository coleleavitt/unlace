// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9890
// Name:            .dirtree_set_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9890 jmp     cs:off_2C7A430
//
// Resolved target: dirtree_set_id
// Target address:  0x77A460
// GOT/IAT slot:    0x2C7A430
// Slot symbol:     off_2C7A430
// Target type:     <no type info>
// ============================================================

void .dirtree_set_id(/* see target signature */)
{
    // Tail-call to dirtree_set_id via GOT/IAT indirection
    return dirtree_set_id(/* forwarded args */);
}

