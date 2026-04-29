// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5420
// Name:            .is_cp_graphical
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5420 jmp     cs:off_1A1F8
//
// Resolved target: is_cp_graphical
// Target address:  0x1A588
// GOT/IAT slot:    0x1A1F8
// Slot symbol:     off_1A1F8
// Target type:     <no type info>
// ============================================================

void .is_cp_graphical(/* see target signature */)
{
    // Tail-call to is_cp_graphical via GOT/IAT indirection
    return is_cp_graphical(/* forwarded args */);
}

