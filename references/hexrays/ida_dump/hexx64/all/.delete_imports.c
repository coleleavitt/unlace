// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C640
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C640 jmp     cs:off_4EDB08
//
// Resolved target: delete_imports
// Target address:  0x4F1E30
// GOT/IAT slot:    0x4EDB08
// Slot symbol:     off_4EDB08
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

