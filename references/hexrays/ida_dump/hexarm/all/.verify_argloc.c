// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCE0
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCE0 jmp     cs:off_4E9658
//
// Resolved target: verify_argloc
// Target address:  0x4EC070
// GOT/IAT slot:    0x4E9658
// Slot symbol:     off_4E9658
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

