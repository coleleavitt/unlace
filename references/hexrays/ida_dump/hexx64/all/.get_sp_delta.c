// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C620
// Name:            .get_sp_delta
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C620 jmp     cs:off_4EDAF8
//
// Resolved target: get_sp_delta
// Target address:  0x4F1E20
// GOT/IAT slot:    0x4EDAF8
// Slot symbol:     off_4EDAF8
// Target type:     <no type info>
// ============================================================

void .get_sp_delta(/* see target signature */)
{
    // Tail-call to get_sp_delta via GOT/IAT indirection
    return get_sp_delta(/* forwarded args */);
}

