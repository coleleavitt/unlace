/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x00075D8C

//----- (00075D8C) --------------------------------------------------------
int __fastcall eshift(unsigned __int16 *a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r1
  unsigned __int16 *v9; // r0
  int v10; // r5
  int v11; // r4
  int v12; // r3
  int v13; // r7
  int v14; // r2
  int v15; // r4
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v19; // r6
  unsigned __int16 *v20; // r7
  int v21; // r5
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r4
  unsigned __int16 *v27; // r6
  int v28; // r5
  int v29; // r7
  int v30; // r0
  int v31; // r1
  int v32; // r1
  int v33; // r3
  int v34; // r6
  int v35; // r4
  int v36; // r7
  int v37; // r5
  int v38; // r0
  int v39; // [sp+4h] [bp-24h]
  char v40; // [sp+4h] [bp-24h]
  char v41; // [sp+4h] [bp-24h]
  char v42; // [sp+4h] [bp-24h]
  unsigned __int16 *v43; // [sp+8h] [bp-20h]
  int v44; // [sp+14h] [bp-14h]
  int v45; // [sp+18h] [bp-10h]
  int v46; // [sp+18h] [bp-10h]
  int v47; // [sp+18h] [bp-10h]
  int v48; // [sp+18h] [bp-10h]
  int v49; // [sp+1Ch] [bp-Ch]
  int v50; // [sp+1Ch] [bp-Ch]
  int v51; // [sp+1Ch] [bp-Ch]
  int v52; // [sp+1Ch] [bp-Ch]
  void *v53; // [sp+20h] [bp-8h]
  int v54; // [sp+20h] [bp-8h]
  unsigned __int16 v55; // [sp+20h] [bp-8h]
  unsigned __int16 v56; // [sp+20h] [bp-8h]
  int v57; // [sp+20h] [bp-8h]
  const void *v58; // [sp+24h] [bp-4h]
  int v59; // [sp+24h] [bp-4h]
  int v60; // [sp+24h] [bp-4h]
  int v61; // [sp+24h] [bp-4h]

  result = 1;
  if ( !a2 )
    return result;
  v43 = a1;
  if ( a2 >= 0 )
  {
    if ( a2 < 16 )
    {
      if ( a2 >= 8 )
        goto LABEL_19;
    }
    else
    {
      v41 = a2;
      v15 = a2 + 16;
      do
      {
        memmove(a1 + 2, a1 + 3, 0x10u);
        a1[10] = 0;
        v15 -= 16;
      }
      while ( v15 > 31 );
      a2 = v41 & 0xF;
      if ( (unsigned int)a2 >= 8 )
      {
LABEL_19:
        v42 = a2;
        v50 = a2 + 8;
        v60 = a1[2];
        v16 = a1[3];
        v17 = a1[4];
        v18 = a1[5];
        v19 = a1[6];
        v20 = a1;
        v21 = a1[7];
        v22 = v20[8];
        v23 = v20[9];
        v55 = v20[10];
        do
        {
          v60 = (v60 << 8) + ((unsigned __int16)(v16 & 0xFF00) >> 8);
          v46 = (v16 << 8) + ((unsigned __int16)(v17 & 0xFF00) >> 8);
          v17 = (v17 << 8) + ((unsigned __int16)(v18 & 0xFF00) >> 8);
          v18 = (v18 << 8) + ((unsigned __int16)(v19 & 0xFF00) >> 8);
          v19 = (v19 << 8) + ((unsigned __int16)(v21 & 0xFF00) >> 8);
          v21 = (v21 << 8) + ((unsigned __int16)(v22 & 0xFF00) >> 8);
          v22 = (v22 << 8) + ((unsigned __int16)(v23 & 0xFF00) >> 8);
          v23 = (v23 << 8) + ((unsigned __int16)(v55 & 0xFF00) >> 8);
          v55 <<= 8;
          v16 = v46;
          v50 -= 8;
        }
        while ( v50 > 15 );
        v43[9] = v23;
        v43[10] = v55;
        v43[8] = v22;
        v43[7] = v21;
        a1 = v43;
        v43[6] = v19;
        v43[5] = v18;
        v43[4] = v17;
        v43[3] = v46;
        v43[2] = v60;
        a2 = v42 & 7;
        if ( (v42 & 7) == 0 )
          return 1;
        goto LABEL_22;
      }
    }
    if ( a2 >= 1 )
    {
LABEL_22:
      v51 = a2 + 1;
      v61 = a1[2];
      v24 = a1[3];
      v25 = a1[4];
      v26 = a1[5];
      v27 = a1;
      v28 = a1[6];
      v29 = v27[7];
      v30 = v27[8];
      v31 = v27[9];
      v56 = v27[10];
      do
      {
        v61 = 2 * v61 + ((unsigned __int16)(v24 & 0x8000) >> 15);
        v47 = 2 * v24 + ((unsigned __int16)(v25 & 0x8000) >> 15);
        v25 = 2 * v25 + ((unsigned __int16)(v26 & 0x8000) >> 15);
        v26 = 2 * v26 + ((unsigned __int16)(v28 & 0x8000) >> 15);
        v28 = 2 * v28 + ((unsigned __int16)(v29 & 0x8000) >> 15);
        v29 = 2 * v29 + ((unsigned __int16)(v30 & 0x8000) >> 15);
        v30 = 2 * v30 + ((unsigned __int16)(v31 & 0x8000) >> 15);
        v31 = 2 * v31 + ((unsigned __int16)(v56 & 0x8000) >> 15);
        v56 *= 2;
        v24 = v47;
        --v51;
      }
      while ( v51 > 1 );
      v43[9] = v31;
      v43[10] = v56;
      v43[8] = v30;
      v43[7] = v29;
      v43[6] = v28;
      v43[5] = v26;
      v43[4] = v25;
      v43[3] = v47;
      v43[2] = v61;
    }
    return 1;
  }
  v4 = -a2;
  v5 = 0;
  if ( -a2 >= 16 )
  {
    v6 = 16 - a2;
    v39 = -a2;
    v58 = a1 + 2;
    v53 = a1 + 3;
    v5 = 0;
    do
    {
      v7 = v43[10];
      memmove(v53, v58, 0x10u);
      v43[2] = 0;
      v5 |= v7;
      a1 = v43;
      v6 -= 16;
    }
    while ( v6 > 31 );
    v4 = v39 & 0xF;
  }
  if ( v4 < 8 )
  {
    v59 = v5;
    if ( v4 < 1 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v40 = v4;
  v8 = v4 + 8;
  v54 = a1[9];
  v49 = a1[8];
  v45 = a1[7];
  v9 = a1;
  v10 = a1[6];
  v44 = v9[5];
  v11 = v9[4];
  v12 = v9[3];
  v13 = v9[2];
  LOWORD(v14) = v9[10];
  do
  {
    v59 = v5 | (unsigned __int8)v14;
    v14 = (v54 << 8) + ((unsigned __int16)(v14 & 0xFF00) >> 8);
    v54 = ((unsigned __int16)(v54 & 0xFF00) >> 8) + (v49 << 8);
    v49 = ((unsigned __int16)(v49 & 0xFF00) >> 8) + (v45 << 8);
    v45 = ((unsigned __int16)(v45 & 0xFF00) >> 8) + (v10 << 8);
    v10 = ((unsigned __int16)(v10 & 0xFF00) >> 8) + (v44 << 8);
    v5 = v59;
    v44 = ((unsigned __int16)(v44 & 0xFF00) >> 8) + (v11 << 8);
    v11 = ((unsigned __int16)(v11 & 0xFF00) >> 8) + (v12 << 8);
    v12 = ((unsigned __int16)(v12 & 0xFF00) >> 8) + (v13 << 8);
    v13 = (unsigned __int16)(v13 & 0xFF00) >> 8;
    v8 -= 8;
  }
  while ( v8 > 15 );
  v43[2] = v13;
  v43[10] = v14;
  v43[3] = v12;
  v43[4] = v11;
  v43[5] = v44;
  v43[6] = v10;
  a1 = v43;
  v43[7] = v45;
  v43[8] = v49;
  v43[9] = v54;
  v4 = v40 & 7;
  if ( (v40 & 7) != 0 )
  {
LABEL_26:
    v32 = v4 + 1;
    v57 = a1[9];
    v52 = a1[8];
    v48 = a1[7];
    v33 = a1[6];
    v34 = a1[5];
    v35 = a1[4];
    v36 = a1[3];
    v38 = (int)a1;
    v37 = a1[2];
    LOWORD(v38) = *(_WORD *)(v38 + 20);
    do
    {
      v59 |= v38 & 1;
      v38 = (v57 << 15) + ((unsigned __int16)(v38 & 0xFFFE) >> 1);
      v57 = ((unsigned __int16)(v57 & 0xFFFE) >> 1) + (v52 << 15);
      v52 = ((unsigned __int16)(v52 & 0xFFFE) >> 1) + (v48 << 15);
      v48 = ((unsigned __int16)(v48 & 0xFFFE) >> 1) + (v33 << 15);
      v33 = ((unsigned __int16)(v33 & 0xFFFE) >> 1) + (v34 << 15);
      v34 = ((unsigned __int16)(v34 & 0xFFFE) >> 1) + (v35 << 15);
      v35 = ((unsigned __int16)(v35 & 0xFFFE) >> 1) + (v36 << 15);
      v36 = ((unsigned __int16)(v36 & 0xFFFE) >> 1) + (v37 << 15);
      v37 = (unsigned __int16)(v37 & 0xFFFE) >> 1;
      --v32;
    }
    while ( v32 > 1 );
    v43[2] = v37;
    v43[10] = v38;
    v43[3] = v36;
    v43[4] = v35;
    v43[5] = v34;
    v43[6] = v33;
    v43[7] = v48;
    v43[8] = v52;
    v43[9] = v57;
  }
LABEL_29:
  result = 2;
  if ( !(v59 << 16) )
    return 1;
  return result;
}
