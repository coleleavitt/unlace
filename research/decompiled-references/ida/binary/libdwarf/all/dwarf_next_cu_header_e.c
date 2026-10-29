__int64 __fastcall dwarf_next_cu_header_e(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        __int64 a6,
        _WORD *a7,
        _WORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        Dwarf_Error *a14)
{
  __int64 result; // rax
  _DWORD v16[13]; // [rsp+Ch] [rbp-34h] BYREF

  *(_QWORD *)&v16[1] = __readfsqword(0x28u);
  v16[0] = 0;
  result = _dwarf_next_cu_header_internal(
             (Dwarf_Debug)a1,
             a2,
             a3,
             a4,
             (__int64)a5,
             a6,
             (__int64)a7,
             (__int64)a8,
             a9,
             a10,
             (__int64)v16,
             a11,
             a12,
             a13,
             a14);
  if ( !*(_WORD *)(a1 + 10864) )
  {
    *(_WORD *)(a1 + 10864) = *a5;
    *(_WORD *)(a1 + 10866) = *a8;
    *(_WORD *)(a1 + 10868) = *a7;
  }
  return result;
}

