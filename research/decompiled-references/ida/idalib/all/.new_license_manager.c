// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDB0
// Name:            .new_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDB0 jmp     cs:off_2C7B6C0
//
// Resolved target: new_license_manager
// Target address:  0x8AD7F0
// GOT/IAT slot:    0x2C7B6C0
// Slot symbol:     off_2C7B6C0
// Target type:     <no type info>
// ============================================================

void .new_license_manager(/* see target signature */)
{
    // Tail-call to new_license_manager via GOT/IAT indirection
    return new_license_manager(/* forwarded args */);
}

