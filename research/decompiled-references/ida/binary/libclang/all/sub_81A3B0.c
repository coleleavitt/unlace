unsigned __int64 __fastcall sub_81A3B0(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        void *src,
        __int64 a8,
        unsigned int a9,
        unsigned __int8 a10)
{
  __m128i v12; // xmm0
  __int64 v15; // rcx
  const void *v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  unsigned __int64 v21; // xmm0_8
  int v22; // edx
  __int16 v23; // bp
  _QWORD *v24; // rdi
  unsigned __int8 v25; // al
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-58h]
  int v29; // [rsp+Ch] [rbp-4Ch]
  const void *v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v12 = _mm_cvtsi32_si128(a6);
  v15 = a8;
  v16 = src;
  v17 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v18 = a1[274];
  a1[284] += v17;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v17 + v19 && v18 )
  {
    a1[274] = v17 + v19;
  }
  else
  {
    v31 = a8;
    v30 = src;
    LODWORD(v28) = a2;
    v29 = _mm_cvtsi128_si32(v12);
    v27 = sub_804090((__int64)(a1 + 274), v17, 3);
    v15 = a8;
    v16 = src;
    v12 = _mm_cvtsi32_si128(v29);
    a2 = v28;
    v19 = v27;
  }
  v20 = a1[2364];
  v21 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a9)).m128i_u64[0];
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x3A;
  if ( byte_4AD234C )
  {
    v31 = v15;
    v30 = v16;
    v29 = a2;
    v28 = v21;
    sub_AC4570(58);
    v15 = v31;
    v16 = v30;
    a2 = v29;
  }
  v22 = *(_DWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 8) = v20;
  *(_WORD *)(v19 + 1) &= 0xF801u;
  v23 = v15 & 0x7FFF;
  *(_DWORD *)(v19 + 4) = a2;
  *(_QWORD *)(v19 + 32) = a3;
  *(_DWORD *)(v19 + 16) = v22 & 0x80000000 | v15 & 0x7FFF | 0x7FFF8000;
  *(_QWORD *)(v19 + 20) = v21;
  if ( 8 * v15 > 0 )
    memmove((void *)(v19 + 40), v16, 8 * v15);
  v24 = (_QWORD *)(v19 + 8LL * (unsigned __int16)(v23 + 1) + 32);
  if ( 8 * a5 <= 8 )
  {
    if ( 8 * a5 == 8 )
      *v24 = *a4;
  }
  else
  {
    memmove(v24, a4, 8 * a5);
  }
  v25 = sub_76C780(v19, a10);
  *(_BYTE *)(v19 + 1) = (v25 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
  *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v25 >> 2) & 7;
  return v19;
}

