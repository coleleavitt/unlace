// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9B0
// Name:            .add_frame_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9B0 jmp     cs:off_4BFCC0
//
// Resolved target: add_frame_member
// Target address:  0x4C31D8
// GOT/IAT slot:    0x4BFCC0
// Slot symbol:     off_4BFCC0
// Target type:     <no type info>
// ============================================================

void .add_frame_member(/* see target signature */)
{
    // Tail-call to add_frame_member via GOT/IAT indirection
    return add_frame_member(/* forwarded args */);
}

