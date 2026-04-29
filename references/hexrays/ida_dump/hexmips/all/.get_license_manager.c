// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A840
// Name:            .get_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A840 jmp     cs:off_4CD408
//
// Resolved target: get_license_manager
// Target address:  0x4CFDF8
// GOT/IAT slot:    0x4CD408
// Slot symbol:     off_4CD408
// Target type:     <no type info>
// ============================================================

void .get_license_manager(/* see target signature */)
{
    // Tail-call to get_license_manager via GOT/IAT indirection
    return get_license_manager(/* forwarded args */);
}

