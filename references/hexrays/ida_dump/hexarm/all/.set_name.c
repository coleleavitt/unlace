// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E1E0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E1E0 jmp     cs:off_4E98D8
//
// Resolved target: set_name
// Target address:  0x4EC2F8
// GOT/IAT slot:    0x4E98D8
// Slot symbol:     off_4E98D8
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

