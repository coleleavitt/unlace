// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA740
// Name:            .get_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA740 jmp     cs:off_2C7AB88
//
// Resolved target: get_merge_handlers
// Target address:  0x45FAE0
// GOT/IAT slot:    0x2C7AB88
// Slot symbol:     off_2C7AB88
// Target type:     <no type info>
// ============================================================

void .get_merge_handlers(/* see target signature */)
{
    // Tail-call to get_merge_handlers via GOT/IAT indirection
    return get_merge_handlers(/* forwarded args */);
}

