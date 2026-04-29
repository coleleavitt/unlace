// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19970
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19970 jmp     cs:off_754A0
//
// Resolved target: pack_dw
// Target address:  0x75CF8
// GOT/IAT slot:    0x754A0
// Slot symbol:     off_754A0
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

