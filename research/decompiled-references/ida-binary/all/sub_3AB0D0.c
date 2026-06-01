_BOOL8 __fastcall sub_3AB0D0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rbp
  char tinfo_property; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  _QWORD v19[5]; // [rsp+0h] [rbp-28h] BYREF

  v19[1] = __readfsqword(0x28u);
  v10 = *(_QWORD **)(a1 + 208);
  if ( v10[4] == -1 )
    return 0;
  v19[0] = get_tinfo_property(v10[14], 289);
  tinfo_property = get_tinfo_property(v19[0], 2);
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
  {
    clear_tinfo_t(v19);
    v10[15] ^= a2;
    return (unsigned int)set_tinfo_property4(*(_QWORD *)(a1 + 208) + 8LL, 14, v10[4], v10 + 15, 0, 0) == 0;
  }
  else
  {
    clear_tinfo_t(v19);
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\nThe current field cannot have a sign or be bitwise negated (it's not a number)",
      2,
      v12,
      v13,
      v14,
      v15,
      a3,
      a4,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10,
      v19[0]);
    return 1;
  }
}
