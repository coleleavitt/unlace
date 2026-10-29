// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A130
// Name:            .get_segment_combination
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A130 jmp     cs:get_segment_combination_ptr
//
// Resolved target: get_segment_combination
// Target address:  0x8D8CE0
// GOT/IAT slot:    0x8A3D38
// Slot symbol:     get_segment_combination_ptr
// Target type:     <no type info>
// ============================================================

void .get_segment_combination(/* see target signature */)
{
    // Tail-call to get_segment_combination via GOT/IAT indirection
    return get_segment_combination(/* forwarded args */);
}

