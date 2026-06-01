// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC810
// Name:            .save_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC810 jmp     cs:off_2C7BBF0
//
// Resolved target: save_dirtree
// Target address:  0x77A3C0
// GOT/IAT slot:    0x2C7BBF0
// Slot symbol:     off_2C7BBF0
// Target type:     <no type info>
// ============================================================

void .save_dirtree(/* see target signature */)
{
    // Tail-call to save_dirtree via GOT/IAT indirection
    return save_dirtree(/* forwarded args */);
}

