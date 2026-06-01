// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9090
// Name:            .read_ids_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9090 jmp     cs:off_2C7A030
//
// Resolved target: read_ids_file
// Target address:  0x5E0B80
// GOT/IAT slot:    0x2C7A030
// Slot symbol:     off_2C7A030
// Target type:     <no type info>
// ============================================================

void .read_ids_file(/* see target signature */)
{
    // Tail-call to read_ids_file via GOT/IAT indirection
    return read_ids_file(/* forwarded args */);
}

