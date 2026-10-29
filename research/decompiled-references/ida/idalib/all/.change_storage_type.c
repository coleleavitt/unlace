// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8540
// Name:            .change_storage_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8540 jmp     cs:off_2C79A88
//
// Resolved target: change_storage_type
// Target address:  0x3D33F0
// GOT/IAT slot:    0x2C79A88
// Slot symbol:     off_2C79A88
// Target type:     <no type info>
// ============================================================

void .change_storage_type(/* see target signature */)
{
    // Tail-call to change_storage_type via GOT/IAT indirection
    return change_storage_type(/* forwarded args */);
}

