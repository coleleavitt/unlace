/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x0000000100067810

//----- (0000000100067810) ----------------------------------------------------
__int64 __fastcall eshift(__int64 a1, unsigned int a2)
{
  __int16 v2; // w8
  int16x8_t v3; // q0
  uint16x8_t v4; // q1
  __int16 v5; // w9
  int16x8_t v6; // q0
  unsigned int v7; // w8
  uint16x8_t v8; // q1
  int v10; // w10
  __int16 v11; // w8
  int v12; // w9
  bool v13; // cc
  int v14; // w10
  int v15; // w17
  int v16; // w16
  int v17; // w1
  int v18; // w14
  int v19; // w11
  int v20; // w12
  int v21; // w13
  int v22; // w15
  __int16 v23; // w4
  unsigned __int64 v24; // t2
  unsigned int v25; // w3
  int v26; // w10
  int v27; // w15
  int v28; // w14
  int v29; // w1
  int v30; // w17
  int v31; // w12
  int v32; // w11
  int v33; // w13
  unsigned int v34; // w9
  int v35; // w16
  __int16 v36; // w4
  unsigned __int64 v37; // t2

  if ( !a2 )
    return 1;
  if ( (a2 & 0x80000000) != 0 )
  {
    v10 = -a2;
    if ( (signed int)-a2 < 16 )
    {
      v11 = 0;
      v12 = -a2;
      if ( v10 < 8 )
        goto LABEL_17;
    }
    else
    {
      v11 = 0;
      do
      {
        v11 |= *(_WORD *)(a1 + 20);
        *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
        *(_WORD *)(a1 + 4) = 0;
        v12 = v10 - 16;
        v13 = (unsigned int)v10 > 0x1F;
        v10 -= 16;
      }
      while ( v13 );
      if ( v12 < 8 )
      {
LABEL_17:
        if ( v12 < 1 )
          goto LABEL_18;
        goto LABEL_24;
      }
    }
    v14 = *(unsigned __int16 *)(a1 + 20);
    v15 = *(unsigned __int16 *)(a1 + 4);
    v16 = *(unsigned __int16 *)(a1 + 6);
    v17 = *(unsigned __int16 *)(a1 + 8);
    v18 = *(unsigned __int16 *)(a1 + 10);
    v19 = *(unsigned __int16 *)(a1 + 12);
    v20 = *(unsigned __int16 *)(a1 + 14);
    v21 = *(unsigned __int16 *)(a1 + 16);
    v22 = *(unsigned __int16 *)(a1 + 18);
    do
    {
      v23 = (unsigned __int8)v14;
      HIDWORD(v24) = v22;
      LODWORD(v24) = v14 << 16;
      v14 = v24 >> 24;
      v25 = v12;
      HIDWORD(v24) = v21;
      LODWORD(v24) = v22 << 16;
      v22 = v24 >> 24;
      HIDWORD(v24) = v20;
      LODWORD(v24) = v21 << 16;
      v21 = v24 >> 24;
      v11 |= v23;
      HIDWORD(v24) = v19;
      LODWORD(v24) = v20 << 16;
      v20 = v24 >> 24;
      HIDWORD(v24) = v18;
      LODWORD(v24) = v19 << 16;
      v19 = v24 >> 24;
      HIDWORD(v24) = v17;
      LODWORD(v24) = v18 << 16;
      v18 = v24 >> 24;
      HIDWORD(v24) = v16;
      LODWORD(v24) = v17 << 16;
      v17 = v24 >> 24;
      v12 -= 8;
      HIDWORD(v24) = v15;
      LODWORD(v24) = v16 << 16;
      v16 = v24 >> 24;
      v15 = BYTE1(v15);
    }
    while ( v25 > 0xF );
    *(_WORD *)(a1 + 20) = v14;
    *(_WORD *)(a1 + 4) = v15;
    *(_WORD *)(a1 + 6) = v16;
    *(_WORD *)(a1 + 8) = v17;
    *(_WORD *)(a1 + 10) = v18;
    *(_WORD *)(a1 + 12) = v19;
    *(_WORD *)(a1 + 14) = v20;
    *(_WORD *)(a1 + 16) = v21;
    *(_WORD *)(a1 + 18) = v22;
    if ( v12 < 1 )
    {
LABEL_18:
      if ( v11 )
        return 2;
      return 1;
    }
LABEL_24:
    v26 = *(unsigned __int16 *)(a1 + 20);
    v27 = *(unsigned __int16 *)(a1 + 4);
    v28 = *(unsigned __int16 *)(a1 + 6);
    v29 = *(unsigned __int16 *)(a1 + 8);
    v30 = *(unsigned __int16 *)(a1 + 10);
    v31 = *(unsigned __int16 *)(a1 + 12);
    v32 = *(unsigned __int16 *)(a1 + 14);
    v33 = *(unsigned __int16 *)(a1 + 16);
    v34 = v12 + 1;
    v35 = *(unsigned __int16 *)(a1 + 18);
    do
    {
      v36 = v26 & 1;
      HIDWORD(v37) = v35;
      LODWORD(v37) = v26 << 16;
      v26 = v37 >> 17;
      v11 |= v36;
      HIDWORD(v37) = v33;
      LODWORD(v37) = v35 << 16;
      v35 = v37 >> 17;
      HIDWORD(v37) = v32;
      LODWORD(v37) = v33 << 16;
      v33 = v37 >> 17;
      HIDWORD(v37) = v31;
      LODWORD(v37) = v32 << 16;
      v32 = v37 >> 17;
      HIDWORD(v37) = v30;
      LODWORD(v37) = v31 << 16;
      v31 = v37 >> 17;
      HIDWORD(v37) = v29;
      LODWORD(v37) = v30 << 16;
      v30 = v37 >> 17;
      HIDWORD(v37) = v28;
      LODWORD(v37) = v29 << 16;
      v29 = v37 >> 17;
      --v34;
      HIDWORD(v37) = v27;
      LODWORD(v37) = v28 << 16;
      v28 = v37 >> 17;
      v27 = (unsigned __int16)v27 >> 1;
    }
    while ( v34 > 1 );
    *(_WORD *)(a1 + 20) = v26;
    *(_WORD *)(a1 + 4) = v27;
    *(_WORD *)(a1 + 6) = v28;
    *(_WORD *)(a1 + 8) = v29;
    *(_WORD *)(a1 + 10) = v30;
    *(_WORD *)(a1 + 12) = v31;
    *(_WORD *)(a1 + 14) = v32;
    *(_WORD *)(a1 + 16) = v33;
    *(_WORD *)(a1 + 18) = v35;
    if ( v11 )
      return 2;
    return 1;
  }
  if ( a2 >= 0x10 )
  {
    do
    {
      *(_OWORD *)(a1 + 4) = *(_OWORD *)(a1 + 6);
      *(_WORD *)(a1 + 20) = 0;
      a2 -= 16;
    }
    while ( a2 > 0xF );
  }
  if ( a2 >= 8 )
  {
    v2 = *(_WORD *)(a1 + 20);
    v3 = *(int16x8_t *)(a1 + 4);
    do
    {
      v4 = (uint16x8_t)vextq_s8((int8x16_t)v3, (int8x16_t)v3, 2u);
      v4.i16[7] = v2;
      v2 <<= 8;
      v3 = (int16x8_t)vsraq_n_u16((uint16x8_t)vshlq_n_s16(v3, 8u), vshrq_n_u16(v4, 1u), 7u);
      a2 -= 8;
    }
    while ( a2 > 7 );
    *(_WORD *)(a1 + 20) = v2;
    *(int16x8_t *)(a1 + 4) = v3;
  }
  if ( !a2 )
    return 1;
  v5 = *(_WORD *)(a1 + 20);
  v6 = *(int16x8_t *)(a1 + 4);
  v7 = a2 + 1;
  do
  {
    v8 = (uint16x8_t)vextq_s8((int8x16_t)v6, (int8x16_t)v6, 2u);
    v8.i16[7] = v5;
    v5 *= 2;
    v6 = (int16x8_t)vsraq_n_u16((uint16x8_t)vaddq_s16(v6, v6), vshrq_n_u16(v8, 1u), 0xEu);
    --v7;
  }
  while ( v7 > 1 );
  *(_WORD *)(a1 + 20) = v5;
  *(int16x8_t *)(a1 + 4) = v6;
  return 1;
}
