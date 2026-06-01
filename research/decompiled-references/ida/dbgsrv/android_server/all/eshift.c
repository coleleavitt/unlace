/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x00000000000B2B30

//----- (00000000000B2B30) ----------------------------------------------------
__int64 __fastcall eshift(__int64 a1, int a2, int8x16x2_t a3)
{
  int v3; // w9
  __int16 v4; // w8
  int8x16_t *v5; // x10
  int v6; // w12
  int v7; // w10
  unsigned __int16 v8; // w9
  int16x8_t v9; // q0
  int v10; // w8
  uint16x8_t v11; // q1
  unsigned __int16 v12; // w9
  int16x8_t v13; // q0
  int v14; // w8
  uint16x8_t v15; // q1
  unsigned __int32 v16; // w10
  int v18; // w11
  int16x8_t v19; // q3
  int v20; // w10
  int v22; // w9
  int16x8_t v23; // q3

  if ( !a2 )
    return 1;
  if ( (a2 & 0x80000000) == 0 )
  {
    if ( a2 >= 16 )
    {
      v7 = a2 + 16;
      do
      {
        v7 -= 16;
        *(_OWORD *)(a1 + 4) = *(_OWORD *)(a1 + 6);
        *(_WORD *)(a1 + 20) = 0;
      }
      while ( v7 > 31 );
      a2 &= 0xFu;
      if ( a2 < 8 )
      {
LABEL_5:
        if ( a2 < 1 )
          return 1;
LABEL_18:
        v12 = *(_WORD *)(a1 + 20);
        v13 = *(int16x8_t *)(a1 + 4);
        v14 = a2 + 1;
        do
        {
          v15.n128_u16[0] = vdupq_lane_s16((int16x4_t)v13.n128_u64[0], 1).n128_u16[0];
          *(unsigned __int32 *)((char *)v15.n128_u32 + 2) = v13.n128_u32[1];
          *(unsigned __int64 *)((char *)v15.n128_u64 + 6) = v13.n128_u64[1];
          v15.n128_u16[7] = v12;
          --v14;
          v12 *= 2;
          v13 = vorrq_s8(vshlq_n_s16(v13, 1u), vshrq_n_u16(v15, 0xFu));
        }
        while ( v14 > 1 );
        *(_WORD *)(a1 + 20) = v12;
        *(int16x8_t *)(a1 + 4) = v13;
        return 1;
      }
    }
    else if ( a2 < 8 )
    {
      goto LABEL_5;
    }
    v8 = *(_WORD *)(a1 + 20);
    v9 = *(int16x8_t *)(a1 + 4);
    v10 = a2 + 8;
    do
    {
      v11.n128_u16[0] = vdupq_lane_s16((int16x4_t)v9.n128_u64[0], 1).n128_u16[0];
      *(unsigned __int32 *)((char *)v11.n128_u32 + 2) = v9.n128_u32[1];
      *(unsigned __int64 *)((char *)v11.n128_u64 + 6) = v9.n128_u64[1];
      v11.n128_u16[7] = v8;
      v10 -= 8;
      v8 <<= 8;
      v9 = vorrq_s8(vshlq_n_s16(v9, 8u), vshrq_n_u16(v11, 8u));
    }
    while ( v10 > 15 );
    a2 &= 7u;
    *(_WORD *)(a1 + 20) = v8;
    *(int16x8_t *)(a1 + 4) = v9;
    if ( a2 < 1 )
      return 1;
    goto LABEL_18;
  }
  v3 = -a2;
  if ( -a2 < 16 )
  {
    v4 = 0;
    if ( v3 < 8 )
      goto LABEL_25;
    goto LABEL_22;
  }
  v4 = 0;
  v5 = (int8x16_t *)(a1 + 4);
  v6 = 16 - a2;
  do
  {
    a3.val[0] = *v5;
    v6 -= 16;
    v4 |= *(_WORD *)(a1 + 20);
    *(int8x16_t *)(a1 + 6) = *v5;
    *(_WORD *)(a1 + 4) = 0;
  }
  while ( v6 > 31 );
  v3 = -(char)a2 & 0xF;
  if ( (unsigned int)v3 >= 8 )
  {
LABEL_22:
    v16 = *(unsigned __int16 *)(a1 + 4);
    a3.val[1] = *(int8x16_t *)(a1 + 6);
    v18 = v3 + 8;
    do
    {
      a3.val[0].n128_u32[0] = v16;
      v19 = vqtbl2q_s8(a3, (int8x16_t)xmmword_11B9E0);
      a3.val[0] = vshrq_n_u16(a3.val[1], 8u);
      v18 -= 8;
      v16 = BYTE1(v16);
      v4 |= a3.val[1].n128_u8[14];
      a3.val[1] = vorrq_s8(a3.val[0], vshlq_n_s16(v19, 8u));
    }
    while ( v18 > 15 );
    v3 &= 7u;
    *(_WORD *)(a1 + 4) = v16;
    *(int8x16_t *)(a1 + 6) = a3.val[1];
  }
LABEL_25:
  if ( v3 >= 1 )
  {
    v20 = *(unsigned __int16 *)(a1 + 4);
    a3.val[1] = *(int8x16_t *)(a1 + 6);
    v22 = v3 + 1;
    do
    {
      a3.val[0].n128_u32[0] = v20;
      v23 = vqtbl2q_s8(a3, (int8x16_t)xmmword_11B9E0);
      a3.val[0] = vshrq_n_u16(a3.val[1], 1u);
      --v22;
      v20 = (unsigned __int16)v20 >> 1;
      v4 |= a3.val[1].n128_u8[14] & 1;
      a3.val[1] = vorrq_s8(a3.val[0], vshlq_n_s16(v23, 0xFu));
    }
    while ( v22 > 1 );
    *(_WORD *)(a1 + 4) = v20;
    *(int8x16_t *)(a1 + 6) = a3.val[1];
  }
  if ( v4 )
    return 2;
  return 1;
}
// 11B9E0: using guessed type __int128 xmmword_11B9E0;
