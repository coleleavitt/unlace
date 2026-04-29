// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF00
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF00 jmp     cs:off_4EDF68
//
// Resolved target: get_errdesc
// Target address:  0x4F22B8
// GOT/IAT slot:    0x4EDF68
// Slot symbol:     off_4EDF68
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

