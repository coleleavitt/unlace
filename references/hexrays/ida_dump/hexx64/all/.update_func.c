// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8D0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C8D0 jmp     cs:off_4EDC50
//
// Resolved target: update_func
// Target address:  0x4F1F88
// GOT/IAT slot:    0x4EDC50
// Slot symbol:     off_4EDC50
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

