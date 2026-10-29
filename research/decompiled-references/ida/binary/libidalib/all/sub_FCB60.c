__int64 __fastcall sub_FCB60(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  const __m128i *v6; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __m128i v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+20h] [rbp-38h]
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v32 = __readfsqword(0x28u);
  v3 = *(__int16 *)(sub_15D8F0(v2 + 440) + 30);
  if ( !a2 )
  {
    sub_91A70((unsigned __int8 *)a1);
    if ( v3 >= *(int *)(*(_QWORD *)(a1 + 8) + 20LL) - (__int64)unk_245114 - 1 )
    {
      sub_91A70((unsigned __int8 *)a1);
      v17 = *(_QWORD *)(a1 + 8);
      v18 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 16));
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 20));
      v20 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v18, v18), _mm_unpacklo_epi32(v19, v19));
      v21 = _mm_cmpgt_epi32((__m128i)0LL, v20);
      v29 = _mm_unpacklo_epi32(v20, v21);
      v30 = _mm_unpackhi_epi32(v20, v21);
      v24 = sub_FC750(a1, 1, 2, (__int64)&v29, v22, v23);
      if ( v24 > 0 )
      {
        if ( v24 == 1 )
        {
          v26 = sub_15D8D0(*(_QWORD *)(a1 + 8) + 440LL);
          sub_FB7B0(a1, (unsigned int)v3, v26, 0);
          if ( *(_QWORD *)(a1 + 288) == *(_QWORD *)(a1 + 256) )
            return 1;
          goto LABEL_21;
        }
        if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 256) )
          sub_911E0((__int64 *)a1);
      }
    }
    sub_FBA20(a1);
    return 1;
  }
  sub_91A70((unsigned __int8 *)a1);
  if ( unk_245114 >= (int)v3 )
  {
    sub_91A70((unsigned __int8 *)a1);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 16));
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 20));
    v11 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v9, v9), _mm_unpacklo_epi32(v10, v10));
    v12 = _mm_cmpgt_epi32((__m128i)0LL, v11);
    v29 = _mm_unpacklo_epi32(v11, v12);
    v30 = _mm_unpackhi_epi32(v11, v12);
    v15 = sub_FC750(a1, 1, 1, (__int64)&v29, v13, v14);
    if ( v15 <= 0 )
      goto LABEL_13;
    if ( v15 != 1 )
    {
      if ( *(_QWORD *)(a1 + 256) != *(_QWORD *)(a1 + 288) )
        sub_911E0((__int64 *)a1);
LABEL_13:
      v16 = sub_15D8D0(*(_QWORD *)(a1 + 8) + 440LL);
      v5 = (unsigned int)*(__int16 *)(v16 + 30);
      v6 = (const __m128i *)v16;
      if ( !*(_WORD *)(v16 + 30) && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 920LL) & 2) != 0 )
        goto LABEL_24;
      return sub_FB7B0(a1, (unsigned int)(v5 - 1), (__int64)v6, -1);
    }
    v25 = sub_15D8D0(*(_QWORD *)(a1 + 8) + 440LL);
    sub_FB7B0(a1, (unsigned int)v3, v25, 0);
    if ( *(_QWORD *)(a1 + 256) != *(_QWORD *)(a1 + 288) )
    {
LABEL_21:
      sub_911E0((__int64 *)a1);
      return 1;
    }
    return 1;
  }
  v4 = sub_15D8D0(*(_QWORD *)(a1 + 8) + 440LL);
  v5 = (unsigned int)*(__int16 *)(v4 + 30);
  v6 = (const __m128i *)v4;
  if ( *(_WORD *)(v4 + 30) || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 920LL) & 2) == 0 )
    return sub_FB7B0(a1, (unsigned int)(v5 - 1), (__int64)v6, -1);
LABEL_24:
  v27 = v6[2].m128i_i64[0];
  v29 = _mm_loadu_si128(v6);
  v28 = _mm_loadu_si128(v6 + 1);
  v31 = v27;
  v30 = v28;
  v30.m128i_i16[6] = 0;
  return sub_FB7B0(a1, v5, (__int64)&v29, -1);
}

