// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5C0
// Name:            .get_import_module_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5C0 jmp     cs:off_2C7BAC8
//
// Resolved target: get_import_module_name
// Target address:  0x624270
// GOT/IAT slot:    0x2C7BAC8
// Slot symbol:     off_2C7BAC8
// Target type:     <no type info>
// ============================================================

void .get_import_module_name(/* see target signature */)
{
    // Tail-call to get_import_module_name via GOT/IAT indirection
    return get_import_module_name(/* forwarded args */);
}

