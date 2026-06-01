__int64 __fastcall sub_6EED00(
        __int64 *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  int v13; // eax
  unsigned int v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v13 = *a2;
  v20[1] = __readfsqword(0x28u);
  v14 = v13 & 0x7FFFFFFF;
  if ( v14 == 8 )
    return sub_6ED600(a1, *((_QWORD *)a2 + 1), 0, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v14 > 8 )
  {
    if ( v14 != 9 )
      return 1;
    v18 = *((_QWORD *)a2 + 1);
    v19 = v18 + 24LL * (unsigned int)a2[1];
    if ( v18 == v19 )
      return 1;
    while ( 1 )
    {
      result = sub_6EED00(a1, v18);
      if ( !(_BYTE)result )
        break;
      v18 += 24;
      if ( v19 == v18 )
        return 1;
    }
  }
  else
  {
    if ( v14 != 1 )
    {
      if ( ((v14 + 2147483642) & 0x7FFFFFFF) <= 1 )
      {
        sub_EFED50(v20, *((_QWORD *)a2 + 1));
        return sub_6EEC90(a1, v20[0], a6, a7, a8, a9, v15, v16, a12, a13);
      }
      return 1;
    }
    return sub_6EE600(a1, *((_QWORD *)a2 + 1), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  }
  return result;
}

