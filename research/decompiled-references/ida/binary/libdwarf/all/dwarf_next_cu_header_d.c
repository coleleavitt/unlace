__int64 __fastcall dwarf_next_cu_header_d(
        struct Dwarf_Debug_s *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        Dwarf_Error *a13)
{
  _DWORD v14[5]; // [rsp+Ch] [rbp-14h] BYREF

  *(_QWORD *)&v14[1] = __readfsqword(0x28u);
  v14[0] = 0;
  return _dwarf_next_cu_header_internal(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, (__int64)v14, a10, a11, a12, a13);
}

