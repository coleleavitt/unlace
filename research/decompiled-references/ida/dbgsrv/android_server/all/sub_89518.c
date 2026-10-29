/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89518
// Address: 0x0000000000089518

//----- (0000000000089518) ----------------------------------------------------
__int64 __fastcall sub_89518(__int64 a1, __int64 a2)
{
  __int64 v2; // x12
  int *v3; // x13
  __int64 v5; // x24
  int *v6; // x27
  __int64 v7; // x14
  __int64 v8; // x8
  __int64 *v9; // x9
  __int64 v10; // x29
  unsigned __int64 v11; // x20
  __int64 v12; // x28
  int v13; // w23
  __int64 v14; // x25
  __int64 v15; // x26
  int v16; // w22
  int v17; // w21
  __int64 v18; // x21
  _QWORD *v19; // x0
  __int64 v20; // x8
  __int64 v22; // [xsp+8h] [xbp-98h]
  int *v24; // [xsp+18h] [xbp-88h]
  __int64 v25; // [xsp+20h] [xbp-80h]
  __int64 v26; // [xsp+28h] [xbp-78h]
  unsigned __int64 v27; // [xsp+30h] [xbp-70h]
  unsigned __int64 v28; // [xsp+38h] [xbp-68h]

  v2 = *(_QWORD *)(a1 + 4216);
  if ( !(4 * v2) )
    return 0;
  v3 = *(int **)(a1 + 4208);
  v5 = a1 + a2 + 48;
  v6 = v3;
  v22 = a1 + 4152;
  v28 = *(_QWORD *)(a1 + 4240) - a2;
  while ( 1 )
  {
    v7 = *v6;
    v8 = **(_QWORD **)(a1 + 24);
    v9 = (__int64 *)(v8 + 80 * v7);
    v10 = *v9;
    v24 = v3;
    v25 = v2;
    v26 = v7;
    v27 = v9[1];
    if ( v28 >= v27 )
      v11 = v9[1];
    else
      v11 = v28;
    if ( v9[4] )
    {
      v12 = *(_QWORD *)(v8 + 80 * v7 + 24);
      if ( !v11 )
        break;
      goto LABEL_10;
    }
    v12 = 0;
    if ( !v11 )
      break;
LABEL_10:
    v13 = *(_DWORD *)(a1 + 32);
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)(v5 + v14);
      v17 = *(unsigned __int8 *)(v10 + v14);
      if ( (v13 & 1) == 0 )
      {
        LOBYTE(v16) = toupper(v16);
        LOBYTE(v17) = toupper(v17);
      }
      if ( v12 )
        break;
LABEL_22:
      if ( (unsigned __int8)v16 != (unsigned __int8)v17 )
        goto LABEL_26;
LABEL_23:
      v15 = (int)++v14;
      if ( v11 <= (int)v14 )
        goto LABEL_24;
    }
    if ( (v13 & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v12 + v15) & (unsigned __int8)(v16 ^ v17)) != 0 )
        goto LABEL_26;
      goto LABEL_23;
    }
    if ( v12 == 255 )
    {
      if ( (_BYTE)v17 == 0xFF )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( (unsigned __int8)v16 == (unsigned __int8)v17 || !*(_BYTE *)(v12 + v15) )
      goto LABEL_23;
LABEL_26:
    v3 = v24;
    v2 = v25;
LABEL_27:
    if ( ++v6 == &v3[v2] )
      return 0;
  }
LABEL_24:
  v18 = *(_QWORD *)(a1 + 4144) + a2;
  if ( v28 < v27 )
  {
    v19 = qalloc_or_throw(40);
    v19[4] = v11;
    v19[2] = v18;
    v19[3] = v26;
    *v19 = v22;
    v19[1] = *(_QWORD *)(a1 + 4160);
    **(_QWORD **)(a1 + 4160) = v19;
    v20 = *(_QWORD *)(a1 + 4168);
    v3 = *(int **)(a1 + 4208);
    v2 = *(_QWORD *)(a1 + 4216);
    *(_QWORD *)(a1 + 4160) = v19;
    *(_QWORD *)(a1 + 4168) = v20 + 1;
    goto LABEL_27;
  }
  **(_QWORD **)(a1 + 8) = v18;
  return 1;
}
