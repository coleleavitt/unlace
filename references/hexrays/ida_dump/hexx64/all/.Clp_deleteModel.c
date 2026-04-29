// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF80
// Name:            .Clp_deleteModel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF80 jmp     cs:off_4EDFA8
//
// Resolved target: Clp_deleteModel
// Target address:  0x4F22F8
// GOT/IAT slot:    0x4EDFA8
// Slot symbol:     off_4EDFA8
// Target type:     <no type info>
// ============================================================

void .Clp_deleteModel(/* see target signature */)
{
    // Tail-call to Clp_deleteModel via GOT/IAT indirection
    return Clp_deleteModel(/* forwarded args */);
}

