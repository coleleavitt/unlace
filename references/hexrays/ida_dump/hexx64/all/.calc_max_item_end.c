// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD60
// Name:            .calc_max_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD60 jmp     cs:off_4EDE98
//
// Resolved target: calc_max_item_end
// Target address:  0x4F21E0
// GOT/IAT slot:    0x4EDE98
// Slot symbol:     off_4EDE98
// Target type:     <no type info>
// ============================================================

void .calc_max_item_end(/* see target signature */)
{
    // Tail-call to calc_max_item_end via GOT/IAT indirection
    return calc_max_item_end(/* forwarded args */);
}

