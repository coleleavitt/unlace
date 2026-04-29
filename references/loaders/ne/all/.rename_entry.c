// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .rename_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_B0F8
//
// Resolved target: rename_entry
// Target address:  0xB390
// GOT/IAT slot:    0xB0F8
// Slot symbol:     off_B0F8
// Target type:     <no type info>
// ============================================================

void .rename_entry(/* see target signature */)
{
    // Tail-call to rename_entry via GOT/IAT indirection
    return rename_entry(/* forwarded args */);
}

