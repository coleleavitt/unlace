// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FC0
// Name:            .get_undo_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FC0 jmp     cs:get_undo_info_ptr
//
// Resolved target: get_undo_info
// Target address:  0x8D81A8
// GOT/IAT slot:    0x8A3480
// Slot symbol:     get_undo_info_ptr
// Target type:     <no type info>
// ============================================================

void .get_undo_info(/* see target signature */)
{
    // Tail-call to get_undo_info via GOT/IAT indirection
    return get_undo_info(/* forwarded args */);
}

