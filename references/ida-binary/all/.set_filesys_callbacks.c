// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111CA0
// Name:            .set_filesys_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111CA0 jmp     cs:set_filesys_callbacks_ptr
//
// Resolved target: set_filesys_callbacks
// Target address:  0x8D38B0
// GOT/IAT slot:    0x89FAF0
// Slot symbol:     set_filesys_callbacks_ptr
// Target type:     <no type info>
// ============================================================

void .set_filesys_callbacks(/* see target signature */)
{
    // Tail-call to set_filesys_callbacks via GOT/IAT indirection
    return set_filesys_callbacks(/* forwarded args */);
}

