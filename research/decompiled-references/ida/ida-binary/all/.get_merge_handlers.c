// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167F0
// Name:            .get_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167F0 jmp     cs:get_merge_handlers_ptr
//
// Resolved target: get_merge_handlers
// Target address:  0x8D68F0
// GOT/IAT slot:    0x8A2098
// Slot symbol:     get_merge_handlers_ptr
// Target type:     <no type info>
// ============================================================

void .get_merge_handlers(/* see target signature */)
{
    // Tail-call to get_merge_handlers via GOT/IAT indirection
    return get_merge_handlers(/* forwarded args */);
}

