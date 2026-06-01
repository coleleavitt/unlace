__int64 __fastcall sub_1253380(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i *v7; // rax
  __int64 *v8; // rdx

  v2 = a1[6];
  if ( v2 == a1[8] - 24LL )
  {
    v4 = a1[9];
    if ( (unsigned __int64)(a1[1] - ((v4 - *a1) >> 3)) <= 1 )
    {
      sub_1253200((__int64)a1, 1u, 0);
      v4 = a1[9];
    }
    v5 = operator new(0x1F8u);
    v6 = _mm_loadu_si128(a2);
    *(_QWORD *)(v4 + 8) = v5;
    v7 = (__m128i *)a1[6];
    *v7 = v6;
    v7[1].m128i_i64[0] = a2[1].m128i_i64[0];
    v8 = (__int64 *)(a1[9] + 8LL);
    result = *v8;
    a1[9] = v8;
    a1[7] = result;
    a1[8] = result + 504;
    a1[6] = result;
  }
  else
  {
    result = v2 + 24;
    *(__m128i *)(result - 24) = _mm_loadu_si128(a2);
    *(_QWORD *)(result - 8) = a2[1].m128i_i64[0];
    a1[6] = result;
  }
  return result;
}
