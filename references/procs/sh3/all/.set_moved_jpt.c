// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51D0
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51D0 jmp     cs:off_150D0
//
// Resolved target: set_moved_jpt
// Target address:  0x16160
// GOT/IAT slot:    0x150D0
// Slot symbol:     off_150D0
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}

