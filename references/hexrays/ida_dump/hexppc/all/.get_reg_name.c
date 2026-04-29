// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B680
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B680 jmp     cs:off_4DAB28
//
// Resolved target: get_reg_name
// Target address:  0x4DD530
// GOT/IAT slot:    0x4DAB28
// Slot symbol:     off_4DAB28
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

