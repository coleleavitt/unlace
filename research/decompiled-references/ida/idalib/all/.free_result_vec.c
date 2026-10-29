// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB730
// Name:            .free_result_vec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB730 jmp     cs:off_2C7B380
//
// Resolved target: free_result_vec
// Target address:  0x4342E0
// GOT/IAT slot:    0x2C7B380
// Slot symbol:     off_2C7B380
// Target type:     <no type info>
// ============================================================

void .free_result_vec(/* see target signature */)
{
    // Tail-call to free_result_vec via GOT/IAT indirection
    return free_result_vec(/* forwarded args */);
}

