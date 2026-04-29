// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8260
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8260 jmp     cs:off_2A118
//
// Resolved target: set_moved_jpt
// Target address:  0x2BB28
// GOT/IAT slot:    0x2A118
// Slot symbol:     off_2A118
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}

