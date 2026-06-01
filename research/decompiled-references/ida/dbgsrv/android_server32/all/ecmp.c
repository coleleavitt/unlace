/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x00076B54

//----- (00076B54) --------------------------------------------------------
int __fastcall ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r3
  unsigned int v6; // r5
  int v7; // r3
  __int16 v8; // r6
  unsigned int v9; // r4
  int v10; // r1
  unsigned int v11; // [sp+8h] [bp-48h]
  unsigned int v12; // [sp+10h] [bp-40h]
  unsigned __int16 v13; // [sp+26h] [bp-2Ah]
  unsigned __int16 v14; // [sp+28h] [bp-28h]
  unsigned __int16 v15; // [sp+2Ah] [bp-26h]
  unsigned __int16 v16; // [sp+2Ch] [bp-24h]
  unsigned __int16 v17; // [sp+2Eh] [bp-22h]
  unsigned __int16 v18; // [sp+3Eh] [bp-12h]
  unsigned __int16 v19; // [sp+40h] [bp-10h]
  unsigned __int16 v20; // [sp+42h] [bp-Eh]
  unsigned __int16 v21; // [sp+44h] [bp-Ch]
  unsigned __int16 v22; // [sp+46h] [bp-Ah]

  v3 = a1[7];
  result = 0;
  v5 = v3 << 16;
  v6 = v3 & 0x7FFF;
  v7 = v5 >> 31;
  v18 = a1[4];
  v19 = a1[3];
  v20 = a1[2];
  v21 = a1[1];
  v22 = *a1;
  v8 = a2[7];
  v9 = v8 & 0x7FFF;
  v12 = a2[6];
  v11 = a2[5];
  v13 = a2[4];
  v14 = a2[3];
  v15 = a2[2];
  v16 = a2[1];
  v17 = *a2;
  v10 = 1;
  if ( v7 )
    v10 = -1;
  if ( v7 != v8 >> 15 )
    return v10;
  if ( v6 != v9
    || (v6 = a1[6], v9 = v12, v6 != v12)
    || (v6 = a1[5], v9 = v11, v6 != v11)
    || (v9 = v13, v6 = v18, v18 != v13)
    || (v9 = v14, v6 = v19, v19 != v14)
    || (v9 = v15, v6 = v20, v20 != v15)
    || (v9 = v16, v6 = v21, v21 != v16)
    || (v9 = v17, v6 = v22, v22 != v17) )
  {
    if ( v6 <= v9 )
      return -v10;
    return v10;
  }
  return result;
}
