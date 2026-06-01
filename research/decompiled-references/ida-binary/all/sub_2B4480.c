__int64 __fastcall sub_2B4480(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  bool v7; // zf
  __m128i v8; // xmm0
  __int64 result; // rax
  int v10; // eax

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0xA00000028LL;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 56) = 0;
  v5 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a2 + 16) + 384LL, a2, a3, a4, 0.0);
  *(__m128i *)(a1 + 24) = _mm_loadu_si128(v5);
  v6 = _mm_loadu_si128(v5 + 1);
  LODWORD(v5) = v5[2].m128i_i32[0];
  *(__m128i *)(a1 + 40) = v6;
  v7 = *(double *)a3 == *(double *)(a1 + 24);
  *(_DWORD *)(a1 + 56) = (_DWORD)v5;
  if ( v7 )
  {
    v10 = (int)(sqrt(
                  (*(double *)(a3 + 8) - *(double *)(a1 + 32)) * (*(double *)(a3 + 8) - *(double *)(a1 + 32))
                + (*(double *)(a3 + 16) - *(double *)(a1 + 40)) * (*(double *)(a3 + 16) - *(double *)(a1 + 40)))
              / 100.0);
    if ( v10 > 12 )
      v10 = 12;
    *(_DWORD *)(a1 + 20) = v10;
  }
  v8 = _mm_loadu_si128((const __m128i *)a3);
  result = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 40) = result;
  *(__m128i *)(a1 + 24) = v8;
  return result;
}
