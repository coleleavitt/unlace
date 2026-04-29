// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1B0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1B0 jmp     cs:off_4B98C0
//
// Resolved target: set_name
// Target address:  0x4BC2C0
// GOT/IAT slot:    0x4B98C0
// Slot symbol:     off_4B98C0
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

