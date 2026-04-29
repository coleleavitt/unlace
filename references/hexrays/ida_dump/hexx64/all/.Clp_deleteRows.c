// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C970
// Name:            .Clp_deleteRows
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C970 jmp     cs:off_4EDCA0
//
// Resolved target: Clp_deleteRows
// Target address:  0x4F1FD8
// GOT/IAT slot:    0x4EDCA0
// Slot symbol:     off_4EDCA0
// Target type:     <no type info>
// ============================================================

void .Clp_deleteRows(/* see target signature */)
{
    // Tail-call to Clp_deleteRows via GOT/IAT indirection
    return Clp_deleteRows(/* forwarded args */);
}

