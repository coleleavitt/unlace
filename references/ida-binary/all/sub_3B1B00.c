__int64 __fastcall sub_3B1B00(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 tinfo_property; // r12
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int64 v22[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = *(_DWORD *)(a1 + 8);
  v22[1] = __readfsqword(0x28u);
  result = 0;
  if ( v9 == 25 || v9 == 58 )
  {
    v11 = *(_QWORD *)(a1 + 208);
    if ( *(_QWORD *)(v11 + 16) > 0xFFFFFFFFFFFFFFFDLL || *(_BYTE *)(v11 + 31) != 13 )
      return 0;
    tinfo_property = sub_3B18E0(v22, *(_QWORD *)(a1 + 208));
    if ( tinfo_property == -1 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(v11 + 8), 306) & 0x400) == 0 )
        return 0;
      tinfo_property = (int)get_tinfo_property(*(_QWORD *)(v11 + 8), 16);
      v12 = *(_QWORD *)(v11 + 232) >> 3;
      v17 = *(_QWORD *)(v11 + 192) - v12;
      v22[0] = v17;
    }
    else
    {
      v17 = v22[0];
    }
    if ( v17 )
    {
      v18 = sub_507F10(1189, (unsigned int)v22, v12, v13, v14, v15);
      result = 1;
      if ( v18 )
      {
        v19 = set_tinfo_property4(v11 + 8, 15, tinfo_property, -v22[0], 0, 0);
        return (unsigned __int8)sub_3AC490(
                                  (__int64 *)a1,
                                  v19,
                                  (__int64)"Failed to shrink structure",
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  v20,
                                  v21,
                                  a8,
                                  a9);
      }
      return result;
    }
    return 0;
  }
  return result;
}
