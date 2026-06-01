unsigned __int64 __fastcall sub_8C5CC0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // r14
  unsigned __int64 v18; // xmm0_8
  __int64 v19; // rax
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-48h]
  int v28; // [rsp+Ch] [rbp-3Ch]

  v9 = 8 * a6 + 32;
  v10 = _mm_cvtsi32_si128(a4);
  v14 = a1[274];
  v15 = a8;
  a1[284] += v9;
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + v16 && v14 )
  {
    a1[274] = v9 + v16;
  }
  else
  {
    v28 = a8;
    LODWORD(v27) = _mm_cvtsi128_si32(v10);
    v26 = sub_8C1090((__int64)(a1 + 274), v9, 3);
    v15 = a8;
    v10 = _mm_cvtsi32_si128(v27);
    v16 = v26;
  }
  v17 = 1;
  v18 = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(a7)).m128i_u64[0];
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 42 )
    v17 = 2 * (*(_BYTE *)(v19 + 16) == 43);
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x60;
  if ( byte_4AD234C )
  {
    v28 = v15;
    v27 = v18;
    sub_AC4570(96);
    LOBYTE(v15) = v28;
  }
  v20 = *(_WORD *)(v16 + 1);
  v21 = 4LL * (unsigned __int8)v15;
  *(_QWORD *)(v16 + 8) = a2;
  v22 = 0;
  *(_DWORD *)(v16 + 4) = a6;
  *(_QWORD *)(v16 + 16) = v21 | a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v16 + 1) = (2 * v17) | v20 & 0xF801;
  v23 = 0;
  *(_QWORD *)(v16 + 24) = v18;
  if ( a6 )
  {
    do
    {
      a4 = *(_QWORD *)(a5 + 8 * v23);
      *(_QWORD *)(v16 + 8 * v23 + 32) = a4;
      v23 = (unsigned int)(v22 + 1);
      v22 = v23;
    }
    while ( v23 != a6 );
  }
  v24 = sub_76D080(v16, v9, v22, a4, v21, a6);
  *(_BYTE *)(v16 + 1) = (v24 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v24 >> 2) & 7;
  return v16;
}

