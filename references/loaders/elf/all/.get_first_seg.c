// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91A0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91A0 jmp     cs:off_890B8
//
// Resolved target: get_first_seg
// Target address:  0x8C3B8
// GOT/IAT slot:    0x890B8
// Slot symbol:     off_890B8
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

