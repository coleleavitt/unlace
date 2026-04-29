// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6240
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6240 jmp     cs:off_24108
//
// Resolved target: set_moved_jpt
// Target address:  0x25ED8
// GOT/IAT slot:    0x24108
// Slot symbol:     off_24108
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}

