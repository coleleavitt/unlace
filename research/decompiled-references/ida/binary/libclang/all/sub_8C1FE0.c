unsigned __int64 __fastcall sub_8C1FE0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        const __m128i *a5,
        char a6,
        void *src,
        __int64 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  __m128i v10; // xmm0
  __m128i v12; // xmm1
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  size_t v18; // r11
  __int64 v19; // rsi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int16 v22; // ax
  __m128i v23; // xmm1
  __int64 v24; // rax
  void *v25; // rdi
  unsigned __int8 v26; // al
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  __m128i v32[4]; // [rsp+20h] [rbp-48h] BYREF

  v10 = (__m128i)a3;
  v12 = (__m128i)a4;
  v15 = a1[274];
  v16 = (a8 - (__int64)src) >> 3;
  v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = 8LL * (unsigned int)v16;
  v19 = (unsigned int)(v18 + 64);
  a1[284] += v19;
  if ( a1[275] >= v19 + v17 && v15 )
  {
    a1[274] = v19 + v17;
  }
  else
  {
    v31 = (a8 - (__int64)src) >> 3;
    v29.m128i_i64[0] = (__int64)a5;
    v30 = 8LL * (unsigned int)v31;
    v32[0] = (__m128i)__PAIR128__(a4, a3);
    v28 = sub_8C1090((__int64)(a1 + 274), v19, 3);
    v12 = _mm_loadl_epi64((const __m128i *)&v32[0].m128i_u64[1]);
    v10 = _mm_loadl_epi64(v32);
    v16 = v31;
    a5 = (const __m128i *)v29.m128i_i64[0];
    v17 = v28;
    v18 = v30;
  }
  v20 = a1[2365];
  v21 = _mm_unpacklo_epi64(v10, v12);
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x19;
  if ( byte_4AD234C )
  {
    v32[0].m128i_i64[1] = v16;
    v32[0].m128i_i64[0] = (__int64)a5;
    v31 = v20;
    v30 = v18;
    v29 = v21;
    sub_AC4570(25);
    v16 = v32[0].m128i_i64[1];
    a5 = (const __m128i *)v32[0].m128i_i64[0];
    v20 = v31;
    v21 = _mm_load_si128(&v29);
    v18 = v30;
  }
  v22 = *(_WORD *)(v17 + 1);
  *(_QWORD *)(v17 + 8) = v20;
  *(_DWORD *)(v17 + 4) = v16;
  *(__m128i *)(v17 + 40) = v21;
  *(_WORD *)(v17 + 1) = v22 & 0xF801 | 2;
  v23 = _mm_loadu_si128(a5);
  v24 = a5[1].m128i_i64[0];
  *(_BYTE *)(v17 + 2) &= ~8u;
  *(__m128i *)(v17 + 16) = v23;
  *(_QWORD *)(v17 + 32) = v24;
  if ( (_DWORD)v16 )
  {
    v25 = (void *)(v17 + 64);
    if ( (*(_WORD *)v17 & 0x1FF) != 0x19 )
      v25 = (void *)(v17 + 80);
    memcpy(v25, src, v18);
  }
  v26 = sub_76CC10((const __m128i *)v17, a9, a10, 0, (__int64)a5, v16);
  *(_BYTE *)(v17 + 1) = (v26 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = (v26 >> 2) & 7 | *(_BYTE *)(v17 + 2) & 0xF8;
  if ( (v26 & 4) != 0 )
    *(_QWORD *)(v17 + 8) = a1[2364];
  *(_QWORD *)(v17 + 56) = a2;
  *(_BYTE *)(v17 + 2) = (16 * (a6 & 1)) | *(_BYTE *)(v17 + 2) & 0xEF;
  return v17;
}

