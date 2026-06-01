/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88B58
// Address: 0x0000000000088B58

//----- (0000000000088B58) ----------------------------------------------------
__int64 __fastcall sub_88B58(__int64 a1, __int64 a2)
{
  __int64 v2; // x13
  int *v3; // x14
  __int64 v4; // x21
  int *v5; // x27
  __int64 v6; // x15
  __int64 v7; // x10
  __int64 *v8; // x8
  unsigned __int64 v9; // x20
  __int64 v10; // x11
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x26
  __int64 v15; // x28
  __int64 v16; // x29
  __int64 v17; // x19
  int v18; // w25
  int v19; // w22
  int v20; // w21
  __int64 v21; // x8
  __int64 v22; // x19
  _QWORD *v23; // x0
  __int64 v24; // x8
  __int64 v26; // [xsp+0h] [xbp-A0h]
  __int64 v27; // [xsp+8h] [xbp-98h]
  int *v29; // [xsp+18h] [xbp-88h]
  __int64 v30; // [xsp+20h] [xbp-80h]
  __int64 v31; // [xsp+28h] [xbp-78h]
  unsigned __int64 v33; // [xsp+38h] [xbp-68h]

  v2 = *(_QWORD *)(a1 + 4216);
  if ( !(4 * v2) )
    return 0;
  v3 = *(int **)(a1 + 4208);
  v4 = a1;
  v5 = v3;
  v26 = a1 + a2 + 49;
  v27 = a1 + 4152;
  v33 = a2 - *(_QWORD *)(a1 + 4240);
  while ( 1 )
  {
    v6 = *v5;
    v7 = **(_QWORD **)(v4 + 24);
    v31 = v6;
    v8 = (__int64 *)(v7 + 80 * v6);
    v9 = v8[1];
    v10 = v8[4];
    v11 = *v8;
    v29 = v3;
    v30 = v2;
    if ( v33 >= v9 )
      v12 = v9;
    else
      v12 = v33;
    v13 = v9 - v12;
    if ( v10 )
    {
      v14 = *(_QWORD *)(v7 + 80 * v6 + 24) + v13;
      if ( !v12 )
        break;
      goto LABEL_10;
    }
    v14 = 0;
    if ( !v12 )
      break;
LABEL_10:
    v15 = v11 + v13;
    v16 = 0;
    v17 = 0;
    v18 = *(_DWORD *)(a1 + 32);
    while ( 1 )
    {
      v19 = *(unsigned __int8 *)(v26 - v12 - 1 + v16);
      v20 = *(unsigned __int8 *)(v15 + v16);
      if ( (v18 & 1) == 0 )
      {
        LOBYTE(v19) = toupper(v19);
        LOBYTE(v20) = toupper(v20);
      }
      if ( v14 )
        break;
LABEL_22:
      if ( (unsigned __int8)v19 != (unsigned __int8)v20 )
        goto LABEL_26;
LABEL_23:
      v17 = (int)++v16;
      if ( v12 <= (int)v16 )
        goto LABEL_24;
    }
    if ( (v18 & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v14 + v17) & (unsigned __int8)(v19 ^ v20)) != 0 )
        goto LABEL_26;
      goto LABEL_23;
    }
    if ( v14 == 255 )
    {
      if ( (_BYTE)v20 == 0xFF )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( (unsigned __int8)v19 == (unsigned __int8)v20 || !*(_BYTE *)(v14 + v17) )
      goto LABEL_23;
LABEL_26:
    v4 = a1;
    v3 = v29;
    v2 = v30;
LABEL_27:
    if ( ++v5 == &v3[v2] )
      return 0;
  }
LABEL_24:
  v4 = a1;
  v21 = *(_QWORD *)(a1 + 4144) + a2;
  if ( v33 < v9 )
  {
    v22 = v21 - v9;
    v23 = qalloc_or_throw(40);
    v23[4] = v12;
    v23[2] = v22;
    v23[3] = v31;
    *v23 = v27;
    v23[1] = *(_QWORD *)(a1 + 4160);
    **(_QWORD **)(a1 + 4160) = v23;
    v24 = *(_QWORD *)(a1 + 4168);
    v3 = *(int **)(a1 + 4208);
    v2 = *(_QWORD *)(a1 + 4216);
    *(_QWORD *)(a1 + 4160) = v23;
    *(_QWORD *)(a1 + 4168) = v24 + 1;
    goto LABEL_27;
  }
  **(_QWORD **)(a1 + 8) = v21 - v12;
  return 1;
}
