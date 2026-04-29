// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35A0
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35A0 jmp     cs:off_282B8
//
// Resolved target: pack_dw
// Target address:  0x28770
// GOT/IAT slot:    0x282B8
// Slot symbol:     off_282B8
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

