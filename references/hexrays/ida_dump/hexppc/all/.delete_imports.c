// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B570
// Name:            .delete_imports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B570 jmp     cs:off_4DAAA0
//
// Resolved target: delete_imports
// Target address:  0x4DD4A0
// GOT/IAT slot:    0x4DAAA0
// Slot symbol:     off_4DAAA0
// Target type:     <no type info>
// ============================================================

void .delete_imports(/* see target signature */)
{
    // Tail-call to delete_imports via GOT/IAT indirection
    return delete_imports(/* forwarded args */);
}

