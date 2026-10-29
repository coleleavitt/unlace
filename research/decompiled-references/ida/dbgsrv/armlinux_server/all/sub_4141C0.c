/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4141C0
// Address: 0x00000000004141C0

//----- (00000000004141C0) ----------------------------------------------------
__int64 __fastcall sub_4141C0(__int64 a1, __int64 a2, char *a3)
{
  __int64 v5; // x19
  __int64 v6; // x20
  _QWORD *v7; // x0
  __int64 v8; // x3
  unsigned __int64 v9; // x20
  _QWORD *v10; // x23
  void *v11; // x25
  char *v12; // x1
  unsigned __int64 v13; // x0
  __int64 v14; // x4
  unsigned __int64 v15; // x2
  _QWORD *v16; // x23
  unsigned __int64 *v17; // x25
  unsigned __int64 *v18; // x0
  unsigned __int64 *v19; // x19
  __int64 v20; // x26
  _QWORD *v21; // x23
  unsigned __int64 *v22; // x1
  unsigned __int64 *v23; // x20
  _BOOL4 v24; // w0
  size_t v25; // x0
  size_t v26; // x20
  unsigned __int64 v28; // x25
  void *v29; // x0
  void *v30; // x0
  unsigned __int64 *v31; // x0
  _QWORD *v32; // x0
  void *v33; // [xsp+50h] [xbp-10h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = **(_QWORD **)(a1 + 24);
  v7 = *(_QWORD **)v5;
  v8 = *(_QWORD *)(v5 + 8);
  v9 = a2 + v6;
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v5 + 16) )
  {
    v7 = sub_491288(v5, *(void **)v5, v8 + 1, 8u);
    v8 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)v5 = v7;
  }
  v7[v8] = v9;
  ++*(_QWORD *)(v5 + 8);
  v10 = *(_QWORD **)(a1 + 32);
  v11 = sub_4911C0(a3);
  v12 = (char *)v10[3];
  v33 = v11;
  if ( v12 > (char *)&v33 )
  {
    v15 = v10[4] + 1LL;
    if ( v15 <= v10[5] )
      goto LABEL_6;
    goto LABEL_27;
  }
  v13 = v10[5];
  v14 = v10[4];
  v15 = v14 + 1;
  if ( &v33 < (void **)&v12[8 * v13] )
  {
    if ( v13 < v15 )
    {
      v32 = sub_491288((__int64)(v10 + 3), v12, v15, 8u);
      v10[3] = v32;
      v32[v10[4]] = v11;
    }
    else
    {
      *(_QWORD *)&v12[8 * v14] = v11;
    }
    ++v10[4];
    v16 = *(_QWORD **)(a1 + 24);
    v17 = v16 + 9;
    v18 = (unsigned __int64 *)v16[10];
    if ( v18 )
      goto LABEL_7;
LABEL_31:
    v19 = v17;
LABEL_12:
    v20 = (__int64)v19;
    v19 = (unsigned __int64 *)sub_49E050(0x40u);
    v21 = v16 + 8;
    v19[4] = v9;
    v19[5] = 0;
    v19[6] = 0;
    v19[7] = 0;
    v23 = sub_414078(v21, v20, v19 + 4);
    if ( v22 )
    {
      v24 = v17 == v22;
      if ( v23 )
        v24 = 1;
      if ( !v24 )
        LOBYTE(v24) = v19[4] < v22[4];
      sub_49F830(v24, (__int64)v19, v22, v17);
      ++v21[5];
    }
    else
    {
      v30 = (void *)v19[5];
      if ( v30 )
      {
        v19[6] = 0;
        j__free(v30);
      }
      v31 = v19;
      v19 = v23;
      j__free_0(v31);
    }
    goto LABEL_18;
  }
  if ( v15 > v13 )
LABEL_27:
    v10[3] = sub_491288((__int64)(v10 + 3), v12, v15, 8u);
LABEL_6:
  *(_QWORD *)(v10[3] + 8LL * v10[4]++) = v11;
  v16 = *(_QWORD **)(a1 + 24);
  v17 = v16 + 9;
  v18 = (unsigned __int64 *)v16[10];
  if ( !v18 )
    goto LABEL_31;
LABEL_7:
  v19 = v17;
  do
  {
    while ( v9 <= v18[4] )
    {
      v19 = v18;
      v18 = (unsigned __int64 *)v18[2];
      if ( !v18 )
        goto LABEL_10;
    }
    v18 = (unsigned __int64 *)v18[3];
  }
  while ( v18 );
LABEL_10:
  if ( v17 == v19 || v9 < v19[4] )
    goto LABEL_12;
LABEL_18:
  if ( a3 && (v25 = strlen(a3), (v26 = v25) != 0) )
  {
    v28 = v25 + 1;
    v29 = (void *)v19[5];
    if ( v28 > v19[7] )
    {
      v29 = sub_491288((__int64)(v19 + 5), (void *)v19[5], v28, 1u);
      v19[5] = (unsigned __int64)v29;
    }
    v19[6] = v28;
    memmove(v29, a3, v26);
    *(_BYTE *)(v19[5] + v26) = 0;
  }
  else
  {
    v19[6] = 0;
  }
  if ( !(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) % 0x2710uLL) )
    sub_40AAF0(*(_QWORD *)(a1 + 16), (__int64)&byte_4B31F0);
  return 0;
}
// 4141C0: could not find valid save-restore pair for x26
// 414310: variable 'v22' is possibly undefined
// 4B31F0: using guessed type char byte_4B31F0;
