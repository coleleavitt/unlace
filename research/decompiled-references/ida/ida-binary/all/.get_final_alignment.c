// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B8D0
// Name:            .get_final_alignment
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B8D0 jmp     cs:get_final_alignment_ptr
//
// Resolved target: get_final_alignment
// Target address:  0x8D9BC8
// GOT/IAT slot:    0x8A4908
// Slot symbol:     get_final_alignment_ptr
// Target type:     <no type info>
// ============================================================

void .get_final_alignment(/* see target signature */)
{
    // Tail-call to get_final_alignment via GOT/IAT indirection
    return get_final_alignment(/* forwarded args */);
}

