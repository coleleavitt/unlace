// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43F0
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43F0 jmp     cs:off_1F1E0
//
// Resolved target: get_errdesc
// Target address:  0x1F4A8
// GOT/IAT slot:    0x1F1E0
// Slot symbol:     off_1F1E0
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

