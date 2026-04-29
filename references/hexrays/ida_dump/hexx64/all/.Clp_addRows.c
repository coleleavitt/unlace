// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C180
// Name:            .Clp_addRows
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C180 jmp     cs:off_4ED8A8
//
// Resolved target: Clp_addRows
// Target address:  0x4F1BC8
// GOT/IAT slot:    0x4ED8A8
// Slot symbol:     off_4ED8A8
// Target type:     <no type info>
// ============================================================

void .Clp_addRows(/* see target signature */)
{
    // Tail-call to Clp_addRows via GOT/IAT indirection
    return Clp_addRows(/* forwarded args */);
}

