// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117EB0
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117EB0 jmp     cs:set_frame_size_ptr
//
// Resolved target: set_frame_size
// Target address:  0x8D7750
// GOT/IAT slot:    0x8A2BF8
// Slot symbol:     set_frame_size_ptr
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}

