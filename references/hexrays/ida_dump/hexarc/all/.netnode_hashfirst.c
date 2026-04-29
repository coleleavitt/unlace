// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4B0
// Name:            .netnode_hashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4B0 jmp     cs:off_4B9A40
//
// Resolved target: netnode_hashfirst
// Target address:  0x4BC440
// GOT/IAT slot:    0x4B9A40
// Slot symbol:     off_4B9A40
// Target type:     <no type info>
// ============================================================

void .netnode_hashfirst(/* see target signature */)
{
    // Tail-call to netnode_hashfirst via GOT/IAT indirection
    return netnode_hashfirst(/* forwarded args */);
}

