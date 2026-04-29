// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96C0
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96C0 jmp     cs:off_2E348
//
// Resolved target: pack_dw
// Target address:  0x2E9C0
// GOT/IAT slot:    0x2E348
// Slot symbol:     off_2E348
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

