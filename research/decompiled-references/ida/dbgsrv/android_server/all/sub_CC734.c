/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CC734
// Address: 0x00000000000CC734

//----- (00000000000CC734) ----------------------------------------------------
__int64 __fastcall sub_CC734(__int64 a1, __int64 a2)
{
  unsigned int v2; // w16
  __int64 v3; // x14
  __int64 v4; // x8
  unsigned int v5; // w17
  unsigned int v6; // w18
  __int64 v7; // x13
  unsigned int v8; // w9
  unsigned __int8 *v9; // x12
  int v10; // w3
  __int64 v11; // x10
  __int64 v12; // x11
  unsigned __int8 v13; // w2
  unsigned int v14; // w15
  unsigned __int8 v15; // w3
  unsigned __int8 *v16; // x5
  __int64 v17; // x5
  __int64 v18; // x4
  unsigned __int8 *v19; // x6
  unsigned __int8 *v20; // x6
  unsigned __int8 *v21; // x6
  unsigned __int8 *v22; // x6
  int v23; // w7
  bool v24; // cf
  int v25; // w6
  bool v26; // zf
  int v27; // w4
  int v28; // w4

  v2 = *(_DWORD *)(a1 + 188);
  v3 = *(unsigned int *)(a1 + 172);
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_DWORD *)(a1 + 208);
  v6 = *(_DWORD *)(a1 + 80) - 262;
  v7 = *(int *)(a1 + 184);
  v8 = *(_DWORD *)(a1 + 180);
  v9 = (unsigned __int8 *)(v4 + v3);
  if ( (unsigned int)v3 <= v6 )
    v10 = *(_DWORD *)(a1 + 80) - 262;
  else
    v10 = *(_DWORD *)(a1 + 172);
  v11 = *(_QWORD *)(a1 + 112);
  v12 = *(unsigned int *)(a1 + 88);
  v13 = v9[(int)v7 - 1];
  v14 = v10 - v6;
  v15 = v9[v7];
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 204) )
    v2 >>= 2;
  if ( v5 > v8 )
    v5 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    v16 = (unsigned __int8 *)(v4 + (unsigned int)a2);
    if ( v16[(int)v7] != v15 || v16[(int)v7 - 1] != v13 || *v16 != *v9 || v16[1] != v9[1] )
      goto LABEL_33;
    v17 = 0;
    v18 = v4 + 5 + (unsigned int)a2;
    while ( 1 )
    {
      v19 = &v9[v17];
      if ( v9[v17 + 3] != *(unsigned __int8 *)(v18 + v17 - 2) )
      {
        v27 = (_DWORD)v19 + 3;
        goto LABEL_30;
      }
      if ( v19[4] != *(unsigned __int8 *)(v18 + v17 - 1) )
      {
        v27 = (_DWORD)v9 + v17 + 4;
        goto LABEL_30;
      }
      v20 = &v9[v17];
      if ( v9[v17 + 5] != *(unsigned __int8 *)(v18 + v17) )
      {
        v27 = (_DWORD)v20 + 5;
        goto LABEL_30;
      }
      if ( v20[6] != *(unsigned __int8 *)(v18 + v17 + 1) )
      {
        v27 = (_DWORD)v9 + v17 + 6;
        goto LABEL_30;
      }
      v21 = &v9[v17];
      if ( v9[v17 + 7] != *(unsigned __int8 *)(v18 + v17 + 2) )
      {
        v27 = (_DWORD)v21 + 7;
        goto LABEL_30;
      }
      if ( v21[8] != *(unsigned __int8 *)(v18 + v17 + 3) )
      {
        v27 = (_DWORD)v9 + v17 + 8;
        goto LABEL_30;
      }
      v22 = &v9[v17];
      if ( v9[v17 + 9] != *(unsigned __int8 *)(v18 + v17 + 4) )
        break;
      v23 = v22[10];
      v24 = v22 + 10 >= v9 + 258;
      v25 = v17 + 8;
      if ( !v24 )
      {
        v26 = v23 == *(unsigned __int8 *)(v18 + v17 + 5);
        v17 += 8;
        if ( v26 )
          continue;
      }
      v27 = (_DWORD)v9 + v25 + 2;
      goto LABEL_30;
    }
    v27 = (_DWORD)v22 + 9;
LABEL_30:
    v28 = v27 - (_DWORD)v9;
    if ( v28 <= (int)v7 )
      goto LABEL_33;
    *(_DWORD *)(a1 + 176) = a2;
    if ( v28 >= (int)v5 )
      break;
    v13 = v9[v28 - 1];
    v15 = v9[v28];
    LODWORD(v7) = v28;
LABEL_33:
    LODWORD(a2) = *(unsigned __int16 *)(v11 + 2 * (a2 & v12));
    if ( v14 < (unsigned int)a2 )
    {
      if ( --v2 )
        continue;
    }
    goto LABEL_35;
  }
  LODWORD(v7) = v28;
LABEL_35:
  if ( (unsigned int)v7 <= v8 )
    return (unsigned int)v7;
  else
    return v8;
}
