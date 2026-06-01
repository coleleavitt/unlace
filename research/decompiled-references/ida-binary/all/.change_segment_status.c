// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118650
// Name:            .change_segment_status
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118650 jmp     cs:change_segment_status_ptr
//
// Resolved target: change_segment_status
// Target address:  0x8D7BF0
// GOT/IAT slot:    0x8A2FC8
// Slot symbol:     change_segment_status_ptr
// Target type:     <no type info>
// ============================================================

void .change_segment_status(/* see target signature */)
{
    // Tail-call to change_segment_status via GOT/IAT indirection
    return change_segment_status(/* forwarded args */);
}

