// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1F0
// Name:            .extract_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1F0 jmp     cs:off_4CE0E0
//
// Resolved target: extract_name
// Target address:  0x4D0B38
// GOT/IAT slot:    0x4CE0E0
// Slot symbol:     off_4CE0E0
// Target type:     <no type info>
// ============================================================

void .extract_name(/* see target signature */)
{
    // Tail-call to extract_name via GOT/IAT indirection
    return extract_name(/* forwarded args */);
}

