/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459760
// Address: 0x0000000000459760

//----- (0000000000459760) ----------------------------------------------------
__int64 __fastcall sub_459760(__int64 a1, char *a2)
{
  unsigned __int64 v4; // x23
  unsigned __int64 v5; // x22
  __int64 *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 *v9; // x1
  __int64 *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x21
  size_t v13; // x22
  void *v14; // x23
  char *v15; // x0
  __int64 v16; // x3
  unsigned __int64 v17; // x2
  char v18; // w24
  char v19; // w21
  char *v20; // x2
  _QWORD *v22; // x0
  __int64 *v23; // x5
  _QWORD *v24; // x0
  unsigned int *v25; // x1
  int v26; // w2
  char *v27; // x0
  __int64 v28; // x3
  char *v29; // x2
  __int64 *v30; // [xsp+60h] [xbp-10h] BYREF

  sub_452A08(&v30, a2);
  v4 = sub_49E0C0(v30, *(v30 - 3), 3339675911LL);
  v5 = v4 % *(_QWORD *)(a1 + 712);
  v6 = sub_459288((_QWORD *)(a1 + 704), v5, (const void **)&v30, v4);
  if ( v6 && (v7 = *v6, v8 = v7 + 16, v7) )
  {
    v9 = v30;
    v10 = v30 - 3;
    if ( v30 - 3 == std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_4;
  }
  else
  {
    v22 = sub_49E050(0x30u);
    v23 = v30;
    *v22 = 0;
    v22[1] = v23;
    v22[2] = 0;
    v22[3] = 0;
    v22[4] = 0;
    v30 = &std::string::_Rep::_S_empty_rep_storage[3];
    v24 = sub_459638((_QWORD *)(a1 + 704), v5, v4, v22);
    v9 = v30;
    v8 = (__int64)(v24 + 2);
    v10 = v30 - 3;
    if ( v30 - 3 == std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_4;
  }
  if ( &_pthread_key_create )
  {
    v25 = (unsigned int *)(v9 - 1);
    do
      v26 = __ldaxr(v25);
    while ( __stlxr(v26 - 1, v25) );
  }
  else
  {
    v26 = *((_DWORD *)v9 - 2);
    *((_DWORD *)v9 - 2) = v26 - 1;
  }
  if ( v26 <= 0 )
    j__free_0(v10);
LABEL_4:
  v11 = sub_453858(a1, a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = nullptr;
    if ( v13 )
    {
      v14 = sub_491248(*(_QWORD *)(v11 + 8));
      memcpy(v14, *(const void **)v12, v13);
      v18 = *(_BYTE *)(v12 + 24);
      v15 = *(char **)v8;
      v16 = *(_QWORD *)(v8 + 8);
      v17 = v16 + 1;
      v19 = *(_BYTE *)(v12 + 25);
      if ( (unsigned __int64)(v16 + 1) <= *(_QWORD *)(v8 + 16) )
        goto LABEL_7;
    }
    else
    {
      v15 = *(char **)v8;
      v16 = *(_QWORD *)(v8 + 8);
      v17 = v16 + 1;
      v18 = *(_BYTE *)(v12 + 24);
      v19 = *(_BYTE *)(v12 + 25);
      if ( (unsigned __int64)(v16 + 1) <= *(_QWORD *)(v8 + 16) )
      {
LABEL_7:
        v20 = &v15[32 * v16];
        *(_QWORD *)v20 = v14;
        *((_QWORD *)v20 + 1) = v13;
        *((_QWORD *)v20 + 2) = v13;
        v20[24] = v18;
        v20[25] = v19;
        ++*(_QWORD *)(v8 + 8);
        return 0;
      }
    }
    v15 = (char *)sub_491288(v8, v15, v17, 0x20u);
    v16 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)v8 = v15;
    goto LABEL_7;
  }
  v27 = *(char **)v8;
  v28 = *(_QWORD *)(v8 + 8);
  if ( (unsigned __int64)(v28 + 1) > *(_QWORD *)(v8 + 16) )
  {
    v27 = (char *)sub_491288(v8, *(void **)v8, v28 + 1, 0x20u);
    v28 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)v8 = v27;
  }
  v29 = &v27[32 * v28];
  *(_QWORD *)v29 = 0;
  *((_QWORD *)v29 + 1) = 0;
  *((_QWORD *)v29 + 2) = 0;
  v29[24] = 0;
  v29[25] = 0;
  ++*(_QWORD *)(v8 + 8);
  return 0;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
