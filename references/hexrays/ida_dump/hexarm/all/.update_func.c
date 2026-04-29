// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E830
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E830 jmp     cs:off_4E9C00
//
// Resolved target: update_func
// Target address:  0x4EC630
// GOT/IAT slot:    0x4E9C00
// Slot symbol:     off_4E9C00
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

