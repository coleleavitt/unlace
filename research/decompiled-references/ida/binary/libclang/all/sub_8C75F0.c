__int64 __fastcall sub_8C75F0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        const void *a5,
        __int64 a6,
        unsigned int a7,
        int a8)
{
  __m128i v8; // xmm0
  __int64 v10; // rsi
  unsigned int v12; // r12d
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // xmm0_8
  int v17; // edx
  unsigned __int8 v18; // al
  unsigned __int64 v20; // [rsp+0h] [rbp-40h]

  v8 = _mm_cvtsi32_si128(a3);
  v10 = 8 * a6 + 24;
  v12 = a6;
  v14 = a1[274];
  a1[284] += v10;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= (unsigned __int64)(v10 + v15) && v14 )
  {
    a1[274] = v10 + v15;
  }
  else
  {
    LODWORD(v20) = _mm_cvtsi128_si32(v8);
    v8 = _mm_cvtsi32_si128(v20);
    v15 = sub_8C1090((__int64)(a1 + 274), v10, 3);
  }
  v16 = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(a7)).m128i_u64[0];
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 7;
  if ( byte_4AD234C )
  {
    v20 = v16;
    sub_AC4570(7);
  }
  v17 = *(_DWORD *)v15;
  *(_QWORD *)(v15 + 8) = a2;
  *(_DWORD *)(v15 + 4) = v12;
  *(_QWORD *)(v15 + 16) = v16;
  *(_DWORD *)v15 = v17 & 0xF00001FF | (a8 << 27) & 0xFFFFE00 | (a4 << 19) & 0x7F80000;
  if ( v12 )
    memmove((void *)(v15 + 24), a5, 8LL * v12);
  v18 = sub_76D300(v15);
  *(_BYTE *)(v15 + 1) = (v18 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v18 >> 2) & 7;
  return v15;
}

