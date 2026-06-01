__int64 __fastcall sub_1253440(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i *v8; // rax
  __int64 v9; // rax

  v2 = a1[6];
  v3 = (__int64 *)a1[9];
  if ( v2 == a1[8] - 24LL )
  {
    if ( (unsigned __int64)(a1[1] - (((__int64)v3 - *a1) >> 3)) <= 1 )
    {
      sub_1253200((__int64)a1, 1u, 0);
      v3 = (__int64 *)a1[9];
    }
    v6 = operator new(0x1F8u);
    v7 = _mm_loadu_si128(a2);
    v3[1] = v6;
    v8 = (__m128i *)a1[6];
    *v8 = v7;
    v8[1].m128i_i64[0] = a2[1].m128i_i64[0];
    v3 = (__int64 *)(a1[9] + 8LL);
    v9 = *v3;
    a1[9] = v3;
    a1[7] = v9;
    a1[8] = v9 + 504;
    a1[6] = v9;
  }
  else
  {
    v4 = v2 + 24;
    *(__m128i *)(v4 - 24) = _mm_loadu_si128(a2);
    *(_QWORD *)(v4 - 8) = a2[1].m128i_i64[0];
    a1[6] = v4;
    if ( v4 != a1[7] )
      return v4 - 24;
  }
  return *(v3 - 1) + 480;
}
