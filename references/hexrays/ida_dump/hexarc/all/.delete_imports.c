// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A560
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A560 jmp     cs:off_4B9A98
//
// Resolved target: delete_imports
// Target address:  0x4BC498
// GOT/IAT slot:    0x4B9A98
// Slot symbol:     off_4B9A98
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

