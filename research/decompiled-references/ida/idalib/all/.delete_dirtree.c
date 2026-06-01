// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD200
// Name:            .delete_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD200 jmp     cs:off_2C7C0E8
//
// Resolved target: delete_dirtree
// Target address:  0x779D50
// GOT/IAT slot:    0x2C7C0E8
// Slot symbol:     off_2C7C0E8
// Target type:     <no type info>
// ============================================================

void .delete_dirtree(/* see target signature */)
{
    // Tail-call to delete_dirtree via GOT/IAT indirection
    return delete_dirtree(/* forwarded args */);
}

