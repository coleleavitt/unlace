// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9200
// Name:            .get_std_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9200 jmp     cs:off_2C7A0E8
//
// Resolved target: get_std_dirtree
// Target address:  0x52CCB0
// GOT/IAT slot:    0x2C7A0E8
// Slot symbol:     off_2C7A0E8
// Target type:     <no type info>
// ============================================================

void .get_std_dirtree(/* see target signature */)
{
    // Tail-call to get_std_dirtree via GOT/IAT indirection
    return get_std_dirtree(/* forwarded args */);
}

