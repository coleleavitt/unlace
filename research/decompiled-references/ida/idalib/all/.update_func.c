// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D50
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D50 jmp     cs:off_2C79E90
//
// Resolved target: update_func
// Target address:  0x5C76D0
// GOT/IAT slot:    0x2C79E90
// Slot symbol:     off_2C79E90
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

