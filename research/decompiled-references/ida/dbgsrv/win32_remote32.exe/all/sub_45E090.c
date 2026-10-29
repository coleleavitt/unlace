/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E090
// Address: 0x0045E090

//----- (0045E090) --------------------------------------------------------
__int16 __cdecl sub_45E090(_WORD *a1)
{
  unsigned __int16 v1; // bx
  __int16 v2; // cx
  char v3; // si
  char v4; // cl
  __int16 v5; // bx
  char v6; // al
  unsigned __int16 v7; // bx
  char v8; // cl
  char v9; // al
  __int16 v10; // bx
  char v11; // al
  unsigned __int16 v12; // bx
  char v13; // cl
  char v14; // al
  __int16 v15; // bx
  char v16; // al
  unsigned __int16 v17; // bx
  char v18; // cl
  char v19; // al
  __int16 v20; // bx
  char v21; // al
  unsigned __int16 v22; // bx
  char v23; // cl
  char v24; // al
  __int16 v25; // bx
  char v26; // al
  unsigned __int16 v27; // bx
  char v28; // cl
  char v29; // al
  __int16 v30; // bx
  char v31; // al
  unsigned __int16 v32; // bx
  char v33; // cl
  char v34; // al
  __int16 v35; // bx
  __int16 result; // ax

  v1 = a1[3];
  v2 = a1[2] & 1;
  a1[2] >>= 1;
  v3 = 2 * v2;
  v4 = (2 * v2) | 1;
  if ( (v1 & 1) == 0 )
    v4 = v3;
  v5 = v1 >> 1;
  v6 = v4;
  a1[3] = v5;
  if ( (v4 & 2) != 0 )
    a1[3] = v5 | 0x8000;
  v7 = a1[4];
  v8 = (2 * v4) | 1;
  v9 = 2 * v6;
  if ( (v7 & 1) == 0 )
    v8 = v9;
  v10 = v7 >> 1;
  v11 = v8;
  a1[4] = v10;
  if ( (v8 & 2) != 0 )
    a1[4] = v10 | 0x8000;
  v12 = a1[5];
  v13 = (2 * v8) | 1;
  v14 = 2 * v11;
  if ( (v12 & 1) == 0 )
    v13 = v14;
  v15 = v12 >> 1;
  v16 = v13;
  a1[5] = v15;
  if ( (v13 & 2) != 0 )
    a1[5] = v15 | 0x8000;
  v17 = a1[6];
  v18 = (2 * v13) | 1;
  v19 = 2 * v16;
  if ( (v17 & 1) == 0 )
    v18 = v19;
  v20 = v17 >> 1;
  v21 = v18;
  a1[6] = v20;
  if ( (v18 & 2) != 0 )
    a1[6] = v20 | 0x8000;
  v22 = a1[7];
  v23 = (2 * v18) | 1;
  v24 = 2 * v21;
  if ( (v22 & 1) == 0 )
    v23 = v24;
  v25 = v22 >> 1;
  v26 = v23;
  a1[7] = v25;
  if ( (v23 & 2) != 0 )
    a1[7] = v25 | 0x8000;
  v27 = a1[8];
  v28 = (2 * v23) | 1;
  v29 = 2 * v26;
  if ( (v27 & 1) == 0 )
    v28 = v29;
  v30 = v27 >> 1;
  v31 = v28;
  a1[8] = v30;
  if ( (v28 & 2) != 0 )
    a1[8] = v30 | 0x8000;
  v32 = a1[9];
  v33 = (2 * v28) | 1;
  v34 = 2 * v31;
  if ( (v32 & 1) == 0 )
    v33 = v34;
  v35 = v32 >> 1;
  a1[9] = v35;
  if ( (v33 & 2) != 0 )
    a1[9] = v35 | 0x8000;
  result = a1[10] >> 1;
  a1[10] = result;
  if ( (v33 & 1) != 0 )
  {
    result |= 0x8000u;
    a1[10] = result;
  }
  return result;
}
