// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CAF0
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CAF0 jmp     cs:off_4EDD60
//
// Resolved target: netnode_suplast
// Target address:  0x4F20A0
// GOT/IAT slot:    0x4EDD60
// Slot symbol:     off_4EDD60
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

