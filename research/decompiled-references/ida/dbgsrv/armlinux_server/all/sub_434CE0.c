/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434CE0
// Address: 0x0000000000434CE0

//----- (0000000000434CE0) ----------------------------------------------------
__int64 __fastcall sub_434CE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int16 v4; // w21
  __int64 v5; // x1
  __int16 v6; // w20
  __int64 v7; // x0
  char *v8; // x22
  const char **v9; // x0
  const char *v10; // x1
  unsigned int v11; // w0
  __int16 v12; // w20
  _WORD *v13; // x0
  __int64 v14; // x3
  __int64 v16; // x0
  __int64 v17; // x21
  __int64 v18; // x1
  _BYTE *v19; // x0
  char v20; // w2
  int v21; // w0
  int v22; // w0

  v3 = *(_QWORD *)(a1 + 320);
  v2 = *(_QWORD *)(a1 + 328);
  v4 = *(_WORD *)(v3 + 2 * v2 - 2);
  if ( v2 )
    *(_QWORD *)(a1 + 328) = v2 - 1;
  v5 = *(_QWORD *)(a1 + 160);
  v6 = v4;
  v7 = 24LL * *(_QWORD *)(a1 + 168) - 24;
  if ( *(_QWORD *)(v5 + v7 + 8) )
  {
    v8 = *(char **)(v5 + v7);
    v9 = sub_43E0A8(v8);
    if ( v9 )
      goto LABEL_5;
LABEL_15:
    v16 = sub_43DE50(*(__int64 **)(a1 + 104), v8);
    if ( v16 != -1 && *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v16) + 24LL) <= v4 )
      goto LABEL_29;
    goto LABEL_11;
  }
  v8 = (char *)&qword_4B2D48;
  v9 = sub_43E0A8((char *)&qword_4B2D48);
  if ( !v9 )
    goto LABEL_15;
LABEL_5:
  v10 = v9[2];
  v11 = (unsigned __int8)v10[v4];
  if ( v11 > 6 )
  {
    if ( v11 == 8 )
      goto LABEL_11;
    if ( v11 >= 8 )
    {
      if ( v11 != 9 )
      {
        if ( v11 == 10 )
          goto LABEL_11;
        goto LABEL_29;
      }
      if ( *(unsigned __int8 *)(a1 + 212) == 211 )
        goto LABEL_11;
      v17 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -47;
      v18 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v19 = sub_491288(v17, *(void **)v17, v18 + 1, 1u);
        *(_QWORD *)v17 = v19;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v19 = *(_BYTE **)v17;
      }
      v20 = -47;
LABEL_25:
      v19[v18] = v20;
      ++*(_QWORD *)(v17 + 8);
      ++*(_DWORD *)(a1 + 208);
      goto LABEL_11;
    }
    v22 = *(unsigned __int8 *)(a1 + 212);
    if ( v22 != 168 && v22 != 191 )
    {
      v17 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -65;
      v18 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v19 = sub_491288(v17, *(void **)v17, v18 + 1, 1u);
        *(_QWORD *)v17 = v19;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v19 = *(_BYTE **)v17;
      }
      v20 = -65;
      goto LABEL_25;
    }
  }
  else if ( v11 < 5 )
  {
    if ( v11 != 3 )
    {
      if ( v11 > 3 )
      {
        v6 = v4 - 1;
        if ( v10[v4 + 1] )
          v6 = v4;
        goto LABEL_11;
      }
      if ( v11 == 2 )
      {
        sub_434930(a1);
        goto LABEL_11;
      }
LABEL_29:
      sub_486A58(0, v8);
      return sub_4869C8(56);
    }
    v21 = *(unsigned __int8 *)(a1 + 212);
    if ( v21 != 208 && v21 != 210 )
    {
      v17 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -48;
      v18 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v19 = sub_491288(v17, *(void **)v17, v18 + 1, 1u);
        *(_QWORD *)v17 = v19;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v19 = *(_BYTE **)v17;
      }
      v20 = -48;
      goto LABEL_25;
    }
  }
LABEL_11:
  v12 = v6 + 1;
  v13 = *(_WORD **)(a1 + 320);
  v14 = *(_QWORD *)(a1 + 328);
  if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 336) )
  {
    v13 = sub_491288(a1 + 320, *(void **)(a1 + 320), v14 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v13;
    v14 = *(_QWORD *)(a1 + 328);
  }
  v13[v14] = v12;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
