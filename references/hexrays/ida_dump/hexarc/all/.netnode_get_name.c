// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29960
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29960 jmp     cs:off_4B9498
//
// Resolved target: netnode_get_name
// Target address:  0x4BBE80
// GOT/IAT slot:    0x4B9498
// Slot symbol:     off_4B9498
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}

