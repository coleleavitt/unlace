__int64 __fastcall def_1D6C8B3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        __int64 *a9)
{
  unsigned __int16 v15; // ax
  unsigned __int8 v16; // r9
  int v17; // esi
  __int64 v18; // rcx
  const __m128i *v19; // rdx
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int8 v22; // dl
  __int64 result; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // r9
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  const __m128i *v31; // roff
  unsigned __int8 v32; // [rsp+Ch] [rbp-5Ch]
  __m128i si128; // [rsp+10h] [rbp-58h] BYREF
  __m128i v34; // [rsp+20h] [rbp-48h]

  v15 = *(_WORD *)(a3 + 70);
  v16 = a7;
  v17 = a4->m128i_i32[0] & 0x7FFFFFFF;
  v18 = *a8;
  v19 = (const __m128i *)(*a8 + 32LL * (v15 >> 4));
  if ( (v19->m128i_i32[0] & 0x7FFFFFFF) == 0 )
  {
    si128 = _mm_load_si128(a4);
    v34 = _mm_load_si128(a4 + 1);
    if ( v17 )
      goto LABEL_3;
LABEL_18:
    *(_QWORD *)(a6 + 176) = a3 & 0xFFFFFFFFFFFFFFF9LL | 2;
    v31 = (const __m128i *)(*a8 + 32LL * (*(_WORD *)(a3 + 70) >> 4));
    *(__m128i *)(a6 + 184) = _mm_loadu_si128(v31);
    *(_QWORD *)(a6 + 200) = v31[1].m128i_i64[0];
    *(__m128i *)(a6 + 208) = _mm_load_si128(a4);
    *(_QWORD *)(a6 + 224) = a4[1].m128i_i64[0];
    return 5;
  }
  if ( !v17 )
  {
    v17 = v19->m128i_i32[0] & 0x7FFFFFFF;
    si128 = _mm_loadu_si128(v19);
    v34 = _mm_loadu_si128(v19 + 1);
    goto LABEL_4;
  }
  sub_1D3B740(&si128, *(_QWORD **)(a1 + 248), v19, a4, 0, a7);
  v16 = a7;
  v17 = si128.m128i_i32[0] & 0x7FFFFFFF;
  if ( (si128.m128i_i32[0] & 0x7FFFFFFF) == 0 )
    goto LABEL_18;
LABEL_3:
  v15 = *(_WORD *)(a3 + 70);
  v18 = *a8;
LABEL_4:
  v32 = v16;
  v20 = (__m128i *)(v18 + 32LL * (v15 >> 4));
  si128.m128i_i32[0] = si128.m128i_i32[0] & 0x80000000 | v17;
  v21 = _mm_load_si128(&si128);
  v20[1].m128i_i64[0] = v34.m128i_i64[0];
  v22 = v34.m128i_i8[8];
  *v20 = v21;
  v20[1].m128i_i8[8] = v22;
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 && !*(_BYTE *)(a3 + 81) )
  {
    v24 = sub_A75DA0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a3 + 48));
    v25 = v32;
    v26 = v24;
    v27 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v27 + 16) == 38 )
    {
      v26 = *(_QWORD *)(v27 + 32);
      v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v28 - 43) <= 1
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      v29 = *(_QWORD *)(a1 + 248);
      if ( (_BYTE)v28 == 44 )
        v30 = sub_A72DD0(v29, a5);
      else
        v30 = sub_A73030(v29, a5, 1u);
      v25 = v32;
      a5 = v30;
    }
    return sub_1D6C080(a1, a2, v26, a5, a6, a8, 0xAu, v25, a4[1].m128i_u8[8], a9);
  }
  return result;
}
