unsigned __int64 __fastcall sub_1D3AE30(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 *v5; // r13
  __int64 *v6; // rdx
  char v7; // bp
  __int64 v9; // r15
  __int64 v10; // r14
  __int16 v11; // r9
  char v12; // cl
  __int16 v13; // si
  int v14; // eax
  __int16 v15; // si
  __int16 v16; // ax
  __int16 v17; // r9
  __int16 v18; // ax
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21[8]; // [rsp+0h] [rbp-138h] BYREF
  __m128 v22; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v23; // [rsp+98h] [rbp-A0h] BYREF
  __m128i v24; // [rsp+A8h] [rbp-90h] BYREF
  __m128i v25[8]; // [rsp+B8h] [rbp-80h] BYREF

  result = a2;
  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = a4;
    v9 = *v6;
    if ( *(_BYTE *)(*v6 + 16) != 26 )
      v9 = sub_F63050(*v6, a2, v6, a4);
    v10 = *v5;
    if ( *(_BYTE *)(*v5 + 16) != 26 )
      v10 = sub_F63050(*v5, a2, v6, a4);
    sub_A5E110(v21, v10);
    v11 = v21[0].m128_i16[0];
    v12 = 0;
    v13 = *(_WORD *)(v9 + 20) >> 2;
    v14 = v13 & 0x3F;
    if ( v14 != (v21[0].m128_i8[0] & 0x3F) )
    {
      v12 = 1;
      v21[0].m128_i16[0] = v21[0].m128_i16[0] & 0xFFC0 | v14;
      v11 = v11 & 0xFFC0 | v14;
    }
    v15 = v13 & 0x40;
    if ( ((v11 & 0x40) != 0) == (v15 != 0) )
    {
      if ( !v7 || (*(_BYTE *)(v9 + 19) & 0x1E) == 0 && (*(_BYTE *)(v10 + 19) & 0x1E) == 0 )
      {
        if ( !v12 )
          return a2;
        return sub_A73610(
                 *(_QWORD *)(a1 + 248),
                 *(_QWORD *)(v10 + 24),
                 (__int64 *)(v10 + 48),
                 *(unsigned __int16 *)(v10 + 22),
                 (const __m128i *)v21,
                 0);
      }
    }
    else
    {
      v16 = v11;
      v17 = v11 & 0xFFBF;
      v18 = v16 | 0x40;
      if ( v15 )
        v17 = v18;
      v21[0].m128_i16[0] = v17;
      if ( !v7 || (*(_BYTE *)(v9 + 19) & 0x1E) == 0 && (*(_BYTE *)(v10 + 19) & 0x1E) == 0 )
        return sub_A73610(
                 *(_QWORD *)(a1 + 248),
                 *(_QWORD *)(v10 + 24),
                 (__int64 *)(v10 + 48),
                 *(unsigned __int16 *)(v10 + 22),
                 (const __m128i *)v21,
                 0);
    }
    sub_A5E110(&v22, v9);
    v19 = (__m128)_mm_loadu_si128(&v24);
    v20 = (__m128)_mm_loadu_si128(v25);
    *(__m128i *)((char *)&v21[1] + 8) = _mm_loadu_si128(&v23);
    *(__m128 *)((char *)&v21[2] + 8) = v19;
    *(__m128 *)((char *)&v21[3] + 8) = v20;
    return sub_A73610(
             *(_QWORD *)(a1 + 248),
             *(_QWORD *)(v10 + 24),
             (__int64 *)(v10 + 48),
             *(unsigned __int16 *)(v10 + 22),
             (const __m128i *)v21,
             0);
  }
  return result;
}
