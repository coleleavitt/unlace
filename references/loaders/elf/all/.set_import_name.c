// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9660
// Name:            .set_import_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9660 jmp     cs:off_89318
//
// Resolved target: set_import_name
// Target address:  0x8C620
// GOT/IAT slot:    0x89318
// Slot symbol:     off_89318
// Target type:     <no type info>
// ============================================================

void .set_import_name(/* see target signature */)
{
    // Tail-call to set_import_name via GOT/IAT indirection
    return set_import_name(/* forwarded args */);
}

