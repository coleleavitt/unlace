/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D1C0
// Address: 0x0806D1C0

//----- (0806D1C0) --------------------------------------------------------
int __cdecl sub_806D1C0(int a1, _DWORD *a2)
{
  unsigned __int32 v2; // eax
  __m128i v4; // xmm1
  int v5; // edx
  int v6; // ecx
  __m128i v7; // xmm0
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  char *v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __m128i v15; // xmm1
  __m128i v16; // xmm3
  __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  __int32 v20; // ebx
  __int32 v21; // eax
  __int32 v22; // eax
  unsigned __int32 v23; // ecx
  __int32 v24; // eax
  char *v25; // eax
  __m128i v26; // [esp-5Ch] [ebp-5Ch] BYREF
  __m128i v27; // [esp-4Ch] [ebp-4Ch]
  unsigned __int64 v28; // [esp-3Ch] [ebp-3Ch]
  int v29; // [esp-34h] [ebp-34h]
  __m128i v30; // [esp-2Ch] [ebp-2Ch]

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 < *(_DWORD *)(a1 + 52) )
  {
LABEL_2:
    *a2 = *(_DWORD *)(a1 + 28) + 16 * v2;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  v4 = _mm_loadl_epi64((const __m128i *)(a1 + 40));
  v5 = _mm_cvtsi128_si32(v4);
  v6 = _mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u));
  v7 = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), v4);
  v8 = _mm_cvtsi128_si32(v7);
  if ( !__PAIR64__(v8, _mm_cvtsi128_si32(_mm_srli_epi64(v7, 0x20u))) )
    return 0;
  v9 = *(_DWORD *)(a1 + 32);
  v10 = v8;
  if ( v9 < v8 )
  {
    v12 = *(char **)(a1 + 28);
    if ( *(_DWORD *)(a1 + 36) < v8 )
    {
      v25 = (char *)sub_80CF920(a1 + 28, v12, v8, 0x10u);
      *(_DWORD *)(a1 + 28) = v25;
      v12 = v25;
      v9 = *(_DWORD *)(a1 + 32);
    }
    memset(&v12[16 * v9], 0, 16 * (v8 - v9));
    *(_DWORD *)(a1 + 32) = v8;
    v5 = *(_DWORD *)(a1 + 40);
    v6 = *(_DWORD *)(a1 + 44);
  }
  else if ( v8 != v9 )
  {
    *(_DWORD *)(a1 + 32) = v8;
  }
  v11 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 48) = 0;
  v30.m128i_i8[0] = v11 == 0;
  if ( __PAIR64__(v6, v5) && !v30.m128i_i8[0] )
  {
    v27.m128i_i32[0] = 0;
    v26.m128i_i32[0] = 0;
    if ( v6 )
    {
      v26.m128i_i64[0] = (unsigned int)v5 * (unsigned __int64)v11;
      v28 = (unsigned int)v6 * (unsigned __int64)v11;
      if ( (v28 + v26.m128i_u32[1]) >> 32 )
      {
        v27.m128i_i32[0] = 1;
        v26.m128i_i32[0] = 0;
      }
    }
    if ( v27.m128i_i32[0] )
      goto LABEL_12;
  }
  if ( v10 && !v30.m128i_i8[0] && !is_mul_ok(v10, v11) )
  {
LABEL_12:
    *(_DWORD *)(a1 + 52) = 0;
    return 0;
  }
  else
  {
    v27.m128i_i32[0] = *(_DWORD *)(a1 + 4);
    v13 = sub_80CD730(*(_DWORD *)(v27.m128i_i32[0] + 360), 0, 1);
    v15 = _mm_loadl_epi64((const __m128i *)(v27.m128i_i32[0] + 364));
    v16 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v14)), v15);
    v26.m128i_i64[0] = v16.m128i_i64[0];
    LODWORD(v28) = _mm_cvtsi128_si32(v16);
    v29 = _mm_cvtsi128_si32(_mm_srli_epi64(v16, 0x20u));
    v17 = *(_QWORD *)(a1 + 40) * *(unsigned int *)(a1 + 24);
    v30 = _mm_add_epi64(
            _mm_add_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(HIDWORD(v17))),
              _mm_loadl_epi64((const __m128i *)(a1 + 8))),
            v15);
    v18 = sub_80CD730(*(_DWORD *)(v27.m128i_i32[0] + 360), v30.m128i_i64[0], 0);
    if ( (v19 & v18) == 0xFFFFFFFF || !v10 )
    {
      v30 = _mm_add_epi64(
              _mm_load_si128(&v26),
              _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v27.m128i_i32[0] - 135385076)));
      sub_80CD730(*(int *)((char *)&off_811D15C + v27.m128i_i32[0] - 135385076), v30.m128i_i64[0], 0);
      *(_DWORD *)(a1 + 52) = 0;
      return 0;
    }
    else
    {
      v30.m128i_i32[0] = 0;
      while ( 1 )
      {
        v20 = v30.m128i_i32[0];
        if ( !sub_806D160(a1, (_OWORD *)(*(_DWORD *)(a1 + 28) + 16 * v30.m128i_i32[0])) )
          break;
        ++v30.m128i_i32[0];
        if ( v10 == v20 + 1 )
        {
          v24 = v27.m128i_i32[0];
          v27 = _mm_add_epi64(
                  _mm_load_si128(&v26),
                  _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v27.m128i_i32[0] - 135385076)));
          sub_80CD730(*(int *)((char *)&off_811D15C + v24 - 135385076), v27.m128i_i64[0], 0);
          *(_DWORD *)(a1 + 52) = v30.m128i_i32[0];
          goto LABEL_25;
        }
      }
      v21 = v27.m128i_i32[0];
      v27 = _mm_add_epi64(
              _mm_load_si128(&v26),
              _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v27.m128i_i32[0] - 135385076)));
      sub_80CD730(*(int *)((char *)&off_811D15C + v21 - 135385076), v27.m128i_i64[0], 0);
      v22 = v30.m128i_i32[0];
      *(_DWORD *)(a1 + 52) = v30.m128i_i32[0];
      if ( !v22 )
        return 0;
LABEL_25:
      v23 = v30.m128i_i32[0];
      v2 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) += v30.m128i_u32[0];
      if ( v2 < v23 )
        goto LABEL_2;
      return 0;
    }
  }
}
// 806D310: variable 'v14' is possibly undefined
// 806D38A: variable 'v19' is possibly undefined
// 811D15C: using guessed type _UNKNOWN *off_811D15C;
// 811D160: using guessed type _UNKNOWN *off_811D160;
