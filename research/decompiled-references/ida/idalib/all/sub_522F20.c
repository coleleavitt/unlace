_QWORD *__fastcall sub_522F20(__int64 *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rcx

  result = a2;
  v3 = *a1;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  v5 = a2[3];
  *result = v3;
  *(__m128i *)(result + 1) = v4;
  v6 = a1[3];
  a1[3] = v5;
  v7 = result[4];
  result[3] = v6;
  v8 = a1[4];
  a1[4] = v7;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  a1[5] = result[5];
  a1[6] = result[6];
  v10 = result[7];
  result[4] = v8;
  *(__m128i *)(result + 5) = v9;
  v11 = a1[7];
  a1[7] = v10;
  LOBYTE(v10) = *((_BYTE *)result + 64);
  result[7] = v11;
  LOBYTE(v11) = *((_BYTE *)a1 + 64);
  *((_BYTE *)a1 + 64) = v10;
  *((_BYTE *)result + 64) = v11;
  return result;
}
