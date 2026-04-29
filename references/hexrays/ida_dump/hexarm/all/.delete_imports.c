// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5B0
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5B0 jmp     cs:off_4E9AC0
//
// Resolved target: delete_imports
// Target address:  0x4EC4E0
// GOT/IAT slot:    0x4E9AC0
// Slot symbol:     off_4E9AC0
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

