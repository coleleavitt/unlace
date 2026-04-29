// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F190
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F190 jmp     cs:off_4EA0B0
//
// Resolved target: pack_dq
// Target address:  0x4ECB08
// GOT/IAT slot:    0x4EA0B0
// Slot symbol:     off_4EA0B0
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

