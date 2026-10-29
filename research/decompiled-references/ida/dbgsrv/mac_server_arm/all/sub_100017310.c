/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017310
// Address: 0x0000000100017310

//----- (0000000100017310) ----------------------------------------------------
char **__fastcall sub_100017310(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x26
  int v8; // w9
  int v9; // w22
  unsigned __int64 v10; // x27
  __int64 v11; // x24
  unsigned __int64 v12; // x25
  __int64 v13; // x28
  unsigned __int64 v14; // x9
  __int64 v16; // x8
  __int64 v17; // x1
  char *v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  char **v21; // x0
  void *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  void *v26; // [xsp+8h] [xbp-88h] BYREF
  __int64 v27; // [xsp+10h] [xbp-80h]
  __int64 v28; // [xsp+18h] [xbp-78h]
  char *v29; // [xsp+20h] [xbp-70h] BYREF
  __int128 v30; // [xsp+28h] [xbp-68h]

  if ( !a2[1] )
  {
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    sub_10001A184(&v26, a3);
    v22 = v26;
    v23 = v27;
    v24 = v28;
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    sub_100001344((char **)a1);
LABEL_27:
    *(_QWORD *)a1 = v22;
    *(_QWORD *)(a1 + 8) = v23;
    *(_QWORD *)(a1 + 16) = v24;
    v30 = 0u;
    v29 = nullptr;
    sub_10000AF04(&v29);
    v21 = (char **)&v26;
    return sub_10000AF04(v21);
  }
  v6 = a3[1];
  if ( !v6 )
  {
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    sub_10001A184(&v26, a2);
    v22 = v26;
    v23 = v27;
    v24 = v28;
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    sub_100001344((char **)a1);
    goto LABEL_27;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v29 = nullptr;
  v30 = 0u;
  v10 = *(_QWORD *)*a2;
  while ( 2 )
  {
    v11 = v8;
    if ( v6 <= v8 )
    {
      v12 = -1;
      if ( v7 == -1 )
        goto LABEL_20;
    }
    else
    {
      v12 = *(_QWORD *)(*a3 + 80LL * v8);
      if ( v12 == v7 )
        goto LABEL_20;
    }
    v13 = v9;
    v14 = a2[1];
    if ( v14 <= v9 || v10 >= v12 )
    {
LABEL_20:
      v12 = v10;
      goto LABEL_21;
    }
    v16 = *a2;
    while ( 1 )
    {
      v17 = v16 + 80 * v13;
      if ( *(_QWORD *)(v17 + 8) <= v7 )
        goto LABEL_18;
      sub_10000AD1C(&v29, (__int128 *)v17);
      if ( v7 >= v10 )
        *(_QWORD *)&v29[80 * v30 - 80] = v7;
      v16 = *a2;
      v7 = *(_QWORD *)(*a2 + 80 * v13 + 8);
      if ( v7 > v12 )
        break;
      v14 = a2[1];
LABEL_18:
      v13 = ++v9;
      if ( v14 > v9 )
      {
        v10 = *(_QWORD *)(v16 + 80LL * v9);
        if ( v10 < v12 )
          continue;
      }
      goto LABEL_20;
    }
    *(_QWORD *)&v29[80 * v30 - 72] = v12;
LABEL_21:
    if ( a3[1] != v11 )
    {
      sub_10000AD1C(&v29, (__int128 *)(*a3 + 80LL * (int)v11));
      v6 = a3[1];
      v7 = *(_QWORD *)(*a3 + 80LL * (int)v11 + 8);
      v8 = v11 + 1;
      v10 = v12;
      continue;
    }
    break;
  }
  v18 = v29;
  v29 = *(char **)a1;
  v19 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)a1 = v18;
  v20 = v30;
  v30 = v19;
  *(_OWORD *)(a1 + 8) = v20;
  v21 = &v29;
  return sub_10000AF04(v21);
}
