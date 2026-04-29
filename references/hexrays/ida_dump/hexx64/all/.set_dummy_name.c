// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D200
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D200 jmp     cs:off_4EE0E8
//
// Resolved target: set_dummy_name
// Target address:  0x4F2438
// GOT/IAT slot:    0x4EE0E8
// Slot symbol:     off_4EE0E8
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

