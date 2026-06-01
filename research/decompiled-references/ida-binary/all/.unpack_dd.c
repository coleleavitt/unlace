// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B530
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B530 jmp     cs:unpack_dd_ptr
//
// Resolved target: unpack_dd
// Target address:  0x8D9990
// GOT/IAT slot:    0x8A4738
// Slot symbol:     unpack_dd_ptr
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

