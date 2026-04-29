// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B350
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B350 jmp     cs:off_4ED190
//
// Resolved target: pack_dd
// Target address:  0x4F1488
// GOT/IAT slot:    0x4ED190
// Slot symbol:     off_4ED190
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

