// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B080
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B080 jmp     cs:off_4BA028
//
// Resolved target: set_dummy_name
// Target address:  0x4BCA58
// GOT/IAT slot:    0x4BA028
// Slot symbol:     off_4BA028
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

