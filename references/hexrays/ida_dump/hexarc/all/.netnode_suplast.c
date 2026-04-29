// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D0
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D0 jmp     cs:off_4B9CD0
//
// Resolved target: netnode_suplast
// Target address:  0x4BC6F0
// GOT/IAT slot:    0x4B9CD0
// Slot symbol:     off_4B9CD0
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

