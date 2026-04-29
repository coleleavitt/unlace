// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEC0
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEC0 jmp     cs:off_4B9F48
//
// Resolved target: compare_arglocs
// Target address:  0x4BC978
// GOT/IAT slot:    0x4B9F48
// Slot symbol:     off_4B9F48
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

