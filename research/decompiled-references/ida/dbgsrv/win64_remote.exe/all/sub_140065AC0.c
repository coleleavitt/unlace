/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065AC0
// Address: 0x0000000140065AC0

//----- (0000000140065AC0) ----------------------------------------------------
__int16 __fastcall sub_140065AC0(_WORD *a1)
{
  unsigned __int16 v1; // ax
  __int16 v2; // dx
  __int16 v3; // ax
  char v4; // r8
  __int16 v5; // ax
  __int16 v6; // ax
  char v7; // r8
  char v8; // dl
  __int16 v9; // ax
  __int16 v10; // ax
  char v11; // dl
  char v12; // r8
  __int16 v13; // ax
  __int16 v14; // ax
  char v15; // r8
  char v16; // dl
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // dl
  char v20; // r8
  __int16 v21; // ax
  __int16 v22; // ax
  char v23; // r8
  char v24; // dl
  __int16 v25; // ax
  __int16 v26; // ax
  char v27; // dl
  char v28; // r8
  __int16 v29; // ax
  __int16 result; // ax

  v1 = a1[10];
  v2 = (v1 >> 14) & 2;
  a1[10] = 2 * v1;
  v3 = a1[9];
  v4 = v2 | 1;
  if ( v3 >= 0 )
    v4 = v2;
  v5 = 2 * v3;
  a1[9] = v5;
  if ( (v4 & 2) != 0 )
    a1[9] = v5 | 1;
  v6 = a1[8];
  v7 = 2 * v4;
  v8 = v7 | 1;
  if ( v6 >= 0 )
    v8 = v7;
  v9 = 2 * v6;
  a1[8] = v9;
  if ( (v8 & 2) != 0 )
    a1[8] = v9 | 1;
  v10 = a1[7];
  v11 = 2 * v8;
  v12 = v11 | 1;
  if ( v10 >= 0 )
    v12 = v11;
  v13 = 2 * v10;
  a1[7] = v13;
  if ( (v12 & 2) != 0 )
    a1[7] = v13 | 1;
  v14 = a1[6];
  v15 = 2 * v12;
  v16 = v15 | 1;
  if ( v14 >= 0 )
    v16 = v15;
  v17 = 2 * v14;
  a1[6] = v17;
  if ( (v16 & 2) != 0 )
    a1[6] = v17 | 1;
  v18 = a1[5];
  v19 = 2 * v16;
  v20 = v19 | 1;
  if ( v18 >= 0 )
    v20 = v19;
  v21 = 2 * v18;
  a1[5] = v21;
  if ( (v20 & 2) != 0 )
    a1[5] = v21 | 1;
  v22 = a1[4];
  v23 = 2 * v20;
  v24 = v23 | 1;
  if ( v22 >= 0 )
    v24 = v23;
  v25 = 2 * v22;
  a1[4] = v25;
  if ( (v24 & 2) != 0 )
    a1[4] = v25 | 1;
  v26 = a1[3];
  v27 = 2 * v24;
  v28 = v27 | 1;
  if ( v26 >= 0 )
    v28 = v27;
  v29 = 2 * v26;
  a1[3] = v29;
  if ( (v28 & 2) != 0 )
    a1[3] = v29 | 1;
  result = 2 * a1[2];
  a1[2] = result;
  if ( (v28 & 1) != 0 )
  {
    result |= 1u;
    a1[2] = result;
  }
  return result;
}
