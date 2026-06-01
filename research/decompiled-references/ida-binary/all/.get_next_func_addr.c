// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B370
// Name:            .get_next_func_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B370 jmp     cs:get_next_func_addr_ptr
//
// Resolved target: get_next_func_addr
// Target address:  0x8D9840
// GOT/IAT slot:    0x8A4658
// Slot symbol:     get_next_func_addr_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_func_addr(/* see target signature */)
{
    // Tail-call to get_next_func_addr via GOT/IAT indirection
    return get_next_func_addr(/* forwarded args */);
}

