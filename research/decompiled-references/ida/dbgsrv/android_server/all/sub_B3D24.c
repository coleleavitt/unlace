/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3D24
// Address: 0x00000000000B3D24

//----- (00000000000B3D24) ----------------------------------------------------
__int64 __fastcall sub_B3D24(__int64 a1, __int64 a2, double a3, int8x8_t a4)
{
  unsigned int v4; // w10
  int v5; // w11
  int8x8_t v6; // d0
  __int16 v7; // w12
  unsigned __int16 v8; // w13
  unsigned __int8 v9; // w14
  __int16 v10; // w14
  int v11; // w12
  unsigned int v12; // w13
  unsigned int v13; // w14
  unsigned int v14; // w15
  unsigned int v15; // w17
  unsigned int v16; // w2
  unsigned int v17; // w16
  unsigned int v18; // w18
  unsigned int v19; // w3
  unsigned int v20; // w8
  int8x8_t v21; // d0
  unsigned __int16 v22; // w6
  unsigned int v23; // w7
  unsigned __int16 v24; // w4
  __int16 v25; // w5
  __int16 v26; // w3
  unsigned __int16 v27; // w6
  unsigned __int16 v28; // w18
  unsigned __int16 v29; // w16
  unsigned __int16 v30; // w2
  unsigned __int16 v31; // w17
  unsigned __int16 v32; // w15
  __int16 v33; // w14
  int v34; // w5
  _OWORD *v36; // x11
  _OWORD *v37; // x12
  _BYTE v38[22]; // [xsp+0h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)v38 = *(_DWORD *)a2;
  v4 = *(unsigned __int16 *)(a1 + 18);
  if ( *(_WORD *)(a1 + 18) )
  {
    v5 = 112;
    if ( (unsigned __int8)*(_WORD *)(a1 + 18) )
      goto LABEL_4;
    goto LABEL_3;
  }
  v36 = (_OWORD *)(a1 + 4);
  v37 = (_OWORD *)(a1 + 6);
  *(_OWORD *)(a1 + 6) = *(_OWORD *)(a1 + 4);
  v4 = *(unsigned __int16 *)(a1 + 18);
  *(_WORD *)(a1 + 4) = 0;
  if ( v4 )
  {
    v5 = 96;
    if ( !(_BYTE)v4 )
    {
LABEL_3:
      v6.n64_u64[0] = *(unsigned __int64 *)(a1 + 6);
      v7 = *(_WORD *)(a1 + 14);
      v8 = *(_WORD *)(a1 + 16);
      v9 = *(_BYTE *)(a1 + 21);
      a4.n64_u32[0] = *(unsigned __int16 *)(a1 + 4);
      *(_WORD *)(a1 + 4) >>= 8;
      v10 = v9 | (unsigned __int16)((_WORD)v4 << 8);
      a4.n64_u64[0] = vshl_n_s16(vext_s8(vext_s8(a4, a4, 2u), v6, 6u), 8u).n64_u64[0];
      v4 = (v4 >> 8) & 0xFF0000FF | (v8 << 8);
      v5 -= 8;
      *(_WORD *)(a1 + 20) = v10;
      *(_WORD *)(a1 + 14) = HIBYTE(v7) | (unsigned __int16)(v6.n64_u16[3] << 8);
      *(_WORD *)(a1 + 16) = HIBYTE(v8) | (unsigned __int16)(v7 << 8);
      *(_WORD *)(a1 + 18) = v4;
      *(int8x8_t *)(a1 + 6) = vorr_s8(vshr_n_u16(v6, 8u), a4);
    }
  }
  else
  {
    *v37 = *v36;
    v4 = *(unsigned __int16 *)(a1 + 18);
    *(_WORD *)(a1 + 4) = 0;
    if ( v4 )
    {
      v5 = 80;
      if ( !(_BYTE)v4 )
        goto LABEL_3;
    }
    else
    {
      *v37 = *v36;
      v4 = *(unsigned __int16 *)(a1 + 18);
      *(_WORD *)(a1 + 4) = 0;
      if ( v4 )
      {
        v5 = 64;
        if ( !(_BYTE)v4 )
          goto LABEL_3;
      }
      else
      {
        *v37 = *v36;
        v4 = *(unsigned __int16 *)(a1 + 18);
        *(_WORD *)(a1 + 4) = 0;
        if ( v4 )
        {
          v5 = 48;
          if ( !(_BYTE)v4 )
            goto LABEL_3;
        }
        else
        {
          *v37 = *v36;
          v4 = *(unsigned __int16 *)(a1 + 18);
          *(_WORD *)(a1 + 4) = 0;
          if ( v4 )
          {
            v5 = 32;
            if ( !(_BYTE)v4 )
              goto LABEL_3;
          }
          else
          {
            *v37 = *v36;
            v4 = *(unsigned __int16 *)(a1 + 18);
            *(_WORD *)(a1 + 4) = 0;
            if ( !v4 )
            {
              v20 = 0;
              *v37 = *v36;
              *(_WORD *)v36 = 0;
              *(_QWORD *)a2 = 0;
              *(_QWORD *)(a2 + 8) = 0;
              *(_QWORD *)(a2 + 14) = 0;
              return v20;
            }
            v5 = 16;
            if ( !(_BYTE)v4 )
              goto LABEL_3;
          }
        }
      }
    }
  }
LABEL_4:
  v11 = 0;
  LOWORD(v12) = 0;
  LOWORD(v13) = 0;
  LOWORD(v14) = 0;
  LOWORD(v15) = 0;
  LOWORD(v16) = 0;
  LOWORD(v17) = 0;
  LOWORD(v18) = 0;
  LOWORD(v19) = 0;
  v20 = 0;
  do
  {
    if ( (v4 & 1) != 0 )
    {
      v19 = *(unsigned __int16 *)(a2 + 20) + (unsigned __int16)v19;
      v18 = *(unsigned __int16 *)(a2 + 18) + HIWORD(v19) + (unsigned __int16)v18;
      v17 = (HIWORD(v18) & 1) + *(unsigned __int16 *)(a2 + 16) + (unsigned __int16)v17;
      v16 = *(unsigned __int16 *)(a2 + 14) + (unsigned __int16)v16 + (HIWORD(v17) & 1);
      v15 = *(unsigned __int16 *)(a2 + 12) + (unsigned __int16)v15 + (HIWORD(v16) & 1);
      v14 = *(unsigned __int16 *)(a2 + 10) + (unsigned __int16)v14 + (HIWORD(v15) & 1);
      v13 = *(unsigned __int16 *)(a2 + 8) + (unsigned __int16)v13 + (HIWORD(v14) & 1);
      v12 = *(unsigned __int16 *)(a2 + 6) + (unsigned __int16)v12 + (HIWORD(v13) & 1);
      v11 += *(unsigned __int16 *)(a2 + 4) + (HIWORD(v12) & 1);
    }
    v21.n64_u64[0] = *(unsigned __int64 *)(a1 + 6);
    v22 = *(_WORD *)(a1 + 14);
    v23 = *(unsigned __int16 *)(a1 + 16);
    v24 = v19;
    v20 |= v19 & 1;
    a4.n64_u32[0] = *(unsigned __int16 *)(a1 + 4);
    *(_WORD *)(a1 + 4) >>= 1;
    v25 = (v22 >> 1) | (v21.n64_u16[3] << 15);
    v26 = (v23 >> 1) & 0x7FFF | (v22 << 15);
    v27 = v18;
    v28 = v17;
    v29 = v16;
    v30 = v15;
    v31 = v14;
    v32 = v13;
    v33 = v12;
    *(_WORD *)(a1 + 14) = v25;
    LOWORD(v12) = ((_WORD)v11 << 15) | ((unsigned __int16)v12 >> 1);
    LOWORD(v13) = (v33 << 15) | (v32 >> 1);
    LOWORD(v14) = (v32 << 15) | (v31 >> 1);
    LOWORD(v15) = (v31 << 15) | (v30 >> 1);
    a4.n64_u64[0] = vext_s8(a4, a4, 2u).n64_u64[0];
    LOWORD(v16) = (v30 << 15) | (v29 >> 1);
    v34 = *(unsigned __int16 *)(a1 + 20) >> 1;
    *(_WORD *)(a1 + 16) = v26;
    LOWORD(v17) = (v29 << 15) | (v28 >> 1);
    LOWORD(v34) = v34 & 0x7FFF | ((_WORD)v4 << 15);
    v11 = (unsigned __int16)v11 >> 1;
    LOWORD(v18) = (v28 << 15) | (v27 >> 1);
    --v5;
    LOWORD(v4) = ((unsigned __int16)v4 >> 1) | ((_WORD)v23 << 15);
    LOWORD(v19) = (v27 << 15) | (v24 >> 1);
    *(_WORD *)(a1 + 20) = v34;
    *(_WORD *)(a1 + 18) = v4;
    *(int8x8_t *)(a1 + 6) = vorr_s8(vshr_n_u16(v21, 1u), vshl_n_s16(vext_s8(a4, v21, 6u), 0xFu));
  }
  while ( v5 );
  *(_WORD *)&v38[20] = (v27 << 15) | (v24 >> 1);
  *(_WORD *)&v38[18] = v18;
  *(_WORD *)&v38[16] = v17;
  *(_WORD *)&v38[14] = v16;
  *(_WORD *)&v38[12] = v15;
  *(_WORD *)&v38[10] = v14;
  *(_WORD *)&v38[8] = v13;
  *(_WORD *)&v38[6] = v12;
  *(_WORD *)&v38[4] = v11;
  *(_QWORD *)(a2 + 14) = *(_QWORD *)&v38[14];
  *(_OWORD *)a2 = *(_OWORD *)v38;
  return v20;
}
