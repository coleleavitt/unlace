/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x00076D0C

//----- (00076D0C) --------------------------------------------------------
int __fastcall emul(unsigned __int16 *a1, __int16 *a2, _WORD *a3)
{
  int v3; // r5
  int v4; // r6
  int v5; // r5
  unsigned __int16 v6; // r0
  int v7; // r7
  int v8; // r3
  int v9; // r7
  __int16 v11; // r1
  int result; // r0
  _BOOL4 v13; // r1
  _BOOL4 v14; // r1
  int v15; // r1
  unsigned __int16 v16; // r3
  __int16 v17; // r3
  unsigned __int16 v18; // [sp+10h] [bp-34h] BYREF
  __int16 v19; // [sp+12h] [bp-32h]
  __int16 v20; // [sp+14h] [bp-30h]
  __int16 v21; // [sp+16h] [bp-2Eh]
  __int16 v22; // [sp+18h] [bp-2Ch]
  __int16 v23; // [sp+1Ah] [bp-2Ah]
  __int16 v24; // [sp+1Ch] [bp-28h]
  __int16 v25; // [sp+1Eh] [bp-26h]
  __int16 v26; // [sp+20h] [bp-24h]
  __int16 v27; // [sp+22h] [bp-22h]
  __int16 v28; // [sp+24h] [bp-20h]
  unsigned __int16 v29[12]; // [sp+28h] [bp-1Ch] BYREF

  v3 = a1[7];
  v29[2] = 0;
  v4 = v3 << 16;
  v5 = v3 & 0x7FFF;
  v29[1] = v5;
  v29[0] = (unsigned int)(v4 >> 16) >> 15;
  v29[3] = a1[6];
  v29[4] = a1[5];
  v29[5] = a1[4];
  v29[6] = a1[3];
  v29[7] = a1[2];
  v29[8] = a1[1];
  v6 = *a1;
  v29[10] = 0;
  v29[9] = v6;
  v7 = (unsigned __int16)a2[7];
  v20 = 0;
  v8 = v7 << 16;
  v9 = v7 & 0x7FFF;
  v19 = v9;
  v18 = (unsigned int)(v8 >> 16) >> 15;
  v21 = a2[6];
  v22 = a2[5];
  v23 = a2[4];
  v24 = a2[3];
  v25 = a2[2];
  v26 = a2[1];
  v11 = *a2;
  v28 = 0;
  v27 = v11;
  memset(a3, 0, 0x10u);
  result = 1;
  if ( v5 )
  {
    if ( v9 )
    {
      v13 = sub_76E24(v29, &v18) != 0;
      v14 = emdnorm(&v18, v13, 0, v5 + v9 - 16382, 112);
      result = 2;
      if ( v14 )
      {
        v15 = v18;
        v16 = -1;
        if ( v29[0] == v18 )
          v16 = 0;
        v18 = v16;
        v17 = v19 | 0x8000;
        if ( v29[0] == v15 )
          v17 = v19;
        a3[7] = v17;
        a3[6] = v21;
        a3[5] = v22;
        a3[4] = v23;
        a3[3] = v24;
        a3[2] = v25;
        a3[1] = v26;
        *a3 = v27;
        return 1;
      }
    }
  }
  return result;
}
