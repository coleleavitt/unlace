// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .set_import_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_15138
//
// Resolved target: set_import_ordinal
// Target address:  0x15338
// GOT/IAT slot:    0x15138
// Slot symbol:     off_15138
// Target type:     <no type info>
// ============================================================

void .set_import_ordinal(/* see target signature */)
{
    // Tail-call to set_import_ordinal via GOT/IAT indirection
    return set_import_ordinal(/* forwarded args */);
}

