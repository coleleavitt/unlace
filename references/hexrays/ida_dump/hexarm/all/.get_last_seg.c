// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D710
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D710 jmp     cs:off_4E9370
//
// Resolved target: get_last_seg
// Target address:  0x4EBD60
// GOT/IAT slot:    0x4E9370
// Slot symbol:     off_4E9370
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}

