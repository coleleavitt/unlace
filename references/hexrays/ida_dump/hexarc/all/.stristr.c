// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE20
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE20 jmp     cs:off_4B9EF8
//
// Resolved target: stristr
// Target address:  0x4BC928
// GOT/IAT slot:    0x4B9EF8
// Slot symbol:     off_4B9EF8
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

