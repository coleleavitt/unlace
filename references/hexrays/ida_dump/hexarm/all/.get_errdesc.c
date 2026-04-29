// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE10
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE10 jmp     cs:off_4E9EF0
//
// Resolved target: get_errdesc
// Target address:  0x4EC940
// GOT/IAT slot:    0x4E9EF0
// Slot symbol:     off_4E9EF0
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

