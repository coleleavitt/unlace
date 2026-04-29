// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C160
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C160 jmp     cs:off_4CE098
//
// Resolved target: pack_dq
// Target address:  0x4D0AF0
// GOT/IAT slot:    0x4CE098
// Slot symbol:     off_4CE098
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

