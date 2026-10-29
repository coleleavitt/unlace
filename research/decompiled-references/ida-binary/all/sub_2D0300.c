__int64 __fastcall sub_2D0300(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // xmm1
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 result; // rax

  v3 = *a3;
  v4 = _mm_loadu_si128((const __m128i *)(a3 + 1));
  *a3 = 0;
  *(__m128i *)(a2 + 8) = v4;
  *(_QWORD *)a2 = v3;
  v5 = a3[3];
  v6 = _mm_loadu_si128((const __m128i *)a3 + 2);
  *(_OWORD *)(a3 + 1) = 0;
  *(_QWORD *)(a2 + 24) = v5;
  *(__m128i *)(a2 + 32) = v6;
  v7 = a3[6];
  v8 = _mm_loadu_si128((const __m128i *)(a3 + 7));
  a3[3] = 0;
  *((_OWORD *)a3 + 2) = 0;
  *(_QWORD *)(a2 + 48) = v7;
  *(__m128i *)(a2 + 56) = v8;
  v9 = a3[9];
  v10 = _mm_loadu_si128((const __m128i *)a3 + 5);
  a3[6] = 0;
  *(_OWORD *)(a3 + 7) = 0;
  *(_QWORD *)(a2 + 72) = v9;
  *(__m128i *)(a2 + 80) = v10;
  LOBYTE(v9) = *((_BYTE *)a3 + 96);
  a3[9] = 0;
  *((_OWORD *)a3 + 5) = 0;
  *(_BYTE *)(a2 + 96) = v9;
  *(_DWORD *)(a2 + 100) = *((_DWORD *)a3 + 25);
  result = *((unsigned __int8 *)a3 + 104);
  *(_BYTE *)(a2 + 104) = result;
  return result;
}
