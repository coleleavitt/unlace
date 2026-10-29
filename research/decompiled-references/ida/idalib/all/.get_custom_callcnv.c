// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C50
// Name:            .get_custom_callcnv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C50 jmp     cs:off_2C79E10
//
// Resolved target: get_custom_callcnv
// Target address:  0x3DD960
// GOT/IAT slot:    0x2C79E10
// Slot symbol:     off_2C79E10
// Target type:     <no type info>
// ============================================================

void .get_custom_callcnv(/* see target signature */)
{
    // Tail-call to get_custom_callcnv via GOT/IAT indirection
    return get_custom_callcnv(/* forwarded args */);
}

