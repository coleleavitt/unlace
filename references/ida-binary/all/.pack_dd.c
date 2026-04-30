// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157D0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157D0 jmp     cs:pack_dd_ptr
//
// Resolved target: pack_dd
// Target address:  0x8D5E90
// GOT/IAT slot:    0x8A1888
// Slot symbol:     pack_dd_ptr
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

