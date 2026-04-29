// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA30
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA30 jmp     cs:off_4E9D00
//
// Resolved target: netnode_suplast
// Target address:  0x4EC740
// GOT/IAT slot:    0x4E9D00
// Slot symbol:     off_4E9D00
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

