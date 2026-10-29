/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4368F8
// Address: 0x00000000004368F8

//----- (00000000004368F8) ----------------------------------------------------
__int64 __fastcall sub_4368F8(__int64 a1)
{
  _DWORD *v2; // x1
  __int64 v3; // x3
  unsigned int v4; // w21
  int v5; // w23
  int v6; // w22
  __int64 v7; // x20
  unsigned __int64 v8; // x2
  unsigned int v9; // w24
  unsigned __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x1
  unsigned __int64 v13; // x2
  _DWORD *v15; // x0
  unsigned __int64 v16; // x0
  __int64 v17; // x2
  _DWORD *v18; // x0
  __int64 v19; // x20
  __int64 v20; // x1
  _BYTE *v21; // x0
  int v22; // w1
  int v23; // w22

  v2 = *(_DWORD **)(a1 + 296);
  v3 = *(_QWORD *)(a1 + 304);
  v4 = v2[v3 - 1];
  if ( v3 )
  {
    *(_QWORD *)(a1 + 304) = v3 - 1;
    v5 = v2[v3 - 2];
    if ( v3 == 1 )
    {
      v3 = 0;
      v6 = v5;
    }
    else
    {
      *(_QWORD *)(a1 + 304) = v3 - 2;
      v6 = v2[v3 - 3];
      if ( v3 == 2 )
      {
        v3 = 0;
      }
      else
      {
        v3 -= 3;
        *(_QWORD *)(a1 + 304) = v3;
      }
    }
    v7 = a1 + 296;
    v8 = v3 + 1;
    v9 = v4 + 4;
    if ( (unsigned __int64)(v3 + 1) <= *(_QWORD *)(a1 + 312) )
    {
LABEL_6:
      *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v3) = v9;
      v11 = *(_QWORD *)(v7 + 8);
      v10 = *(_QWORD *)(v7 + 16);
      v12 = v11 + 1;
      *(_QWORD *)(v7 + 8) = v11 + 1;
      v13 = v11 + 2;
      if ( v13 <= v10 )
        goto LABEL_7;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = a1 + 296;
    v8 = 1;
    v5 = *(v2 - 1);
    v6 = v5;
    v9 = v4 + 4;
    if ( *(_QWORD *)(a1 + 312) )
      goto LABEL_6;
  }
  v15 = sub_491288(v7, v2, v8, 4u);
  *(_QWORD *)(a1 + 296) = v15;
  v15[*(_QWORD *)(v7 + 8)] = v9;
  v17 = *(_QWORD *)(v7 + 8);
  v16 = *(_QWORD *)(v7 + 16);
  v12 = v17 + 1;
  *(_QWORD *)(v7 + 8) = v17 + 1;
  v13 = v17 + 2;
  if ( v13 <= v16 )
  {
LABEL_7:
    *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v12) = v5;
    ++*(_QWORD *)(v7 + 8);
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_12;
  }
LABEL_11:
  v18 = sub_491288(v7, *(void **)(a1 + 296), v13, 4u);
  *(_QWORD *)(a1 + 296) = v18;
  v18[(*(_QWORD *)(v7 + 8))++] = v5;
  if ( !v5 )
    goto LABEL_8;
LABEL_12:
  v19 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v20 = *(_QWORD *)(v19 + 8);
  if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(v19 + 16) )
  {
    v21 = sub_491288(v19, *(void **)v19, v20 + 1, 1u);
    *(_QWORD *)v19 = v21;
    v20 = *(_QWORD *)(v19 + 8);
  }
  else
  {
    v21 = *(_BYTE **)v19;
  }
  v21[v20] = -85;
  ++*(_QWORD *)(v19 + 8);
  v22 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v22;
  v23 = v6 - v22 - 4;
  sub_436010(a1, v23);
  sub_436010(a1, HIWORD(v23));
LABEL_8:
  sub_43D210(*(_QWORD *)(a1 + 200), v4, *(_DWORD *)(a1 + 208) - 4 - v4);
  return 0;
}
