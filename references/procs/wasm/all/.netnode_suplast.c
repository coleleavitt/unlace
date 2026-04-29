// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9330
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9330 jmp     cs:off_26180
//
// Resolved target: netnode_suplast
// Target address:  0x264A0
// GOT/IAT slot:    0x26180
// Slot symbol:     off_26180
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

