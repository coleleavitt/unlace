// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114790
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114790 jmp     cs:qfclose_ptr
//
// Resolved target: qfclose
// Target address:  0x8D5420
// GOT/IAT slot:    0x8A1068
// Slot symbol:     qfclose_ptr
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

