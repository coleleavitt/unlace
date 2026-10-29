/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7948C
// Address: 0x0007948C

//----- (0007948C) --------------------------------------------------------
int __fastcall sub_7948C(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // r6
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r7
  unsigned int v11; // r6
  int v12; // r7
  int v13; // r2
  int v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r1
  __int16 v23; // [sp+8h] [bp-30h]
  int v24; // [sp+Ch] [bp-2Ch]
  int v25; // [sp+10h] [bp-28h]
  int v26; // [sp+14h] [bp-24h]
  int v28; // [sp+1Ch] [bp-1Ch]
  int v29; // [sp+20h] [bp-18h]
  unsigned __int16 v30; // [sp+20h] [bp-18h]
  int v31; // [sp+24h] [bp-14h]
  unsigned __int16 v32; // [sp+24h] [bp-14h]
  int v33; // [sp+28h] [bp-10h]
  unsigned __int16 v34; // [sp+28h] [bp-10h]
  int v35; // [sp+2Ch] [bp-Ch]
  int v36; // [sp+30h] [bp-8h]
  int v37; // [sp+34h] [bp-4h]

  v6 = a2[1];
  v3 = a1[1];
  v4 = v3 - sub_764F8(a1);
  v5 = v6 - sub_764F8(a2);
  LOWORD(v6) = 0;
  v26 = v4;
  if ( v5 >= v4 )
  {
    v7 = a2[2];
    v6 = 0;
    do
    {
      v35 = v5;
      v8 = a1[2];
      v28 = (unsigned __int16)v7;
      v37 = v7;
      v36 = v6;
      if ( v8 == (unsigned __int16)v7 )
      {
        v7 = a2[3];
        v8 = a1[3];
        if ( v8 == v7 )
        {
          v7 = a2[4];
          if ( a1[4] != v7 )
          {
            v8 = a1[4];
            goto LABEL_17;
          }
          v7 = a2[5];
          v9 = a1[5];
          if ( v9 != v7 )
          {
LABEL_14:
            v8 = v9;
            goto LABEL_17;
          }
          v7 = a2[6];
          v10 = a1[6];
          if ( v10 != v7 )
          {
LABEL_15:
            v8 = v10;
            goto LABEL_17;
          }
          v31 = a1[6];
          v7 = a2[7];
          v33 = a1[7];
          if ( v33 == v7 )
          {
            v7 = a2[8];
            v10 = a1[8];
            if ( v10 != v7 )
              goto LABEL_15;
            v29 = a1[5];
            v7 = a2[9];
            v9 = a1[9];
            if ( v9 != v7 )
              goto LABEL_14;
            v7 = a2[10];
            v25 = a1[3];
            v8 = a1[10];
            v24 = a1[4];
            v11 = v8;
            if ( v8 == v7 )
              goto LABEL_20;
          }
          else
          {
            v8 = a1[7];
          }
        }
      }
LABEL_17:
      v11 = a2[10];
      if ( v8 <= (unsigned __int16)v7 )
      {
        v25 = a2[3];
        v24 = a2[4];
        v29 = a2[5];
        v31 = a2[6];
        v33 = a2[7];
        v10 = a2[8];
        v9 = a2[9];
        v8 = a1[10];
LABEL_20:
        v23 = v11 - v8;
        a2[10] = v11 - v8;
        v15 = v9 - a1[9] - ((v11 - v8) << 15 >> 31);
        a2[9] = v15;
        v14 = v10 - a1[8] - (v15 << 15 >> 31);
        a2[8] = v14;
        v13 = v33 - a1[7] - ((unsigned int)(v14 << 15) >> 31);
        a2[7] = v13;
        v12 = v31 - a1[6] - ((unsigned int)(v13 << 15) >> 31);
        a2[6] = v12;
        v17 = v29 - a1[5] - ((unsigned int)(v12 << 15) >> 31);
        a2[5] = v17;
        v30 = v17;
        v18 = v24 - a1[4] - ((unsigned int)(v17 << 15) >> 31);
        a2[4] = v18;
        v32 = v18;
        v19 = v25 - a1[3] - ((unsigned int)(v18 << 15) >> 31);
        a2[3] = v19;
        v34 = v19;
        LOWORD(v11) = v23;
        v37 = v28 - a1[2] - ((unsigned int)(v19 << 15) >> 31);
        a2[2] = v37;
        v16 = 1;
        goto LABEL_21;
      }
      v34 = a2[3];
      v32 = a2[4];
      v30 = a2[5];
      LOWORD(v12) = a2[6];
      LOWORD(v13) = a2[7];
      LOWORD(v14) = a2[8];
      LOWORD(v15) = a2[9];
      v16 = 0;
LABEL_21:
      a2[10] = 2 * v11;
      a2[9] = 2 * v15 + ((unsigned __int16)(v11 & 0x8000) >> 15);
      a2[8] = 2 * v14 + ((unsigned __int16)(v15 & 0x8000) >> 15);
      a2[7] = 2 * v13 + ((unsigned __int16)(v14 & 0x8000) >> 15);
      a2[6] = 2 * v12 + ((unsigned __int16)(v13 & 0x8000) >> 15);
      a2[5] = 2 * v30 + ((unsigned __int16)(v12 & 0x8000) >> 15);
      a2[4] = 2 * v32 + ((unsigned __int16)(v30 & 0x8000) >> 15);
      a2[3] = 2 * v34 + ((unsigned __int16)(v32 & 0x8000) >> 15);
      v7 = 2 * v37 + ((unsigned __int16)(v34 & 0x8000) >> 15);
      a2[2] = v7;
      v6 = 2 * v36 + v16;
      v5 = v35 - 1;
    }
    while ( v35 - 1 >= v26 );
  }
  v20 = sub_764F8(a2);
  if ( v20 < 113 )
  {
    v21 = v5 - v20;
    if ( v5 - v20 <= 32766 )
    {
      if ( v21 < 0 )
      {
        if ( v21 >= -112 )
        {
          eshift(a2, v21);
          a2[10] = 0;
        }
      }
      else
      {
        a2[10] = 0;
        if ( v21 )
        {
          a2[1] = v21;
          return (unsigned __int16)v6;
        }
      }
    }
  }
  memset(a2, 0, 0x16u);
  return (unsigned __int16)v6;
}
