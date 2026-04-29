// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29840
// Name:            .get_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29840 jmp     cs:off_4B9408
//
// Resolved target: get_license_manager
// Target address:  0x4BBDD8
// GOT/IAT slot:    0x4B9408
// Slot symbol:     off_4B9408
// Target type:     <no type info>
// ============================================================

void .get_license_manager(/* see target signature */)
{
    // Tail-call to get_license_manager via GOT/IAT indirection
    return get_license_manager(/* forwarded args */);
}

