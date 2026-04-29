// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .set_import_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_B148
//
// Resolved target: set_import_name
// Target address:  0xB3E0
// GOT/IAT slot:    0xB148
// Slot symbol:     off_B148
// Target type:     <no type info>
// ============================================================

void .set_import_name(/* see target signature */)
{
    // Tail-call to set_import_name via GOT/IAT indirection
    return set_import_name(/* forwarded args */);
}

