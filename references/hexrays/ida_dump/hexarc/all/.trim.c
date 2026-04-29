// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x293A0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x293A0 jmp     cs:off_4B91B8
//
// Resolved target: trim
// Target address:  0x4BBB88
// GOT/IAT slot:    0x4B91B8
// Slot symbol:     off_4B91B8
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

