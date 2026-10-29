unsigned __int64 __fastcall sub_81CBA0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _QWORD *src,
        __int64 a8,
        _QWORD *a9,
        __int64 a10)
{
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // xmm0_8
  __int16 v19; // ax
  unsigned __int8 v20; // al
  _QWORD *v21; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-50h]
  _QWORD *v25; // [rsp+8h] [rbp-48h]
  void *v26; // [rsp+10h] [rbp-40h]

  v11 = _mm_cvtsi32_si128(a4);
  v12 = _mm_cvtsi32_si128(a5);
  v14 = a1[274];
  v15 = src;
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = 16 * a8 + 40;
  a1[284] += v17;
  if ( a1[275] >= v17 + v16 && v14 )
  {
    a1[274] = v17 + v16;
  }
  else
  {
    v26 = src;
    LODWORD(v25) = _mm_cvtsi128_si32(v12);
    LODWORD(v24) = _mm_cvtsi128_si32(v11);
    v23 = sub_804090((__int64)(a1 + 274), v17, 3);
    v15 = src;
    v12 = _mm_cvtsi32_si128((unsigned int)v25);
    v11 = _mm_cvtsi32_si128(v24);
    v16 = v23;
  }
  v18 = _mm_unpacklo_epi32(v11, v12).m128i_u64[0];
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x2D;
  if ( byte_4AD234C )
  {
    v25 = v15;
    v24 = v18;
    sub_AC4570(45);
    v15 = v25;
  }
  v19 = *(_WORD *)(v16 + 1);
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 24) = a8;
  *(_QWORD *)(v16 + 16) = v18;
  *(_WORD *)(v16 + 1) = v19 & 0xF801 | 2;
  *(_QWORD *)(v16 + 8LL * (unsigned int)a8 + 32) = a3;
  if ( 8 * a8 <= 8 )
  {
    if ( 8 * a8 == 8 )
      *(_QWORD *)(v16 + 32) = *v15;
  }
  else
  {
    memmove((void *)(v16 + 32), v15, 8 * a8);
  }
  v20 = sub_76BE00(v16);
  *(_BYTE *)(v16 + 1) = (v20 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v20 >> 2) & 7;
  v21 = (_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(v16 + 24) + 1) + 32);
  if ( 8 * a10 <= 8 )
  {
    if ( 8 * a10 == 8 )
      *v21 = *a9;
  }
  else
  {
    memmove(v21, a9, 8 * a10);
  }
  return v16;
}

