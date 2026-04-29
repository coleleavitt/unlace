// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9280
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9280 jmp     cs:off_2E128
//
// Resolved target: set_moved_jpt
// Target address:  0x2E798
// GOT/IAT slot:    0x2E128
// Slot symbol:     off_2E128
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}

