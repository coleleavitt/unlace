// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116440
// Name:            .qmake_full_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116440 jmp     cs:qmake_full_path_ptr
//
// Resolved target: qmake_full_path
// Target address:  0x8D6670
// GOT/IAT slot:    0x8A1EC0
// Slot symbol:     qmake_full_path_ptr
// Target type:     <no type info>
// ============================================================

void .qmake_full_path(/* see target signature */)
{
    // Tail-call to qmake_full_path via GOT/IAT indirection
    return qmake_full_path(/* forwarded args */);
}

