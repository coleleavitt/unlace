unsigned __int64 __fastcall sub_7B7AF0(_QWORD *a1, unsigned int a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  signed __int64 v5; // r13
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rbx

  v5 = 8 * a4;
  v6 = _mm_cvtsi32_si128(a2);
  v7 = _mm_cvtsi32_si128(a5);
  v8 = 8 * a4 + 16;
  v9 = a4;
  v11 = a1[274];
  a1[284] += v8;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v8 + v12 && v11 )
  {
    a1[274] = v8 + v12;
  }
  else
  {
    v7 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v7));
    v6 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v6));
    v12 = sub_7B4EB0((__int64)(a1 + 274), v8, 3);
  }
  *(_DWORD *)(v12 + 8) = v9;
  *(_QWORD *)v12 = _mm_unpacklo_epi32(v6, v7).m128i_u64[0];
  if ( v5 <= 8 )
  {
    if ( v5 == 8 )
      *(_QWORD *)(v12 + 16) = *a3;
  }
  else
  {
    memmove((void *)(v12 + 16), a3, v5);
  }
  return v12;
}

