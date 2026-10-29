// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B690
// Name:            .remove_func_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B690 jmp     cs:remove_func_tail_ptr
//
// Resolved target: remove_func_tail
// Target address:  0x8D9A58
// GOT/IAT slot:    0x8A47E8
// Slot symbol:     remove_func_tail_ptr
// Target type:     <no type info>
// ============================================================

void .remove_func_tail(/* see target signature */)
{
    // Tail-call to remove_func_tail via GOT/IAT indirection
    return remove_func_tail(/* forwarded args */);
}

