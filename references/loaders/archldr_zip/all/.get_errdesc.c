// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_8128
//
// Resolved target: get_errdesc
// Target address:  0x8318
// GOT/IAT slot:    0x8128
// Slot symbol:     off_8128
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

