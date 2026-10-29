// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC7C0
// Name:            .get_sp_delta
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC7C0 jmp     cs:off_2C7BBC8
//
// Resolved target: get_sp_delta
// Target address:  0x5B9420
// GOT/IAT slot:    0x2C7BBC8
// Slot symbol:     off_2C7BBC8
// Target type:     <no type info>
// ============================================================

void .get_sp_delta(/* see target signature */)
{
    // Tail-call to get_sp_delta via GOT/IAT indirection
    return get_sp_delta(/* forwarded args */);
}

