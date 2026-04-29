// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33B0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33B0 jmp     cs:off_131C0
//
// Resolved target: set_name
// Target address:  0x13540
// GOT/IAT slot:    0x131C0
// Slot symbol:     off_131C0
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

