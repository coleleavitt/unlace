// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29680
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29680 jmp     cs:off_4B9328
//
// Resolved target: get_tid_name
// Target address:  0x4BBCF8
// GOT/IAT slot:    0x4B9328
// Slot symbol:     off_4B9328
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

