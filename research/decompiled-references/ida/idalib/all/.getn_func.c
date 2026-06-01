// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF90
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF90 jmp     cs:off_2C7BFB0
//
// Resolved target: getn_func
// Target address:  0x5CAA50
// GOT/IAT slot:    0x2C7BFB0
// Slot symbol:     off_2C7BFB0
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

