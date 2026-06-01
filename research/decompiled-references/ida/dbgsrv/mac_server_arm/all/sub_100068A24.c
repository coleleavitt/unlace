/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068A24
// Address: 0x0000000100068A24

//----- (0000000100068A24) ----------------------------------------------------
__int64 __fastcall sub_100068A24(__int64 a1, __int16 *a2)
{
  __int16 v2; // w9
  __int16 v3; // w10
  int v4; // w12
  int v5; // w11
  int v6; // w8
  int16x4_t v7; // d0
  int v8; // w13
  unsigned __int64 v9; // t2
  int v10; // w8
  __int64 v11; // x8
  int v12; // w5
  unsigned int v13; // w4
  unsigned int v14; // w13
  unsigned int v15; // w14
  unsigned int v16; // w16
  unsigned int v17; // w2
  unsigned int v18; // w3
  unsigned int v19; // w15
  unsigned int v20; // w17
  int16x4_t v21; // d0
  int v22; // w7
  __int16 v23; // w19
  unsigned __int64 v24; // t2
  unsigned int v25; // w6
  __int16 v26; // w7
  __int16 v27; // w19
  unsigned int v28; // w12
  unsigned __int64 v29; // t2

  v2 = *a2;
  v3 = a2[1];
  v4 = *(unsigned __int16 *)(a1 + 18);
  if ( *(_WORD *)(a1 + 18) )
  {
    v5 = 112;
  }
  else
  {
    *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
    *(_WORD *)(a1 + 4) = 0;
    v4 = *(unsigned __int16 *)(a1 + 18);
    if ( *(_WORD *)(a1 + 18) )
    {
      v5 = 96;
    }
    else
    {
      *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
      v4 = *(unsigned __int16 *)(a1 + 18);
      if ( *(_WORD *)(a1 + 18) )
      {
        v5 = 80;
      }
      else
      {
        *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
        v4 = *(unsigned __int16 *)(a1 + 18);
        if ( *(_WORD *)(a1 + 18) )
        {
          v5 = 64;
        }
        else
        {
          *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
          v4 = *(unsigned __int16 *)(a1 + 18);
          if ( *(_WORD *)(a1 + 18) )
          {
            v5 = 48;
          }
          else
          {
            *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
            v4 = *(unsigned __int16 *)(a1 + 18);
            if ( *(_WORD *)(a1 + 18) )
            {
              v5 = 32;
            }
            else
            {
              *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
              v4 = *(unsigned __int16 *)(a1 + 18);
              if ( !*(_WORD *)(a1 + 18) )
              {
                *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
                *(_QWORD *)a2 = 0;
                *((_QWORD *)a2 + 1) = 0;
                *(_QWORD *)(a2 + 7) = 0;
                return 0;
              }
              v5 = 16;
            }
          }
        }
      }
    }
  }
  if ( !(_BYTE)v4 )
  {
    v6 = *(unsigned __int16 *)(a1 + 12);
    v7 = *(int16x4_t *)(a1 + 4);
    *(_WORD *)(a1 + 4) = v7.u8[1];
    *(uint16x4_t *)(a1 + 6) = vsra_n_u16((uint16x4_t)vshl_n_s16(v7, 8u), vshr_n_u16(*(uint16x4_t *)(a1 + 6), 1u), 7u);
    v8 = *(unsigned __int16 *)(a1 + 14);
    HIDWORD(v9) = v6;
    LODWORD(v9) = v8 << 16;
    *(_WORD *)(a1 + 14) = v9 >> 24;
    v10 = *(unsigned __int16 *)(a1 + 16);
    HIDWORD(v9) = v8;
    LODWORD(v9) = v10 << 16;
    *(_WORD *)(a1 + 16) = v9 >> 24;
    HIDWORD(v9) = v10;
    LODWORD(v9) = v4 << 16;
    v4 = v9 >> 24;
    *(_WORD *)(a1 + 18) = v9 >> 24;
    *(_WORD *)(a1 + 20) = *(unsigned __int8 *)(a1 + 21);
    v5 -= 8;
  }
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  do
  {
    if ( (v4 & 1) != 0 )
    {
      v14 = (unsigned __int16)a2[10] + (unsigned __int16)v14;
      v15 = (unsigned __int16)a2[9] + (unsigned __int16)v15 + HIWORD(v14);
      v16 = (unsigned __int16)a2[8] + (unsigned __int16)v16 + HIWORD(v15);
      v17 = (unsigned __int16)a2[7] + (unsigned __int16)v17 + HIWORD(v16);
      v18 = (unsigned __int16)a2[6] + (unsigned __int16)v18 + HIWORD(v17);
      v19 = (unsigned __int16)a2[5] + (unsigned __int16)v19 + HIWORD(v18);
      v20 = (unsigned __int16)a2[4] + (unsigned __int16)v20 + HIWORD(v19);
      v13 = (unsigned __int16)a2[3] + (unsigned __int16)v13 + HIWORD(v20);
      v12 += (unsigned __int16)a2[2] + HIWORD(v13);
    }
    v21 = *(int16x4_t *)(a1 + 4);
    v22 = *(unsigned __int16 *)(a1 + 14);
    HIDWORD(v24) = *(unsigned __int16 *)(a1 + 12);
    LODWORD(v24) = v22 << 16;
    v23 = v24 >> 17;
    *(_WORD *)(a1 + 4) = (unsigned __int16)v21.i16[0] >> 1;
    v25 = *(unsigned __int16 *)(a1 + 16);
    HIDWORD(v24) = v22;
    LODWORD(v24) = v25 << 16;
    v26 = v24 >> 17;
    *(_WORD *)(a1 + 14) = v23;
    HIDWORD(v24) = v4;
    LODWORD(v24) = *(unsigned __int16 *)(a1 + 20) << 16;
    v27 = v24 >> 17;
    v28 = v4 << 16;
    if ( (v14 & 1) != 0 )
      v11 = 1;
    else
      v11 = (unsigned int)v11;
    *(uint16x4_t *)(a1 + 6) = vsra_n_u16((uint16x4_t)vshl_n_s16(v21, 0xFu), *(uint16x4_t *)(a1 + 6), 1u);
    v4 = __PAIR64__(v25, v28) >> 17;
    *(_WORD *)(a1 + 16) = v26;
    *(_WORD *)(a1 + 18) = v4;
    *(_WORD *)(a1 + 20) = v27;
    HIDWORD(v29) = v15;
    LODWORD(v29) = v14 << 16;
    v14 = v29 >> 17;
    HIDWORD(v29) = v16;
    LODWORD(v29) = v15 << 16;
    v15 = v29 >> 17;
    HIDWORD(v29) = v17;
    LODWORD(v29) = v16 << 16;
    v16 = v29 >> 17;
    HIDWORD(v29) = v18;
    LODWORD(v29) = v17 << 16;
    v17 = v29 >> 17;
    HIDWORD(v29) = v19;
    LODWORD(v29) = v18 << 16;
    v18 = v29 >> 17;
    HIDWORD(v29) = v20;
    LODWORD(v29) = v19 << 16;
    v19 = v29 >> 17;
    HIDWORD(v29) = v13;
    LODWORD(v29) = v20 << 16;
    v20 = v29 >> 17;
    HIDWORD(v29) = v12;
    LODWORD(v29) = v13 << 16;
    v13 = v29 >> 17;
    v12 = (unsigned __int16)v12 >> 1;
    --v5;
  }
  while ( v5 );
  *a2 = v2;
  a2[1] = v3;
  a2[2] = v12;
  a2[3] = v13;
  a2[4] = v20;
  a2[5] = v19;
  a2[6] = v18;
  a2[7] = v17;
  a2[8] = v16;
  a2[9] = v15;
  a2[10] = v14;
  return v11;
}
