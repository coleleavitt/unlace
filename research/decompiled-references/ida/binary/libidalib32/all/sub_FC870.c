__int64 __fastcall sub_FC870(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  int v11; // r8d
  int v12; // r9d
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-59h]
  _OWORD v15[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v5 = sub_15CFF0(v3 + 440);
  sub_91990((unsigned __int8 *)a1);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 16));
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 20));
  v9 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v7, v7), _mm_unpacklo_epi32(v8, v8));
  v10 = _mm_cmpgt_epi32((__m128i)0LL, v9);
  v15[0] = _mm_unpacklo_epi32(v9, v10);
  v15[1] = _mm_unpackhi_epi32(v9, v10);
  if ( (int)sub_FC560(a1, a3, 2 - (unsigned int)a2, (__int64)v15, v11, v12) <= 0 )
    return 0;
  result = sub_FB5C0(a1, (unsigned int)*(__int16 *)(v5 + 30), v5, 0);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 256) )
  {
    v14 = result;
    sub_91100((__int64 *)a1);
    return v14;
  }
  return result;
}

