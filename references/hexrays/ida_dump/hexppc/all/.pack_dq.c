// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C150
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C150 jmp     cs:off_4DB090
//
// Resolved target: pack_dq
// Target address:  0x4DDAC8
// GOT/IAT slot:    0x4DB090
// Slot symbol:     off_4DB090
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

