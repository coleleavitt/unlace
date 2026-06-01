// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118200
// Name:            .free_result_vec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118200 jmp     cs:free_result_vec_ptr
//
// Resolved target: free_result_vec
// Target address:  0x8D7950
// GOT/IAT slot:    0x8A2DA0
// Slot symbol:     free_result_vec_ptr
// Target type:     <no type info>
// ============================================================

void .free_result_vec(/* see target signature */)
{
    // Tail-call to free_result_vec via GOT/IAT indirection
    return free_result_vec(/* forwarded args */);
}

