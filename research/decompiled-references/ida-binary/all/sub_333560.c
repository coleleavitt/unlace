__int64 __fastcall sub_333560(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  char *v8; // rcx
  __int64 v10; // rdi
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+10h] [rbp-18h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, &v13, v14) )
  {
    if ( dword_8BCE20 >= 0
      && (unsigned int)sub_1698A0(0, (int)"HIDECANCEL\nDo you want to undefine the selected items?") != 1 )
    {
      return 0;
    }
    v10 = v13;
    del_items(v13, 0, v14[0] - v13, 0);
    sub_1FDB10(a1, a2, a3, a4, v11, v12, a7, a8, v10, nullptr);
    goto LABEL_10;
  }
  if ( (WORD4(xmmword_8CC820) & 0x600) != 0 )
  {
    if ( !dword_8BCE20 )
    {
      v8 = "data item";
      if ( (WORD4(xmmword_8CC820) & 0x600) == 0x600 )
      {
        v8 = "instruction(s)";
        if ( (DWORD2(xmmword_8CC820) & 0x10000000) != 0 )
          v8 = "function";
      }
      if ( (unsigned int)sub_1698A0(0, (int)"HIDECANCEL\nDo you want to undefine the current %s?", v8) != 1 )
        return 0;
    }
    v13 = xmmword_8CC810;
    del_items(xmmword_8CC810, 1, 1, 0);
LABEL_10:
    set_notcode(v13);
  }
  return 1;
}
