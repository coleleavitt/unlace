__int64 __fastcall sub_3D4AD0(int a1)
{
  _OWORD *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // esi
  __m128i v4; // xmm3
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128 v8; // xmm1
  __m128i v9; // xmm0
  unsigned int v10; // eax
  __m128i v11; // xmm3
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+10h] [rbp-38h]
  __int128 v19; // [rsp+18h] [rbp-30h]

  v1 = (_OWORD *)sub_186B270(0x40u);
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  ptr[0] = v1;
  ptr[1] = &byte_8;
  v18 = 0;
  v19 = 0;
  sub_157E9E0((int)ptr, a1);
  v2 = v19;
  if ( (_QWORD)v19 )
  {
    v3 = *(_DWORD *)(v19 - 4);
    if ( v3 )
    {
      if ( v3 - 1 <= 2 )
      {
        v10 = 0;
        v12 = 0;
      }
      else
      {
        v4 = 0;
        v5 = (const __m128i *)v19;
        do
        {
          v6 = _mm_loadu_si128(v5);
          v5 += 2;
          v7 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(v6, (__m128i)0LL), (__m128i)0LL);
          v8 = (__m128)_mm_or_si128(_mm_shuffle_epi32(v7, 177), v7);
          v9 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(_mm_loadu_si128(v5 - 1), (__m128i)0LL), (__m128i)0LL);
          v4 = _mm_sub_epi32(v4, (__m128i)_mm_shuffle_ps(v8, (__m128)_mm_or_si128(_mm_shuffle_epi32(v9, 177), v9), 136));
        }
        while ( v5 != (const __m128i *)(v19 + 32LL * (v3 >> 2)) );
        v10 = v3 & 0xFFFFFFFC;
        v11 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
        v12 = _mm_cvtsi128_si32(_mm_add_epi32(v11, _mm_srli_si128(v11, 4)));
        if ( (v3 & 3) == 0 )
          goto LABEL_10;
      }
      v13 = v10 + 1;
      v12 -= (*(_QWORD *)(v19 + 8LL * v10) == 0) - 1;
      if ( (unsigned int)v13 < v3 )
      {
        v12 -= (*(_QWORD *)(v19 + 8 * v13) == 0) - 1;
        v14 = v10 + 2;
        if ( (unsigned int)v14 < v3 )
          v12 -= (*(_QWORD *)(v19 + 8 * v14) == 0) - 1;
      }
LABEL_10:
      v15 = *((_QWORD *)&v19 + 1);
      if ( *((_QWORD *)&v19 + 1) )
        goto LABEL_11;
LABEL_16:
      sub_186B220((void *)(v2 - 8));
      goto LABEL_12;
    }
    v15 = *((_QWORD *)&v19 + 1);
    v12 = 0;
    if ( !*((_QWORD *)&v19 + 1) )
      goto LABEL_16;
LABEL_11:
    sub_186B220((void *)(v15 - 8));
    v2 = v19;
    if ( !(_QWORD)v19 )
      goto LABEL_12;
    goto LABEL_16;
  }
  v15 = *((_QWORD *)&v19 + 1);
  v12 = 0;
  if ( *((_QWORD *)&v19 + 1) )
    goto LABEL_11;
LABEL_12:
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  return v12;
}

