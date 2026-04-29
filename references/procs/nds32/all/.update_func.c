// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8590
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8590 jmp     cs:off_2A2B0
//
// Resolved target: update_func
// Target address:  0x2A828
// GOT/IAT slot:    0x2A2B0
// Slot symbol:     off_2A2B0
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

