// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6740
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6740 jmp     cs:off_2F388
//
// Resolved target: update_func
// Target address:  0x2FA00
// GOT/IAT slot:    0x2F388
// Slot symbol:     off_2F388
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

