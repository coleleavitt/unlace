// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79A0
// Name:            .is_cp_graphical
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79A0 jmp     cs:off_2C794B8
//
// Resolved target: is_cp_graphical
// Target address:  0x8B6A40
// GOT/IAT slot:    0x2C794B8
// Slot symbol:     off_2C794B8
// Target type:     <no type info>
// ============================================================

void .is_cp_graphical(/* see target signature */)
{
    // Tail-call to is_cp_graphical via GOT/IAT indirection
    return is_cp_graphical(/* forwarded args */);
}

