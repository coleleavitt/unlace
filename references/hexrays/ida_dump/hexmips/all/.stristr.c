// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE50
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE50 jmp     cs:off_4CDF10
//
// Resolved target: stristr
// Target address:  0x4D0960
// GOT/IAT slot:    0x4CDF10
// Slot symbol:     off_4CDF10
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

