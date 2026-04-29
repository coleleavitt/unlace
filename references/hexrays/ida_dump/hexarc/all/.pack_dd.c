// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29340
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29340 jmp     cs:off_4B9188
//
// Resolved target: pack_dd
// Target address:  0x4BBB58
// GOT/IAT slot:    0x4B9188
// Slot symbol:     off_4B9188
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

