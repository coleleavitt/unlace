/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eldexp
// Address: 0x00076C54

//----- (00076C54) --------------------------------------------------------
int __fastcall eldexp(__int16 *a1, int a2, _WORD *a3)
{
  int v4; // r7
  int v5; // r6
  int v6; // r7
  __int16 v7; // r3
  __int16 v8; // r2
  unsigned __int16 v10; // [sp+Ch] [bp-1Ch] BYREF
  __int16 v11; // [sp+Eh] [bp-1Ah]
  __int16 v12; // [sp+10h] [bp-18h]
  __int16 v13; // [sp+12h] [bp-16h]
  __int16 v14; // [sp+14h] [bp-14h]
  __int16 v15; // [sp+16h] [bp-12h]
  __int16 v16; // [sp+18h] [bp-10h]
  __int16 v17; // [sp+1Ah] [bp-Eh]
  __int16 v18; // [sp+1Ch] [bp-Ch]
  __int16 v19; // [sp+1Eh] [bp-Ah]
  __int16 v20; // [sp+20h] [bp-8h]

  v4 = (unsigned __int16)a1[7];
  v12 = 0;
  v5 = v4 << 16;
  v6 = v4 & 0x7FFF;
  v11 = v6;
  v10 = (unsigned int)(v5 >> 16) >> 15;
  v13 = a1[6];
  v14 = a1[5];
  v15 = a1[4];
  v16 = a1[3];
  v17 = a1[2];
  v18 = a1[1];
  v7 = *a1;
  v20 = 0;
  v19 = v7;
  if ( emdnorm(&v10, 0, 0, v6 + a2, 112) )
  {
    v8 = v11;
    if ( v10 )
      v8 = v11 | 0x8000;
    a3[7] = v8;
    a3[6] = v13;
    a3[5] = v14;
    a3[4] = v15;
    a3[3] = v16;
    a3[2] = v17;
    a3[1] = v18;
    *a3 = v19;
    return 1;
  }
  else
  {
    memset(a3, 0, 0x10u);
    return 2;
  }
}
