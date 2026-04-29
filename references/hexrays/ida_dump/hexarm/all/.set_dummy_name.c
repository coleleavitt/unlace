// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F0E0
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F0E0 jmp     cs:off_4EA058
//
// Resolved target: set_dummy_name
// Target address:  0x4ECAA8
// GOT/IAT slot:    0x4EA058
// Slot symbol:     off_4EA058
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

