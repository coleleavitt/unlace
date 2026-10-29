// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD150
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD150 jmp     cs:off_2C7C090
//
// Resolved target: netnode_suplast
// Target address:  0x7BEC70
// GOT/IAT slot:    0x2C7C090
// Slot symbol:     off_2C7C090
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

