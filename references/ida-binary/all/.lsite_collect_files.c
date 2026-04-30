// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A420
// Name:            .lsite_collect_files
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A420 jmp     cs:lsite_collect_files_ptr
//
// Resolved target: lsite_collect_files
// Target address:  0x8D8EB0
// GOT/IAT slot:    0x8A3EB0
// Slot symbol:     lsite_collect_files_ptr
// Target type:     <no type info>
// ============================================================

void .lsite_collect_files(/* see target signature */)
{
    // Tail-call to lsite_collect_files via GOT/IAT indirection
    return lsite_collect_files(/* forwarded args */);
}

