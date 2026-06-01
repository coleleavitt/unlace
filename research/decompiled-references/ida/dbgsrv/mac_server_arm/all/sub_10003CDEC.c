/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CDEC
// Address: 0x000000010003CDEC

//----- (000000010003CDEC) ----------------------------------------------------
__int64 __fastcall sub_10003CDEC(unsigned __int8 *a1, __int64 a2)
{
  char *v4; // x0
  _QWORD **v5; // x21
  __int64 v6; // x22
  _QWORD *v7; // x23
  _QWORD *v8; // x26
  __int64 **v9; // x24
  _QWORD *v10; // x9
  __int64 *v11; // x1
  __int64 v12; // x8
  _QWORD *v13; // x8
  _QWORD *v14; // x8
  bool v15; // zf
  int v16; // w8
  _QWORD *v17; // x20
  _QWORD *v18; // x20
  _QWORD *v19; // x21
  _QWORD *v20; // t1
  _QWORD *v22; // x9
  _QWORD *v23; // x8
  void *v24; // x0
  __int64 v25; // [xsp+0h] [xbp-70h] BYREF
  __int64 v26; // [xsp+8h] [xbp-68h] BYREF
  __int64 *v27; // [xsp+10h] [xbp-60h] BYREF

  if ( *a1 != 5 )
    goto LABEL_21;
  v4 = (char *)operator new(0x20u);
  v5 = (_QWORD **)v4;
  v6 = *((_QWORD *)a1 + 1);
  *((_QWORD *)v4 + 1) = 0;
  v7 = v4 + 8;
  *((_QWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = v4 + 8;
  v8 = *(_QWORD **)v6;
  if ( *(_QWORD *)v6 == v6 + 8 )
  {
    *((_DWORD *)v4 + 6) = 1;
    *((_DWORD *)v4 + 7) = *(_DWORD *)(v6 + 28);
    goto LABEL_19;
  }
  do
  {
    v9 = (__int64 **)sub_10003C74C(v5, v7, &v26, &v25, (__int64)(v8 + 4));
    if ( *v9 )
    {
      v10 = (_QWORD *)v8[1];
      if ( !v10 )
        goto LABEL_13;
    }
    else
    {
      sub_10003C9AC((__int64)v5, (__int64)(v8 + 4), (__int64)&v27);
      v12 = v26;
      v11 = v27;
      *v27 = 0;
      v11[1] = 0;
      v11[2] = v12;
      *v9 = v11;
      v13 = (_QWORD *)**v5;
      if ( v13 )
      {
        *v5 = v13;
        v11 = *v9;
      }
      sub_10000B394(v5[1], v11);
      v5[2] = (_QWORD *)((char *)v5[2] + 1);
      v10 = (_QWORD *)v8[1];
      if ( !v10 )
      {
        do
        {
LABEL_13:
          v14 = (_QWORD *)v8[2];
          v15 = *v14 == (_QWORD)v8;
          v8 = v14;
        }
        while ( !v15 );
        goto LABEL_4;
      }
    }
    do
    {
      v14 = v10;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 );
LABEL_4:
    v8 = v14;
  }
  while ( v14 != (_QWORD *)(v6 + 8) );
  v16 = *a1;
  *((_DWORD *)v5 + 6) = 1;
  *((_DWORD *)v5 + 7) = *(_DWORD *)(v6 + 28);
  if ( v16 == 7 )
  {
    v24 = *((void **)a1 + 1);
    if ( v24 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v24);
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  else if ( v16 == 5 )
  {
    v6 = *((_QWORD *)a1 + 1);
LABEL_19:
    sub_100031978(v6, a1);
  }
  *a1 = 5;
  *((_QWORD *)a1 + 1) = v5;
LABEL_21:
  v17 = *(_QWORD **)(a2 + 8);
  v20 = (_QWORD *)*v17;
  v18 = v17 + 1;
  v19 = v20;
  if ( v20 != v18 )
  {
    do
    {
      sub_10003D3A4(*((_QWORD **)a1 + 1), v19 + 4);
      v22 = (_QWORD *)v19[1];
      if ( v22 )
      {
        do
        {
          v23 = v22;
          v22 = (_QWORD *)*v22;
        }
        while ( v22 );
      }
      else
      {
        do
        {
          v23 = (_QWORD *)v19[2];
          v15 = *v23 == (_QWORD)v19;
          v19 = v23;
        }
        while ( !v15 );
      }
      v19 = v23;
    }
    while ( v23 != v18 );
  }
  return 0;
}
