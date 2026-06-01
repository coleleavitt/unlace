// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1115B0
// Name:            .process_archive
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1115B0 jmp     cs:process_archive_ptr
//
// Resolved target: process_archive
// Target address:  0x8D3440
// GOT/IAT slot:    0x89F778
// Slot symbol:     process_archive_ptr
// Target type:     <no type info>
// ============================================================

void .process_archive(/* see target signature */)
{
    // Tail-call to process_archive via GOT/IAT indirection
    return process_archive(/* forwarded args */);
}

