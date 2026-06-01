// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7360
// Name:            .dirtree_find_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7360 jmp     cs:off_2C79198
//
// Resolved target: dirtree_find_entry
// Target address:  0x77A890
// GOT/IAT slot:    0x2C79198
// Slot symbol:     off_2C79198
// Target type:     <no type info>
// ============================================================

void .dirtree_find_entry(/* see target signature */)
{
    // Tail-call to dirtree_find_entry via GOT/IAT indirection
    return dirtree_find_entry(/* forwarded args */);
}

