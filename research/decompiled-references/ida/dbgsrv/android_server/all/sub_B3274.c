/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3274
// Address: 0x00000000000B3274

//----- (00000000000B3274) ----------------------------------------------------
__int64 __fastcall sub_B3274(__int64 a1, int8x16x2_t a2)
{
  unsigned __int32 v2; // w9
  unsigned int v3; // w8
  int v4; // w9
  _OWORD *v5; // x11
  unsigned int v6; // w8
  __int16 v7; // w10
  __int16 v8; // w12
  unsigned __int16 v9; // w13
  int16x4_t v10; // d0
  int v11; // w11
  uint16x4_t v12; // d1
  unsigned __int8 v13; // x14^1
  int v14; // w16
  unsigned __int8 v15; // w11
  __int16 v16; // w10
  int v17; // w11
  unsigned __int16 v18; // w12
  int16x4_t v19; // d0
  __int16 v20; // w13
  uint16x4_t v21; // d1
  int v22; // w14
  bool v23; // w11
  int16x8_t v26; // q3
  int v27; // w10

  v2 = *(unsigned __int16 *)(a1 + 4);
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( v2 < 0x100 )
    {
      v3 = 0;
    }
    else
    {
      a2.val[1] = *(int8x16_t *)(a1 + 6);
      v3 = -8;
      a2.val[0].n128_u32[0] = *(unsigned __int16 *)(a1 + 4);
      v2 >>= 8;
      a2.val[0] = vorrq_s8(vshrq_n_u16(a2.val[1], 8u), vshlq_n_s16(vqtbl2q_s8(a2, (int8x16_t)xmmword_11B9E0), 8u));
      *(_WORD *)(a1 + 4) = v2;
      *(int8x16_t *)(a1 + 6) = a2.val[0];
    }
    a2.val[1] = *(int8x16_t *)(a1 + 6);
    do
    {
      a2.val[0].n128_u32[0] = v2;
      v26 = vqtbl2q_s8(a2, (int8x16_t)xmmword_11B9E0);
      v27 = (unsigned __int16)v2 >> 1;
      a2.val[0] = vshrq_n_u16(a2.val[1], 1u);
      a2.val[1] = vorrq_s8(a2.val[0], vshlq_n_s16(v26, 0xFu));
      --v3;
      v2 = v27;
    }
    while ( v27 );
    *(_WORD *)(a1 + 4) = 0;
    *(int8x16_t *)(a1 + 6) = a2.val[1];
    return v3;
  }
  else
  {
    v5 = (_OWORD *)(a1 + 6);
    v4 = *(__int16 *)(a1 + 6);
    if ( v4 < 0 )
    {
      return 0;
    }
    else
    {
      v6 = 0;
      if ( *(_WORD *)(a1 + 6) )
      {
LABEL_8:
        if ( (unsigned __int16)v4 <= 0xFFu )
        {
          v7 = *(_WORD *)(a1 + 20);
          v8 = *(_WORD *)(a1 + 18);
          v9 = *(_WORD *)(a1 + 16);
          v10.n64_u64[0] = *(unsigned __int64 *)(a1 + 8);
          v11 = *(unsigned __int16 *)(a1 + 4);
          do
          {
            v12.n64_u16[0] = vdupq_lane_s16(v10, 1).n128_u16[0];
            v12.n64_u16[1] = v10.n64_u16[2];
            v13 = HIBYTE(v8);
            v14 = v11;
            v15 = BYTE1(v4);
            v12.n64_u16[2] = v10.n64_u16[3];
            LOWORD(v4) = ((_WORD)v4 << 8) | v10.n64_u8[1];
            v12.n64_u16[3] = v9;
            v8 = HIBYTE(v7) | (unsigned __int16)(v8 << 8);
            v7 <<= 8;
            v9 = v13 | (unsigned __int16)(v9 << 8);
            v11 = v15 | (v14 << 8);
            v10.n64_u64[0] = vorr_s8(vshl_n_s16(v10, 8u), vshr_n_u16(v12, 8u)).n64_u64[0];
            v6 += 8;
          }
          while ( (unsigned __int16)v4 < 0x100u );
          *(_WORD *)(a1 + 20) = v7;
          *(_WORD *)(a1 + 18) = v8;
          *(_WORD *)(a1 + 16) = v9;
          *(int16x4_t *)(a1 + 8) = v10;
          *(_WORD *)(a1 + 6) = v4;
          *(_WORD *)(a1 + 4) = v11;
        }
        if ( ((__int16)v4 & 0x80000000) == 0 )
        {
          v16 = *(_WORD *)(a1 + 20);
          v17 = *(unsigned __int16 *)(a1 + 18);
          v18 = *(_WORD *)(a1 + 16);
          v19.n64_u64[0] = *(unsigned __int64 *)(a1 + 8);
          v20 = *(_WORD *)(a1 + 4);
          do
          {
            v21.n64_u16[0] = vdupq_lane_s16(v19, 1).n128_u16[0];
            *(unsigned __int32 *)((char *)v21.n64_u32 + 2) = v19.n64_u32[1];
            v22 = v17;
            v21.n64_u16[3] = v18;
            v23 = v16 < 0;
            v16 *= 2;
            v17 = v23 | (2 * v22);
            v18 = ((v22 & 0x8000) != 0) | (unsigned __int16)(2 * v18);
            v20 = ((v4 & 0x8000) != 0) | (unsigned __int16)(2 * v20);
            v4 = (__int16)((2 * v4) | (v19.n64_u16[0] >> 15));
            v19.n64_u64[0] = vorr_s8(vshl_n_s16(v19, 1u), vshr_n_u16(v21, 0xFu)).n64_u64[0];
            ++v6;
          }
          while ( (v4 & 0x80000000) == 0 );
          *(_WORD *)(a1 + 20) = v16;
          *(_WORD *)(a1 + 18) = v17;
          *(_WORD *)(a1 + 16) = v18;
          *(int16x4_t *)(a1 + 8) = v19;
          *(_WORD *)(a1 + 6) = v4;
          *(_WORD *)(a1 + 4) = v20;
        }
      }
      else
      {
        while ( 1 )
        {
          v6 += 16;
          *(_OWORD *)(a1 + 4) = *v5;
          *(_WORD *)(a1 + 20) = 0;
          if ( v6 > 0x70 )
            break;
          LOWORD(v4) = *(_WORD *)v5;
          if ( *(_WORD *)v5 )
            goto LABEL_8;
        }
      }
      return v6;
    }
  }
}
// 11B9E0: using guessed type __int128 xmmword_11B9E0;
