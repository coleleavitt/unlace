unsigned __int64 __fastcall sub_81A840(
        _QWORD *a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        void *src,
        __int64 a8,
        unsigned int a9,
        unsigned __int8 a10)
{
  __int64 v10; // r10
  __m128i v12; // xmm0
  const void *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  unsigned __int64 v20; // xmm0_8
  int v21; // edx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // si
  _QWORD *v24; // rdi
  unsigned __int8 v25; // al
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  const void *v31; // [rsp+18h] [rbp-40h]

  v10 = a3;
  v12 = _mm_cvtsi32_si128(a6);
  v15 = src;
  v16 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v17 = a1[274];
  a1[284] += v16;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v16 + v18 && v17 )
  {
    a1[274] = v16 + v18;
  }
  else
  {
    v31 = src;
    v29 = a3;
    LODWORD(v28) = a2;
    LODWORD(v30) = _mm_cvtsi128_si32(v12);
    v27 = sub_804090((__int64)(a1 + 274), v16, 3);
    v15 = src;
    v12 = _mm_cvtsi32_si128(v30);
    v10 = v29;
    a2 = v28;
    v18 = v27;
  }
  v19 = a1[2364];
  v20 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a9)).m128i_u64[0];
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x3A;
  if ( byte_4AD234C )
  {
    v31 = v15;
    v30 = v10;
    LODWORD(v29) = a2;
    v28 = v20;
    sub_AC4570(58);
    v15 = v31;
    v10 = v30;
    a2 = v29;
  }
  v21 = *(_DWORD *)(v18 + 16);
  *(_WORD *)(v18 + 1) &= 0xF801u;
  *(_QWORD *)(v18 + 8) = v19;
  *(_DWORD *)(v18 + 4) = a2;
  *(_QWORD *)(v18 + 20) = v20;
  *(_DWORD *)(v18 + 16) = v21 & 0x80000000 | a8 & 0x7FFF | 0x3FFF8000;
  *(_QWORD *)(v18 + 8 * (a8 & 0x7FFF) + 32) = v10;
  v22 = *(_BYTE *)(v18 + 19) & 0x40;
  v23 = v22 >> 6;
  if ( 8 * a8 > 0 )
  {
    memmove((void *)(v18 + 8LL * v23 + 32), v15, 8 * a8);
    v22 = *(_BYTE *)(v18 + 19) & 0x40;
    v23 = v22 >> 6;
  }
  v24 = (_QWORD *)(v18 + 8LL * ((v22 & 0x40) == 0) + 32 + 8LL * (v23 + (*(_WORD *)(v18 + 16) & 0x7FFFu)));
  if ( 8 * a5 <= 8 )
  {
    if ( 8 * a5 == 8 )
      *v24 = *a4;
  }
  else
  {
    memmove(v24, a4, 8 * a5);
  }
  v25 = sub_76C780(v18, a10);
  *(_BYTE *)(v18 + 1) = (v25 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
  *(_BYTE *)(v18 + 2) = *(_BYTE *)(v18 + 2) & 0xF8 | (v25 >> 2) & 7;
  return v18;
}

