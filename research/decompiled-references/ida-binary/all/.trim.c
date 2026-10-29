// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A30
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A30 jmp     cs:trim_ptr
//
// Resolved target: trim
// Target address:  0x8D4BB0
// GOT/IAT slot:    0x8A09B8
// Slot symbol:     trim_ptr
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

