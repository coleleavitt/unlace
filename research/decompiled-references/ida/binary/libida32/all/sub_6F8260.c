__int64 __fastcall sub_6F8260(
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
  __m128i v15; // xmm0
  double v16; // xmm4_8
  double v17; // xmm5_8
  int *v19; // rbx
  int *v20; // r12
  __int64 v21[5]; // [rsp+10h] [rbp-28h] BYREF

  v13 = *a2;
  v21[1] = __readfsqword(0x28u);
  v14 = v13 & 0x7FFFFFFF;
  if ( v14 == 8 )
    return sub_6ED600(a1, *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL, 0, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v14 > 8 )
  {
    if ( v14 == 9 )
    {
      v19 = *((int **)a2 + 1);
      v20 = &v19[6 * a2[1]];
      if ( v19 != v20 )
      {
        while ( (unsigned __int8)sub_6EED00(a1, v19, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
        {
          v19 += 6;
          if ( v20 == v19 )
            return 1;
        }
        return 0;
      }
    }
    return 1;
  }
  if ( v14 != 1 )
  {
    if ( ((v14 + 2147483642) & 0x7FFFFFFF) <= 1 )
    {
      v15 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL));
      if ( !v15.m128i_i64[0]
        || (unsigned __int8)sub_6F7D60(
                              a1,
                              v15.m128i_i64[0],
                              v15.m128i_i64[1],
                              *(double *)v15.m128i_i64,
                              a7,
                              a8,
                              a9,
                              a10,
                              a11,
                              a12,
                              a13) )
      {
        sub_EFED50(v21, *((_QWORD *)a2 + 1));
        return sub_6EEC90(a1, v21[0], *(double *)v15.m128i_i64, a7, a8, a9, v16, v17, a12, a13);
      }
      return 0;
    }
    return 1;
  }
  if ( (*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    return sub_6F74E0(
             a1,
             *(_QWORD *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL),
             (*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL) + 8,
             *(_QWORD *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL),
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13);
  else
    return sub_6EE600(a1, *((_QWORD *)a2 + 1), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

