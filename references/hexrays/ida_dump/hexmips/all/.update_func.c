// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B800
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B800 jmp     cs:off_4CDBE8
//
// Resolved target: update_func
// Target address:  0x4D0618
// GOT/IAT slot:    0x4CDBE8
// Slot symbol:     off_4CDBE8
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

