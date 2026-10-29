__int64 __fastcall dwarf_get_fde_info_for_cfa_reg3_b(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+8h] [rbp-18h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = 0;
  result = dwarf_get_fde_info_for_cfa_reg3_c(a1, a2, a3, a4, a5, (int)v13, a7, a8, a9, a10, a11);
  if ( a6 )
    *a6 = v13[0];
  return result;
}

