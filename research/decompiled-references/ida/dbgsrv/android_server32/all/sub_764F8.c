/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_764F8
// Address: 0x000764F8

//----- (000764F8) --------------------------------------------------------
int __fastcall sub_764F8(unsigned __int16 *a1)
{
  unsigned int v1; // r1
  void *v2; // r6
  __int16 v3; // r0
  unsigned __int16 v4; // r1
  __int16 v5; // r0
  unsigned __int16 v6; // r1
  __int16 v7; // r0
  unsigned __int16 v8; // r1
  __int16 v9; // r0
  unsigned __int16 v10; // r1
  __int16 v11; // r0
  unsigned __int16 v12; // r1
  __int16 v13; // r0
  unsigned __int16 v14; // r1
  __int16 v15; // r0
  unsigned __int16 v16; // r1
  int v17; // r3
  _WORD *v18; // r7
  int v19; // r2
  int v20; // r5
  int v21; // r4
  int v22; // r4
  int v23; // r5
  int v24; // r3
  int v25; // r6
  int v26; // r2
  unsigned __int16 v27; // r4
  int v28; // r7
  int v29; // r1
  int v30; // r3
  int v31; // r2
  unsigned __int16 v32; // r5
  int v33; // r3
  int v34; // r6
  int v35; // r7
  int v36; // r4
  int v37; // r5
  int v38; // r0
  int v39; // r1
  int v41; // [sp+Ch] [bp-20h]
  int v42; // [sp+Ch] [bp-20h]
  unsigned __int16 *v43; // [sp+10h] [bp-1Ch]
  int v44; // [sp+14h] [bp-18h]
  int v45; // [sp+14h] [bp-18h]
  int v46; // [sp+18h] [bp-14h]
  int v47; // [sp+18h] [bp-14h]
  int v48; // [sp+1Ch] [bp-10h]
  int v49; // [sp+1Ch] [bp-10h]
  int v50; // [sp+1Ch] [bp-10h]
  int v51; // [sp+20h] [bp-Ch]
  int v52; // [sp+20h] [bp-Ch]
  int v53; // [sp+20h] [bp-Ch]
  int v54; // [sp+24h] [bp-8h]
  int v55; // [sp+24h] [bp-8h]
  int v56; // [sp+24h] [bp-8h]
  int v57; // [sp+28h] [bp-4h]
  int v58; // [sp+28h] [bp-4h]

  v1 = a1[2];
  v2 = a1 + 2;
  v43 = a1;
  if ( a1[2] )
  {
    if ( v1 >> 8 )
    {
      v56 = v1 >> 8;
      a1[2] >>= 8;
      v3 = (_WORD)v1 << 8;
      v4 = v43[3];
      v43[3] = HIBYTE(v4) + v3;
      v5 = v4 << 8;
      v6 = v43[4];
      v43[4] = HIBYTE(v6) + v5;
      v7 = v6 << 8;
      v8 = v43[5];
      v43[5] = HIBYTE(v8) + v7;
      v9 = v8 << 8;
      v10 = v43[6];
      v43[6] = HIBYTE(v10) + v9;
      v11 = v10 << 8;
      v12 = v43[7];
      v43[7] = HIBYTE(v12) + v11;
      v13 = v12 << 8;
      v14 = v43[8];
      v43[8] = HIBYTE(v14) + v13;
      v15 = v14 << 8;
      v16 = v43[9];
      v43[9] = HIBYTE(v16) + v15;
      a1 = v43;
      v43[10] = *((unsigned __int8 *)v43 + 21) + (v16 << 8);
      v58 = -8;
    }
    else
    {
      v58 = 0;
      v56 = a1[2];
    }
    LOWORD(v53) = a1[10];
    v50 = a1[9];
    v33 = a1[8];
    v34 = a1[7];
    v35 = a1[6];
    v36 = a1[5];
    v37 = a1[4];
    v38 = a1[3];
    v39 = v56;
    do
    {
      v53 = ((unsigned __int16)(v53 & 0xFFFE) >> 1) + (v50 << 15);
      v50 = ((unsigned __int16)(v50 & 0xFFFE) >> 1) + (v33 << 15);
      v33 = ((unsigned __int16)(v33 & 0xFFFE) >> 1) + (v34 << 15);
      v34 = ((unsigned __int16)(v34 & 0xFFFE) >> 1) + (v35 << 15);
      v35 = ((unsigned __int16)(v35 & 0xFFFE) >> 1) + (v36 << 15);
      v36 = ((unsigned __int16)(v36 & 0xFFFE) >> 1) + (v37 << 15);
      v37 = ((unsigned __int16)(v37 & 0xFFFE) >> 1) + (v38 << 15);
      v38 = ((unsigned __int16)(v38 & 0xFFFE) >> 1) + (v39 << 15);
      --v58;
      v39 = (unsigned __int16)v39 >> 1;
    }
    while ( v39 );
    v43[3] = v38;
    v43[2] = 0;
    v43[4] = v37;
    v43[5] = v36;
    v43[6] = v35;
    v43[7] = v34;
    v43[8] = v33;
    v43[9] = v50;
    v43[10] = v53;
    return v58;
  }
  v17 = (__int16)a1[3];
  v18 = a1 + 3;
  v19 = 0;
  if ( v17 >= 0 )
  {
    v19 = 0;
    if ( a1[3] )
    {
LABEL_11:
      v22 = v17;
      if ( (unsigned __int16)v17 <= 0xFFu )
      {
        v51 = a1[2];
        v23 = a1[4];
        v48 = a1[5];
        v24 = a1[6];
        v46 = a1[7];
        v54 = v22;
        v44 = a1[8];
        v25 = a1[9];
        v57 = v19;
        v26 = a1[10];
        do
        {
          v51 = (v51 << 8) + ((unsigned __int16)(v54 & 0xFF00) >> 8);
          v41 = (v23 << 8) + ((unsigned __int16)(v48 & 0xFF00) >> 8);
          v48 = (v48 << 8) + ((unsigned __int16)(v24 & 0xFF00) >> 8);
          v24 = (v24 << 8) + ((unsigned __int16)(v46 & 0xFF00) >> 8);
          v46 = (v46 << 8) + ((unsigned __int16)(v44 & 0xFF00) >> 8);
          v44 = (v44 << 8) + ((unsigned __int16)(v25 & 0xFF00) >> 8);
          v27 = (_WORD)v26 << 8;
          v25 = (v25 << 8) + ((unsigned __int16)(v26 & 0xFF00) >> 8);
          v54 = ((unsigned __int16)(v23 & 0xFF00) >> 8) + (v54 << 8);
          v57 += 8;
          v23 = v41;
          v26 <<= 8;
        }
        while ( (unsigned __int16)v54 < 0x100u );
        a1 = v43;
        v43[9] = v25;
        v43[10] = v27;
        v43[8] = v44;
        v43[7] = v46;
        v43[6] = v24;
        v43[5] = v48;
        v43[4] = v41;
        LOWORD(v22) = v54;
        v43[3] = v54;
        v43[2] = v51;
        v19 = v57;
      }
      if ( (v22 & 0x8000u) == 0 )
      {
        v52 = a1[2];
        LOWORD(v55) = v22;
        v28 = a1[4];
        v49 = a1[5];
        v29 = a1[6];
        v47 = a1[7];
        v45 = a1[8];
        v30 = a1[9];
        v58 = v19;
        v31 = a1[10];
        do
        {
          v52 = 2 * v52 + ((unsigned __int16)(v55 & 0x8000) >> 15);
          v42 = 2 * v28 + ((unsigned __int16)(v49 & 0x8000) >> 15);
          v49 = 2 * v49 + ((unsigned __int16)(v29 & 0x8000) >> 15);
          v29 = 2 * v29 + ((unsigned __int16)(v47 & 0x8000) >> 15);
          v47 = 2 * v47 + ((unsigned __int16)(v45 & 0x8000) >> 15);
          v45 = 2 * v45 + ((unsigned __int16)(v30 & 0x8000) >> 15);
          v32 = 2 * v31;
          v30 = 2 * v30 + ((unsigned __int16)(v31 & 0x8000) >> 15);
          ++v58;
          v55 = (__int16)(((unsigned __int16)(v28 & 0x8000) >> 15) + 2 * v55);
          v28 = v42;
          v31 *= 2;
        }
        while ( v55 > -1 );
        v43[9] = v30;
        v43[10] = v32;
        v43[8] = v45;
        v43[7] = v47;
        v43[6] = v29;
        v43[5] = v49;
        v43[4] = v42;
        v43[3] = v55;
        v43[2] = v52;
        return v58;
      }
    }
    else
    {
      v20 = 0;
      v19 = 0;
      while ( 1 )
      {
        v21 = v19;
        memmove(v2, v18, 0x10u);
        a1 = v43;
        v43[10] = 0;
        v19 = v21 + 16;
        if ( (unsigned int)(v21 + 16) > 0x70 )
          return v20 + 16;
        v17 = (unsigned __int16)*v18;
        v20 = v21 + 16;
        if ( *v18 )
          goto LABEL_11;
      }
    }
  }
  return v19;
}
