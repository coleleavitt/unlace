// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9A0
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9A0 jmp     cs:off_4ED4B8
//
// Resolved target: netnode_get_name
// Target address:  0x4F17B8
// GOT/IAT slot:    0x4ED4B8
// Slot symbol:     off_4ED4B8
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}

