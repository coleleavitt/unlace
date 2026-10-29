unsigned __int64 __fastcall sub_80B7C0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  __m128i v10; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // xmm0_8
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v10 = _mm_cvtsi32_si128(a3);
  v13 = 16 * a6 + 8 * a8 + 40;
  v14 = a1[274];
  a1[284] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v13 + v15 && v14 )
  {
    a1[274] = v13 + v15;
  }
  else
  {
    v30 = a4;
    LODWORD(v29) = _mm_cvtsi128_si32(v10);
    v28 = sub_804090((__int64)(a1 + 274), v13, 3);
    a4 = v30;
    v10 = _mm_cvtsi32_si128(v29);
    v15 = v28;
  }
  v16 = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(a9)).m128i_u64[0];
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x1C;
  if ( byte_4AD234C )
  {
    v30 = a4;
    v29 = v16;
    sub_AC4570(28);
    a4 = v30;
  }
  *(_WORD *)(v15 + 1) &= 0xF801u;
  *(_QWORD *)(v15 + 8) = a2;
  *(_QWORD *)(v15 + 24) = a4;
  *(_DWORD *)(v15 + 32) = a6;
  *(_DWORD *)(v15 + 36) = a8;
  *(_QWORD *)(v15 + 16) = v16;
  if ( a6 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      v19 = 16 * v18;
      v20 = (__int64 *)(a5 + v19);
      v21 = (_QWORD *)(v15 + v19 + 40);
      v22 = v20[1];
      v23 = *v20;
      v21[1] = v22;
      *v21 = v23;
      v18 = (unsigned int)++v17;
    }
    while ( v17 != a6 );
  }
  if ( a8 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      *(_QWORD *)(v15 + 16LL * *(unsigned int *)(v15 + 32) + 8 * v25 + 40) = *(_QWORD *)(a7 + 8 * v25);
      v25 = (unsigned int)++v24;
    }
    while ( v24 != a8 );
  }
  v26 = sub_76C440(v15);
  *(_BYTE *)(v15 + 1) = (v26 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v26 >> 2) & 7;
  return v15;
}

