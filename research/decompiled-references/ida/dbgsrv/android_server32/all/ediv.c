/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x00077118

//----- (00077118) --------------------------------------------------------
int __fastcall ediv(__int16 *a1, unsigned __int16 *a2, _WORD *a3)
{
  int v3; // r5
  int v4; // r6
  int v5; // r5
  __int16 v6; // r0
  int v7; // r7
  int v8; // r3
  int v9; // r7
  unsigned __int16 v11; // r1
  int result; // r0
  _BOOL4 v13; // r1
  _BOOL4 v14; // r1
  int v15; // r2
  unsigned __int16 v16; // r3
  __int16 v17; // r3
  unsigned __int16 v18[12]; // [sp+10h] [bp-34h] BYREF
  unsigned __int16 v19; // [sp+28h] [bp-1Ch] BYREF
  __int16 v20; // [sp+2Ah] [bp-1Ah]
  __int16 v21; // [sp+2Ch] [bp-18h]
  __int16 v22; // [sp+2Eh] [bp-16h]
  __int16 v23; // [sp+30h] [bp-14h]
  __int16 v24; // [sp+32h] [bp-12h]
  __int16 v25; // [sp+34h] [bp-10h]
  __int16 v26; // [sp+36h] [bp-Eh]
  __int16 v27; // [sp+38h] [bp-Ch]
  __int16 v28; // [sp+3Ah] [bp-Ah]
  __int16 v29; // [sp+3Ch] [bp-8h]

  v3 = (unsigned __int16)a1[7];
  v21 = 0;
  v4 = v3 << 16;
  v5 = v3 & 0x7FFF;
  v20 = v5;
  v19 = (unsigned int)(v4 >> 16) >> 15;
  v22 = a1[6];
  v23 = a1[5];
  v24 = a1[4];
  v25 = a1[3];
  v26 = a1[2];
  v27 = a1[1];
  v6 = *a1;
  v29 = 0;
  v28 = v6;
  v7 = a2[7];
  v18[2] = 0;
  v8 = v7 << 16;
  v9 = v7 & 0x7FFF;
  v18[1] = v9;
  v18[0] = (unsigned int)(v8 >> 16) >> 15;
  v18[3] = a2[6];
  v18[4] = a2[5];
  v18[5] = a2[4];
  v18[6] = a2[3];
  v18[7] = a2[2];
  v18[8] = a2[1];
  v11 = *a2;
  v18[10] = 0;
  v18[9] = v11;
  memset(a3, 0, 0x10u);
  result = 4;
  if ( v9 )
  {
    result = 1;
    if ( v5 )
    {
      v13 = sub_77234(v18, &v19) != 0;
      v14 = emdnorm(&v19, v13, 0, 0x3FFF - v9 + v5, 112);
      result = 2;
      if ( v14 )
      {
        v15 = v19;
        v16 = -1;
        if ( v19 == v18[0] )
          v16 = 0;
        v19 = v16;
        v17 = v20 | 0x8000;
        if ( v15 == v18[0] )
          v17 = v20;
        a3[7] = v17;
        a3[6] = v22;
        a3[5] = v23;
        a3[4] = v24;
        a3[3] = v25;
        a3[2] = v26;
        a3[1] = v27;
        *a3 = v28;
        return 1;
      }
    }
  }
  return result;
}
