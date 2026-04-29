// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A960
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A960 jmp     cs:off_4C0498
//
// Resolved target: netnode_get_name
// Target address:  0x4C3478
// GOT/IAT slot:    0x4C0498
// Slot symbol:     off_4C0498
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}

