// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .add_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_7178
//
// Resolved target: add_dword
// Target address:  0x7338
// GOT/IAT slot:    0x7178
// Slot symbol:     off_7178
// Target type:     <no type info>
// ============================================================

void .add_dword(/* see target signature */)
{
    // Tail-call to add_dword via GOT/IAT indirection
    return add_dword(/* forwarded args */);
}

