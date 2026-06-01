/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414990
// Address: 0x0000000000414990

//----- (0000000000414990) ----------------------------------------------------
_QWORD *__fastcall sub_414990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x21
  size_t v9; // x20
  __int64 v10; // x1
  __int64 v11; // x20
  _QWORD *v12; // x24
  _QWORD *v13; // x19
  size_t v14; // x22
  __int64 v15; // x1
  void *v17; // x0
  void *v18; // x0
  const void *v19; // x1

  v8 = sub_49E050(0x40u);
  v9 = *(_QWORD *)(a2 + 48);
  v8[4] = *(_QWORD *)(a2 + 32);
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  if ( v9 )
  {
    v18 = sub_491248(v9);
    v19 = *(const void **)(a2 + 40);
    v8[5] = v18;
    v8[7] = v9;
    memcpy(v18, v19, v9);
    v8[1] = a3;
    v8[2] = 0;
    v10 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)v8 = *(_DWORD *)a2;
    v8[3] = 0;
    v8[6] = v9;
    if ( !v10 )
      goto LABEL_3;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)v8 = *(_DWORD *)a2;
    v8[1] = a3;
    v8[2] = 0;
    v8[3] = 0;
    if ( !v10 )
      goto LABEL_3;
  }
  v8[3] = sub_414990(a1, v10, v8, a4);
LABEL_3:
  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 )
  {
    v12 = v8;
    do
    {
      v13 = sub_49E050(0x40u);
      v13[4] = *(_QWORD *)(v11 + 32);
      v13[5] = 0;
      v13[6] = 0;
      v13[7] = 0;
      v14 = *(_QWORD *)(v11 + 48);
      if ( v14 )
      {
        v17 = sub_491248(*(_QWORD *)(v11 + 48));
        v13[5] = v17;
        v13[7] = v14;
        memcpy(v17, *(const void **)(v11 + 40), v14);
        v13[6] = v14;
        *(_DWORD *)v13 = *(_DWORD *)v11;
        v13[2] = 0;
        v13[3] = 0;
        v12[2] = v13;
        v13[1] = v12;
        v15 = *(_QWORD *)(v11 + 24);
        if ( v15 )
LABEL_10:
          v13[3] = sub_414990(a1, v15, v13, a4);
      }
      else
      {
        *(_DWORD *)v13 = *(_DWORD *)v11;
        v13[2] = 0;
        v13[3] = 0;
        v12[2] = v13;
        v13[1] = v12;
        v15 = *(_QWORD *)(v11 + 24);
        if ( v15 )
          goto LABEL_10;
      }
      v11 = *(_QWORD *)(v11 + 16);
      v12 = v13;
    }
    while ( v11 );
  }
  return v8;
}
