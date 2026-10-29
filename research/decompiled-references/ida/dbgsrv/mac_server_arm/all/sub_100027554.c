/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027554
// Address: 0x0000000100027554

//----- (0000000100027554) ----------------------------------------------------
__int64 __fastcall sub_100027554(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // w8
  __int64 v8; // x1
  __int64 v9; // x8
  char *v10; // x1
  __int64 v11; // x20
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x8
  size_t v15; // x20
  __int64 v16; // x22
  __int64 v17; // x8
  char *v18; // x1
  __int64 v19; // x0
  __int64 v21; // x20
  __int64 v22; // x9
  char *v23; // x1
  size_t v24; // x2
  char v25; // w8
  char v26; // w9
  char v27; // w22
  __int64 v28; // x8
  char *v29; // x1
  __int64 v31; // x9
  char *v32; // x1
  size_t v33; // x2
  __int64 v34; // x8
  size_t v35; // x23
  char v36; // w9
  char v37; // w10
  __int64 v38; // x21
  _QWORD *v39; // x1
  __int64 v40; // x8
  __int64 v41; // x0
  char *v42; // x1

  v7 = *(_DWORD *)a2;
  if ( *(int *)a2 > 2 )
  {
    if ( (unsigned int)(v7 - 3) < 2 )
    {
      v8 = *(_QWORD *)(a2 + 16);
      if ( a3 && *(_DWORD *)v8 == 1 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( *(_QWORD *)(v9 + 8) )
          v10 = *(char **)v9;
        else
          v10 = &byte_100075A30;
        v19 = sub_100027884(a1, v10);
      }
      else
      {
        v19 = sub_100027554(a1, v8, 0, 0);
      }
      v21 = v19;
      v34 = *(_QWORD *)(a2 + 8);
      v35 = *(_QWORD *)(v34 + 8);
      sub_10002CAD4(*(_QWORD **)(a1 + 200), *(const void **)v34, v35);
      *(_DWORD *)(a1 + 208) += v35;
      if ( a3 )
        v36 = -5;
      else
        v36 = -4;
      if ( a3 )
        v37 = -1;
      else
        v37 = -2;
      if ( *(_DWORD *)a2 == 3 )
        v27 = v36;
      else
        v27 = v37;
      goto LABEL_55;
    }
    if ( v7 == 5 )
    {
      v21 = sub_100027554(a1, *(_QWORD *)(a2 + 16), 0, 0);
      v22 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( v22 )
        v23 = **(char ***)(a2 + 8);
      else
        v23 = &byte_100075A30;
      if ( v22 )
        v24 = v22 - 1;
      else
        v24 = 0;
      sub_1000219A4(a1, v23, v24);
      if ( a3 )
        v25 = -13;
      else
        v25 = -14;
      if ( a4 > 0 )
        v26 = -11;
      else
        v26 = -10;
      if ( a4 )
        v27 = v26;
      else
        v27 = v25;
      goto LABEL_55;
    }
LABEL_60:
    if ( under_debugger == 1 )
      __break(1u);
    interr(273);
    return sub_100027884(v41, v42);
  }
  if ( v7 == 1 )
  {
    v28 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(v28 + 8) )
      v29 = *(char **)v28;
    else
      v29 = &byte_100075A30;
    return sub_100026DA4(a1, v29, a3, a4);
  }
  if ( v7 != 2 )
    goto LABEL_60;
  *(_BYTE *)(a1 + 212) = -86;
  v11 = *(_QWORD *)(a1 + 200);
  v12 = *(_QWORD **)v11;
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
  {
    v12 = qvector_reserve(*(_QWORD **)(a1 + 200), v12, v13 + 1, 1u);
    *(_QWORD *)v11 = v12;
    v13 = *(_QWORD *)(v11 + 8);
  }
  *((_BYTE *)v12 + v13) = -86;
  ++*(_QWORD *)(v11 + 8);
  ++*(_DWORD *)(a1 + 208);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(v14 + 8);
  sub_10002CAD4(*(_QWORD **)(a1 + 200), *(const void **)v14, v15);
  *(_DWORD *)(a1 + 208) += v15;
  v16 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)v16 == 5 )
  {
    v21 = sub_100027554(a1, *(_QWORD *)(v16 + 16), 0, 0);
    v31 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
    if ( v31 )
      v32 = **(char ***)(v16 + 8);
    else
      v32 = &byte_100075A30;
    if ( v31 )
      v33 = v31 - 1;
    else
      v33 = 0;
    sub_1000219A4(a1, v32, v33);
    v27 = -9;
    goto LABEL_55;
  }
  if ( *(_DWORD *)v16 != 1 )
  {
    v21 = sub_100027554(a1, *(_QWORD *)(a2 + 16), 0, 0);
    v27 = -92;
LABEL_55:
    *(_BYTE *)(a1 + 212) = v27;
    v38 = *(_QWORD *)(a1 + 200);
    v39 = *(_QWORD **)v38;
    v40 = *(_QWORD *)(v38 + 8);
    if ( *(_QWORD *)(v38 + 16) < (unsigned __int64)(v40 + 1) )
    {
      v39 = qvector_reserve(*(_QWORD **)(a1 + 200), v39, v40 + 1, 1u);
      *(_QWORD *)v38 = v39;
      v40 = *(_QWORD *)(v38 + 8);
    }
    *((_BYTE *)v39 + v40) = v27;
    ++*(_QWORD *)(v38 + 8);
    ++*(_DWORD *)(a1 + 208);
    return v21;
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( *(_QWORD *)(v17 + 8) )
    v18 = *(char **)v17;
  else
    v18 = &byte_100075A30;
  return sub_100027144(a1, v18, *(_DWORD *)(a2 + 24));
}
// 100027881: variable 'v41' is possibly undefined
// 100027881: variable 'v42' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
