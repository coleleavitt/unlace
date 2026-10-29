// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A60
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A60 jmp     cs:off_2C79518
//
// Resolved target: clear_tinfo_t
// Target address:  0x541C00
// GOT/IAT slot:    0x2C79518
// Slot symbol:     off_2C79518
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

