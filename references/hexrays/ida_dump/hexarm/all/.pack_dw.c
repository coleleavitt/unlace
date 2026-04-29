// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7A0
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7A0 jmp     cs:off_4E9BB8
//
// Resolved target: pack_dw
// Target address:  0x4EC5E8
// GOT/IAT slot:    0x4E9BB8
// Slot symbol:     off_4E9BB8
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

