// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1181E0
// Name:            .create_frame_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1181E0 jmp     cs:create_frame_tlc_ptr
//
// Resolved target: create_frame_tlc
// Target address:  0x8D7940
// GOT/IAT slot:    0x8A2D90
// Slot symbol:     create_frame_tlc_ptr
// Target type:     <no type info>
// ============================================================

void .create_frame_tlc(/* see target signature */)
{
    // Tail-call to create_frame_tlc via GOT/IAT indirection
    return create_frame_tlc(/* forwarded args */);
}

