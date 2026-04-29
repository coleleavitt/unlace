// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDE0
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDE0 jmp     cs:off_4C0ED8
//
// Resolved target: get_errdesc
// Target address:  0x4C3F00
// GOT/IAT slot:    0x4C0ED8
// Slot symbol:     off_4C0ED8
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

