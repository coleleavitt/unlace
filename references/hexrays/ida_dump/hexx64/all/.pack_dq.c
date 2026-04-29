// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2D0
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2D0 jmp     cs:off_4EE150
//
// Resolved target: pack_dq
// Target address:  0x4F24A8
// GOT/IAT slot:    0x4EE150
// Slot symbol:     off_4EE150
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

