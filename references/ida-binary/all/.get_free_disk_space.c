// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112AD0
// Name:            .get_free_disk_space
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112AD0 jmp     cs:get_free_disk_space_ptr
//
// Resolved target: get_free_disk_space
// Target address:  0x8D41B0
// GOT/IAT slot:    0x8A0208
// Slot symbol:     get_free_disk_space_ptr
// Target type:     <no type info>
// ============================================================

void .get_free_disk_space(/* see target signature */)
{
    // Tail-call to get_free_disk_space via GOT/IAT indirection
    return get_free_disk_space(/* forwarded args */);
}

