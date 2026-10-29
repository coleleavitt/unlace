// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9EB0
// Name:            .del_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9EB0 jmp     cs:off_2C7A740
//
// Resolved target: del_hidden_range
// Target address:  0x3C7890
// GOT/IAT slot:    0x2C7A740
// Slot symbol:     off_2C7A740
// Target type:     <no type info>
// ============================================================

void .del_hidden_range(/* see target signature */)
{
    // Tail-call to del_hidden_range via GOT/IAT indirection
    return del_hidden_range(/* forwarded args */);
}

