// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44C0
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44C0 jmp     cs:off_1F248
//
// Resolved target: pack_dq
// Target address:  0x1F520
// GOT/IAT slot:    0x1F248
// Slot symbol:     off_1F248
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

