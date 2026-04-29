// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3670
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3670 jmp     cs:off_14320
//
// Resolved target: pack_dq
// Target address:  0x14930
// GOT/IAT slot:    0x14320
// Slot symbol:     off_14320
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

