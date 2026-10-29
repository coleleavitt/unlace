// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110E0
// Name:            .get_license_manager
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110E0 jmp     cs:get_license_manager_ptr
//
// Resolved target: get_license_manager
// Target address:  0x8D3108
// GOT/IAT slot:    0x89F510
// Slot symbol:     get_license_manager_ptr
// Target type:     <no type info>
// ============================================================

void .get_license_manager(/* see target signature */)
{
    // Tail-call to get_license_manager via GOT/IAT indirection
    return get_license_manager(/* forwarded args */);
}

