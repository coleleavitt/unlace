// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB490
// Name:            .dirtree_get_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB490 jmp     cs:off_2C7B230
//
// Resolved target: dirtree_get_id
// Target address:  0x77A440
// GOT/IAT slot:    0x2C7B230
// Slot symbol:     off_2C7B230
// Target type:     <no type info>
// ============================================================

void .dirtree_get_id(/* see target signature */)
{
    // Tail-call to dirtree_get_id via GOT/IAT indirection
    return dirtree_get_id(/* forwarded args */);
}

