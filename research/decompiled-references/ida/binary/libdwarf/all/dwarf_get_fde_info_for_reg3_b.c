__int64 __fastcall dwarf_get_fde_info_for_reg3_b(
        int a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+0h] [rbp-18h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = 0;
  result = dwarf_get_fde_info_for_reg3_c(a1, a2, a3, a4, a5, a6, (__int64)v13, a8, a9, a10, a11, a12);
  if ( a7 )
    *a7 = v13[0];
  return result;
}

