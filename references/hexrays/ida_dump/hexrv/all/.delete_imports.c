// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B570
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B570 jmp     cs:off_4BFAA0
//
// Resolved target: delete_imports
// Target address:  0x4C2F98
// GOT/IAT slot:    0x4BFAA0
// Slot symbol:     off_4BFAA0
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

