/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_insn
// Address: 0x0007480C

//----- (0007480C) --------------------------------------------------------
int __fastcall deserialize_insn(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v3; // r5
  char *v4; // r1
  char v5; // r0
  char v6; // r2
  char *v7; // r1
  int v8; // r7
  char v9; // r6
  _BYTE *v10; // r0
  char *v11; // r1
  char v12; // r2
  char *v13; // r1
  char v14; // r2
  char *v15; // r1
  char v16; // r2
  char *v17; // r1
  char v18; // r2
  char *v19; // r0
  char v20; // r1
  _DWORD *v21; // r5
  char *v22; // r0
  char v23; // r1
  char *v24; // r0
  char v25; // r1
  char *v26; // r0
  char v27; // r1
  char *v28; // r0
  char v29; // r1
  int result; // r0
  _DWORD *v31; // [sp+Ch] [bp-4h]

  v3 = a1;
  *a1 = unpack_dq(a2, a2[1]) - 1;
  v3[1] = unpack_dq(a2, a2[1]) - 1;
  v3[2] = unpack_dq(a2, a2[1]) - 1;
  *((_WORD *)v3 + 6) = unpack_dw(a2, a2[1]);
  *((_WORD *)v3 + 7) = unpack_dw(a2, a2[1]);
  v3[4] = unpack_dd(a2, a2[1]);
  v4 = (char *)*a2;
  v5 = 0;
  if ( *a2 >= a2[1] )
    v6 = 0;
  else
    v6 = *v4++;
  *a2 = (unsigned int)v4;
  *((_BYTE *)v3 + 20) = v6;
  v7 = (char *)*a2;
  if ( *a2 < a2[1] )
    v5 = *v7++;
  *a2 = (unsigned int)v7;
  *((_BYTE *)v3 + 21) = v5;
  *((_WORD *)v3 + 11) = unpack_dw(a2, a2[1]);
  v8 = 0;
  v9 = 0;
  v31 = v3;
  do
  {
    v10 = &v3[v8];
    LOBYTE(v3[v8 + 6]) = v9;
    v11 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v12 = 0;
    else
      v12 = *v11++;
    *a2 = (unsigned int)v11;
    v10[25] = v12;
    v13 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v14 = 0;
    else
      v14 = *v13++;
    *a2 = (unsigned int)v13;
    v10[26] = v14;
    v15 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v16 = 0;
    else
      v16 = *v15++;
    *a2 = (unsigned int)v15;
    v10[27] = v16;
    v17 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v18 = 0;
    else
      v18 = *v17++;
    *a2 = (unsigned int)v17;
    v10[28] = v18;
    v19 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v20 = 0;
    else
      v20 = *v19++;
    *a2 = (unsigned int)v19;
    v21 = &v3[v8];
    *((_BYTE *)v21 + 29) = v20;
    *((_WORD *)v21 + 15) = unpack_dw(a2, a2[1]);
    v21[8] = unpack_dq(a2, a2[1]) - 1;
    v21[9] = unpack_dq(a2, a2[1]) - 1;
    v21[10] = unpack_dq(a2, a2[1]) - 1;
    v22 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v23 = 0;
    else
      v23 = *v22++;
    *a2 = (unsigned int)v22;
    *((_BYTE *)v21 + 44) = v23;
    v24 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v25 = 0;
    else
      v25 = *v24++;
    *a2 = (unsigned int)v24;
    *((_BYTE *)v21 + 45) = v25;
    v26 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v27 = 0;
    else
      v27 = *v26++;
    *a2 = (unsigned int)v26;
    *((_BYTE *)v21 + 46) = v27;
    v28 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v29 = 0;
    else
      v29 = *v28++;
    *a2 = (unsigned int)v28;
    result = 47;
    *((_BYTE *)v21 + 47) = v29;
    v8 += 6;
    ++v9;
    v3 = v31;
  }
  while ( v8 != 48 );
  return result;
}
