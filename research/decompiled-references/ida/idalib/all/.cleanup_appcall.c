// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C70
// Name:            .cleanup_appcall
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C70 jmp     cs:off_2C7A620
//
// Resolved target: cleanup_appcall
// Target address:  0x58A940
// GOT/IAT slot:    0x2C7A620
// Slot symbol:     off_2C7A620
// Target type:     <no type info>
// ============================================================

void .cleanup_appcall(/* see target signature */)
{
    // Tail-call to cleanup_appcall via GOT/IAT indirection
    return cleanup_appcall(/* forwarded args */);
}

