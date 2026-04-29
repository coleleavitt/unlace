// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19810
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19810 jmp     cs:off_753F0
//
// Resolved target: netnode_charval
// Target address:  0x75C40
// GOT/IAT slot:    0x753F0
// Slot symbol:     off_753F0
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

