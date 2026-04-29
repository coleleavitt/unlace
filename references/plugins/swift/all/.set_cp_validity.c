// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4090
// Name:            .set_cp_validity
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4090 jmp     cs:off_28030
//
// Resolved target: set_cp_validity
// Target address:  0x299C0
// GOT/IAT slot:    0x28030
// Slot symbol:     off_28030
// Target type:     <no type info>
// ============================================================

void .set_cp_validity(/* see target signature */)
{
    // Tail-call to set_cp_validity via GOT/IAT indirection
    return set_cp_validity(/* forwarded args */);
}

