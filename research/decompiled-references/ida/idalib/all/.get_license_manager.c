// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7070
// Name:            .get_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7070 jmp     cs:off_2C79020
//
// Resolved target: get_license_manager
// Target address:  0x395C00
// GOT/IAT slot:    0x2C79020
// Slot symbol:     off_2C79020
// Target type:     <no type info>
// ============================================================

void .get_license_manager(/* see target signature */)
{
    // Tail-call to get_license_manager via GOT/IAT indirection
    return get_license_manager(/* forwarded args */);
}

