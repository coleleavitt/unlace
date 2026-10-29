__int64 __fastcall sub_3B1C40(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v14; // eax
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbp
  __int64 tinfo_property; // rdx
  unsigned int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  _QWORD v27[5]; // [rsp+0h] [rbp-28h] BYREF

  v14 = *(_DWORD *)(a1 + 8);
  v27[1] = __readfsqword(0x28u);
  if ( v14 != 25 && v14 != 58 )
    return 0;
  v16 = *(_QWORD *)(a1 + 208);
  if ( *(_BYTE *)(v16 + 31) != 13 )
    return 0;
  v17 = *(_QWORD *)(v16 + 16);
  if ( v17 > 0xFFFFFFFFFFFFFFFDLL )
  {
LABEL_6:
    if ( v17 == -2 )
    {
      v27[0] = 1;
      if ( (unsigned int)sub_507F10(1188, (unsigned int)v27, a11, a12, a13, a14) )
      {
        v22 = *(_QWORD *)(a1 + 208);
        tinfo_property = 0;
        goto LABEL_15;
      }
      return 1;
    }
    if ( (get_tinfo_property(*(_QWORD *)(v16 + 8), 306) & 0x400) != 0 )
    {
      v27[0] = 1;
      if ( (unsigned int)sub_507F10(1188, (unsigned int)v27, v18, v19, v20, v21) )
      {
        v22 = *(_QWORD *)(a1 + 208);
        tinfo_property = (int)get_tinfo_property(*(_QWORD *)(v22 + 8), 16);
LABEL_15:
        v24 = set_tinfo_property4(v22 + 8, 15, tinfo_property, v27[0], 0, 0);
        return (unsigned __int8)sub_3AC490(
                                  (__int64 *)a1,
                                  v24,
                                  (__int64)"Failed to expand structure",
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  v25,
                                  v26,
                                  a8,
                                  a9);
      }
      return 1;
    }
    return 0;
  }
  if ( sub_3B18E0(nullptr, *(_QWORD *)(a1 + 208)) == -1 )
  {
    v17 = *(_QWORD *)(v16 + 16);
    goto LABEL_6;
  }
  v27[0] = 1;
  if ( (unsigned int)sub_507F10(1188, (unsigned int)v27, a11, a12, a13, a14) )
  {
    v22 = *(_QWORD *)(a1 + 208);
    tinfo_property = sub_3B18E0(nullptr, v22);
    goto LABEL_15;
  }
  return 1;
}
