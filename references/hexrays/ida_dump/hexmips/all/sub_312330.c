char __fastcall sub_312330(__int64 *a1, __m128i *a2, double a3, __m128 a4)
{
  __int64 v4; // rdx
  char result; // al
  __int64 v7; // rdi
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v4 = a2->m128i_i64[1];
  v15 = __readfsqword(0x28u);
  if ( !v4 )
    return sub_311E30(a1, a2, a3, a4);
  result = v4 != -1 || a2->m128i_i64[0] != 0;
  if ( result )
    return sub_311E30(a1, a2, a3, a4);
  if ( a1[1] != 1 || *(_QWORD *)*a1 || *(_QWORD *)(*a1 + 8) != -1 )
  {
    v14 = 0;
    v13 = 0;
    v13 = qvector_reserve(&v13, 0, 1, 16);
    *(__m128i *)(v13 + 16 * v14) = _mm_load_si128((const __m128i *)&xmmword_407240);
    v7 = *a1;
    v8 = v13;
    v13 = 0;
    v9 = (__m128i)_mm_loadh_ps((const double *)&v14 + 1);
    v14 = 0;
    if ( v7 )
    {
      a1[1] = 0;
      v12 = v9;
      qfree(v7);
      v10 = _mm_load_si128(&v12);
      v11 = v13;
      *a1 = v8;
      *(__m128i *)(a1 + 1) = v10;
      if ( v11 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v11);
      }
    }
    else
    {
      *a1 = v8;
      *(__m128i *)(a1 + 1) = v9;
    }
    return 1;
  }
  return result;
}
