unsigned __int64 __fastcall sub_8C2910(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6)
{
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  unsigned int v9; // r13d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __m128i v25; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v26[41]; // [rsp+2Fh] [rbp-29h] BYREF

  v6 = (__m128i)a2;
  v7 = (__m128i)a3;
  v9 = a4;
  if ( a6 )
  {
    v11 = 16;
    v12 = 32LL * *(unsigned int *)(a6 + 8) + 56;
  }
  else
  {
    v12 = 56;
    v11 = 16LL * ((_DWORD)a4 != 0);
  }
  v13 = v12 + v11;
  v14 = a1[274];
  a1[284] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = v13 + v15;
  if ( a1[275] >= v13 + v15 && v14 )
  {
    a1[274] = v16;
  }
  else
  {
    v25.m128i_i64[0] = v7.m128i_i64[0];
    v24.m128i_i64[0] = v6.m128i_i64[0];
    v23 = sub_8C1090((__int64)(a1 + 274), v13, 3);
    v7 = _mm_loadl_epi64(&v25);
    v6 = _mm_loadl_epi64(&v24);
    v15 = v23;
  }
  v17 = a1[2364];
  v18 = _mm_unpacklo_epi64(v6, v7);
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x46;
  if ( byte_4AD234C )
  {
    v24 = v18;
    sub_AC4570(70);
    v18 = _mm_load_si128(&v24);
  }
  v19 = *(_WORD *)(v15 + 1);
  *(_QWORD *)(v15 + 8) = v17;
  *(__m128i *)(v15 + 16) = v18;
  *(_WORD *)(v15 + 1) = v19 & 0xF801 | 2;
  v20 = a5[1].m128i_i64[0];
  *(__m128i *)(v15 + 32) = _mm_loadu_si128(a5);
  *(_QWORD *)(v15 + 48) = v20;
  if ( a6 )
  {
    *(_BYTE *)(v15 + 2) |= 8u;
    v13 = v9;
    v26[0] = 0;
    sub_B00050(v15 + 56, v9, a6, v15 + 72, v26);
  }
  else if ( v9 )
  {
    *(_BYTE *)(v15 + 2) |= 8u;
    v13 = v9;
    sub_B00030(v15 + 56, v9);
  }
  else
  {
    *(_BYTE *)(v15 + 2) &= ~8u;
  }
  v21 = sub_76CDC0((const __m128i *)v15, v13, v16, a4, (__int64)a5, a6);
  *(_BYTE *)(v15 + 1) = (v21 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v21 >> 2) & 7;
  return v15;
}

