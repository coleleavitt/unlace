// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3B0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3B0 jmp     cs:off_4ED1C0
//
// Resolved target: trim
// Target address:  0x4F14B8
// GOT/IAT slot:    0x4ED1C0
// Slot symbol:     off_4ED1C0
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

