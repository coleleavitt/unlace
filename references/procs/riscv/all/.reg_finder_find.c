// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA110
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA110 jmp     cs:off_35070
//
// Resolved target: reg_finder_find
// Target address:  0x356C0
// GOT/IAT slot:    0x35070
// Slot symbol:     off_35070
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

