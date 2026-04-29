// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .rename_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_14188
//
// Resolved target: rename_entry
// Target address:  0x14778
// GOT/IAT slot:    0x14188
// Slot symbol:     off_14188
// Target type:     <no type info>
// ============================================================

void .rename_entry(/* see target signature */)
{
    // Tail-call to rename_entry via GOT/IAT indirection
    return rename_entry(/* forwarded args */);
}

