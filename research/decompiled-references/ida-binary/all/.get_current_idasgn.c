// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117170
// Name:            .get_current_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117170 jmp     cs:get_current_idasgn_ptr
//
// Resolved target: get_current_idasgn
// Target address:  0x8D6EC8
// GOT/IAT slot:    0x8A2558
// Slot symbol:     get_current_idasgn_ptr
// Target type:     <no type info>
// ============================================================

void .get_current_idasgn(/* see target signature */)
{
    // Tail-call to get_current_idasgn via GOT/IAT indirection
    return get_current_idasgn(/* forwarded args */);
}

