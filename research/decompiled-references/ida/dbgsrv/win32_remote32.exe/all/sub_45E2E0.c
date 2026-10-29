/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E2E0
// Address: 0x0045E2E0

//----- (0045E2E0) --------------------------------------------------------
__int16 __cdecl sub_45E2E0(_WORD *a1)
{
  unsigned int v1; // esi
  __int16 v2; // dx
  __int16 v3; // ax
  int v4; // esi
  char v5; // cl
  char v6; // bl
  __int16 v7; // si
  char v8; // cl
  __int16 v9; // si
  char v10; // dl
  char v11; // cl
  __int16 v12; // si
  char v13; // dl
  char v14; // cl
  __int16 v15; // si
  char v16; // dl
  char v17; // cl
  __int16 v18; // si
  char v19; // dl
  char v20; // cl
  __int16 v21; // si
  char v22; // dl
  char v23; // cl
  __int16 result; // ax

  v1 = (unsigned __int16)a1[10];
  v2 = a1[9];
  v3 = 2 * v1;
  v4 = (v1 >> 14) & 2;
  a1[10] = v3;
  v5 = v4 | 1;
  if ( v2 >= 0 )
    v5 = v4;
  v6 = v5;
  a1[9] = 2 * v2;
  if ( (v5 & 2) != 0 )
    a1[9] = (2 * v2) | 1;
  v7 = a1[8];
  v8 = (2 * v5) | 1;
  if ( v7 >= 0 )
    v8 = 2 * v6;
  a1[8] = 2 * v7;
  if ( (v8 & 2) != 0 )
    a1[8] = (2 * v7) | 1;
  v9 = a1[7];
  v10 = 2 * v8;
  v11 = (2 * v8) | 1;
  if ( v9 >= 0 )
    v11 = v10;
  a1[7] = 2 * v9;
  if ( (v11 & 2) != 0 )
    a1[7] = (2 * v9) | 1;
  v12 = a1[6];
  v13 = 2 * v11;
  v14 = (2 * v11) | 1;
  if ( v12 >= 0 )
    v14 = v13;
  a1[6] = 2 * v12;
  if ( (v14 & 2) != 0 )
    a1[6] = (2 * v12) | 1;
  v15 = a1[5];
  v16 = 2 * v14;
  v17 = (2 * v14) | 1;
  if ( v15 >= 0 )
    v17 = v16;
  a1[5] = 2 * v15;
  if ( (v17 & 2) != 0 )
    a1[5] = (2 * v15) | 1;
  v18 = a1[4];
  v19 = 2 * v17;
  v20 = (2 * v17) | 1;
  if ( v18 >= 0 )
    v20 = v19;
  a1[4] = 2 * v18;
  if ( (v20 & 2) != 0 )
    a1[4] = (2 * v18) | 1;
  v21 = a1[3];
  v22 = 2 * v20;
  v23 = (2 * v20) | 1;
  if ( v21 >= 0 )
    v23 = v22;
  a1[3] = 2 * v21;
  if ( (v23 & 2) != 0 )
    a1[3] = (2 * v21) | 1;
  result = 2 * a1[2];
  a1[2] = result;
  if ( (v23 & 1) != 0 )
    a1[2] = result | 1;
  return result;
}
