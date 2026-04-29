// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA100
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA100 jmp     cs:off_35068
//
// Resolved target: pack_dd
// Target address:  0x356B8
// GOT/IAT slot:    0x35068
// Slot symbol:     off_35068
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

