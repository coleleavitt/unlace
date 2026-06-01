/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065870
// Address: 0x0000000140065870

//----- (0000000140065870) ----------------------------------------------------
__int16 __fastcall sub_140065870(_WORD *a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v2; // r8
  __int16 v3; // ax
  char v4; // dl
  char v5; // r9
  __int16 v6; // r8
  unsigned __int16 v7; // dx
  char v8; // r9
  char v9; // r8
  __int16 v10; // dx
  unsigned __int16 v11; // dx
  char v12; // r8
  char v13; // r9
  __int16 v14; // dx
  unsigned __int16 v15; // dx
  char v16; // r9
  char v17; // r8
  __int16 v18; // dx
  unsigned __int16 v19; // dx
  char v20; // r8
  char v21; // r9
  __int16 v22; // dx
  unsigned __int16 v23; // dx
  char v24; // r9
  char v25; // r8
  __int16 v26; // dx
  unsigned __int16 v27; // dx
  char v28; // r8
  char v29; // r9
  __int16 v30; // dx
  __int16 result; // ax

  v1 = a1[2];
  v2 = a1[3];
  v3 = v1 >> 1;
  v4 = 2 * (v1 & 1);
  a1[2] = v3;
  v5 = v4 | 1;
  if ( (v2 & 1) == 0 )
    v5 = v4;
  v6 = v2 >> 1;
  a1[3] = v6;
  if ( (v5 & 2) != 0 )
    a1[3] = v6 | 0x8000;
  v7 = a1[4];
  v8 = 2 * v5;
  v9 = v8 | 1;
  if ( (v7 & 1) == 0 )
    v9 = v8;
  v10 = v7 >> 1;
  a1[4] = v10;
  if ( (v9 & 2) != 0 )
    a1[4] = v10 | 0x8000;
  v11 = a1[5];
  v12 = 2 * v9;
  v13 = v12 | 1;
  if ( (v11 & 1) == 0 )
    v13 = v12;
  v14 = v11 >> 1;
  a1[5] = v14;
  if ( (v13 & 2) != 0 )
    a1[5] = v14 | 0x8000;
  v15 = a1[6];
  v16 = 2 * v13;
  v17 = v16 | 1;
  if ( (v15 & 1) == 0 )
    v17 = v16;
  v18 = v15 >> 1;
  a1[6] = v18;
  if ( (v17 & 2) != 0 )
    a1[6] = v18 | 0x8000;
  v19 = a1[7];
  v20 = 2 * v17;
  v21 = v20 | 1;
  if ( (v19 & 1) == 0 )
    v21 = v20;
  v22 = v19 >> 1;
  a1[7] = v22;
  if ( (v21 & 2) != 0 )
    a1[7] = v22 | 0x8000;
  v23 = a1[8];
  v24 = 2 * v21;
  v25 = v24 | 1;
  if ( (v23 & 1) == 0 )
    v25 = v24;
  v26 = v23 >> 1;
  a1[8] = v26;
  if ( (v25 & 2) != 0 )
    a1[8] = v26 | 0x8000;
  v27 = a1[9];
  v28 = 2 * v25;
  v29 = v28 | 1;
  if ( (v27 & 1) == 0 )
    v29 = v28;
  v30 = v27 >> 1;
  a1[9] = v30;
  if ( (v29 & 2) != 0 )
    a1[9] = v30 | 0x8000;
  result = a1[10] >> 1;
  a1[10] = result;
  if ( (v29 & 1) != 0 )
  {
    result |= 0x8000u;
    a1[10] = result;
  }
  return result;
}
