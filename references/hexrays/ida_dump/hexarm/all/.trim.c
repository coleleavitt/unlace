// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3A0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3A0 jmp     cs:off_4E91B8
//
// Resolved target: trim
// Target address:  0x4EBBA8
// GOT/IAT slot:    0x4E91B8
// Slot symbol:     off_4E91B8
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

