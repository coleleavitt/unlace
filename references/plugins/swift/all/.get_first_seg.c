// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4130
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4130 jmp     cs:off_28080
//
// Resolved target: get_first_seg
// Target address:  0x29A18
// GOT/IAT slot:    0x28080
// Slot symbol:     off_28080
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

