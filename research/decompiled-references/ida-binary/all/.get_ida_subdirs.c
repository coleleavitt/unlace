// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A70
// Name:            .get_ida_subdirs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A70 jmp     cs:get_ida_subdirs_ptr
//
// Resolved target: get_ida_subdirs
// Target address:  0x8D6A60
// GOT/IAT slot:    0x8A21D8
// Slot symbol:     get_ida_subdirs_ptr
// Target type:     <no type info>
// ============================================================

void .get_ida_subdirs(/* see target signature */)
{
    // Tail-call to get_ida_subdirs via GOT/IAT indirection
    return get_ida_subdirs(/* forwarded args */);
}

