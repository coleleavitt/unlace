__int64 __fastcall dwarf_get_macro_context_by_offset(
        struct Dwarf_Die_s *a1,
        unsigned __int64 a2,
        __int64 *a3,
        size_t **a4,
        _QWORD *a5,
        _QWORD *a6,
        Dwarf_Error *a7)
{
  Dwarf_Off v8[3]; // [rsp+8h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  return sub_41CB0(a1, 1, a2, a3, a4, v8, a5, a6, a7);
}

