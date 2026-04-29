// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B130
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B130 jmp     cs:off_4BA080
//
// Resolved target: pack_dq
// Target address:  0x4BCAB8
// GOT/IAT slot:    0x4BA080
// Slot symbol:     off_4BA080
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

