// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8160
// Name:            .get_custom_callcnvs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8160 jmp     cs:off_2C79898
//
// Resolved target: get_custom_callcnvs
// Target address:  0x3DDA30
// GOT/IAT slot:    0x2C79898
// Slot symbol:     off_2C79898
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnvs(/* see target signature */)
{
    // Tail-call to get_custom_callcnvs via GOT/IAT indirection
    return get_custom_callcnvs(/* forwarded args */);
}

