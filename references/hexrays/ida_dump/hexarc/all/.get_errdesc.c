// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB0
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB0 jmp     cs:off_4B9EC0
//
// Resolved target: get_errdesc
// Target address:  0x4BC8F0
// GOT/IAT slot:    0x4B9EC0
// Slot symbol:     off_4B9EC0
// Target type:     <no type info>
// ============================================================

void .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

