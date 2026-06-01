// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A830
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A830 jmp     cs:add_frame_ptr
//
// Resolved target: add_frame
// Target address:  0x8D9178
// GOT/IAT slot:    0x8A40B8
// Slot symbol:     add_frame_ptr
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

