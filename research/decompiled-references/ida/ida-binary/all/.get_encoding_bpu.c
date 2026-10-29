// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119860
// Name:            .get_encoding_bpu
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119860 jmp     cs:get_encoding_bpu_ptr
//
// Resolved target: get_encoding_bpu
// Target address:  0x8D8748
// GOT/IAT slot:    0x8A38D0
// Slot symbol:     get_encoding_bpu_ptr
// Target type:     <no type info>
// ============================================================

void .get_encoding_bpu(/* see target signature */)
{
    // Tail-call to get_encoding_bpu via GOT/IAT indirection
    return get_encoding_bpu(/* forwarded args */);
}

