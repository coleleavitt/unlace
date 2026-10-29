// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAFE0
// Name:            .get_encoding_bpu_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAFE0 jmp     cs:off_2C7AFD8
//
// Resolved target: get_encoding_bpu_by_name
// Target address:  0x5AA170
// GOT/IAT slot:    0x2C7AFD8
// Slot symbol:     off_2C7AFD8
// Target type:     <no type info>
// ============================================================

void .get_encoding_bpu_by_name(/* see target signature */)
{
    // Tail-call to get_encoding_bpu_by_name via GOT/IAT indirection
    return get_encoding_bpu_by_name(/* forwarded args */);
}

