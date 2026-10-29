// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA50
// Name:            .process_zipfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA50 jmp     cs:off_2C7BD10
//
// Resolved target: process_zipfile
// Target address:  0x835F50
// GOT/IAT slot:    0x2C7BD10
// Slot symbol:     off_2C7BD10
// Target type:     <no type info>
// ============================================================

void .process_zipfile(/* see target signature */)
{
    // Tail-call to process_zipfile via GOT/IAT indirection
    return process_zipfile(/* forwarded args */);
}

