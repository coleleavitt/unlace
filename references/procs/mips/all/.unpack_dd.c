// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196E0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196E0 jmp     cs:off_75358
//
// Resolved target: unpack_dd
// Target address:  0x75BA8
// GOT/IAT slot:    0x75358
// Slot symbol:     off_75358
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

