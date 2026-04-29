// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B580
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B580 jmp     cs:off_4CDAA8
//
// Resolved target: delete_imports
// Target address:  0x4D04C8
// GOT/IAT slot:    0x4CDAA8
// Slot symbol:     off_4CDAA8
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

