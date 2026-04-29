// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE80
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE80 jmp     cs:off_4E9F28
//
// Resolved target: stristr
// Target address:  0x4EC978
// GOT/IAT slot:    0x4E9F28
// Slot symbol:     off_4E9F28
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

