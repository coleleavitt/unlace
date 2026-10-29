// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDF0
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDF0 jmp     cs:off_2C7BEE0
//
// Resolved target: pack_dq
// Target address:  0x83BAB0
// GOT/IAT slot:    0x2C7BEE0
// Slot symbol:     off_2C7BEE0
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

