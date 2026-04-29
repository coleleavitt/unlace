// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B580
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B580 jmp     cs:off_4C0AA8
//
// Resolved target: delete_imports
// Target address:  0x4C3AA0
// GOT/IAT slot:    0x4C0AA8
// Slot symbol:     off_4C0AA8
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

