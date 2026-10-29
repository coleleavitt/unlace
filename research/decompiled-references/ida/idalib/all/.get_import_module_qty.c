// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0D0
// Name:            .get_import_module_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0D0 jmp     cs:off_2C7A850
//
// Resolved target: get_import_module_qty
// Target address:  0x624250
// GOT/IAT slot:    0x2C7A850
// Slot symbol:     off_2C7A850
// Target type:     <no type info>
// ============================================================

void .get_import_module_qty(/* see target signature */)
{
    // Tail-call to get_import_module_qty via GOT/IAT indirection
    return get_import_module_qty(/* forwarded args */);
}

