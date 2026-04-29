// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B870
// Name:            .get_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B870 jmp     cs:off_4ED420
//
// Resolved target: get_license_manager
// Target address:  0x4F1718
// GOT/IAT slot:    0x4ED420
// Slot symbol:     off_4ED420
// Target type:     <no type info>
// ============================================================

void .get_license_manager(/* see target signature */)
{
    // Tail-call to get_license_manager via GOT/IAT indirection
    return get_license_manager(/* forwarded args */);
}

