/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_489C8
// Address: 0x00000000000489C8

//----- (00000000000489C8) ----------------------------------------------------
_QWORD *__fastcall sub_489C8(_QWORD *result, __int64 a2)
{
  _QWORD *v3; // x19
  size_t v4; // x21
  void *v5; // x0
  size_t v6; // x21
  void *v7; // x0
  _QWORD *v8; // x26
  _QWORD *v9; // x23
  _QWORD *v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x9
  _QWORD *v14; // t1
  size_t v15; // x23
  void *v16; // x0
  size_t v17; // x23
  void *v18; // x0

  v3 = result;
  *(_OWORD *)result = *(_OWORD *)a2;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 24));
    v3[2] = v5;
    v3[4] = v4;
    result = memcpy(v5, *(const void **)(a2 + 16), v4);
    v3[3] = v4;
  }
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(a2 + 48));
    v3[5] = v7;
    v3[7] = v6;
    result = memcpy(v7, *(const void **)(a2 + 40), v6);
    v3[6] = v6;
  }
  v3[9] = 0;
  v3[10] = 0;
  v3[8] = v3 + 9;
  v8 = *(_QWORD **)(a2 + 64);
  v9 = (_QWORD *)(a2 + 72);
  if ( v8 != (_QWORD *)(a2 + 72) )
  {
    do
    {
      while ( 1 )
      {
        result = sub_48C00((_QWORD **)v3 + 8, v3 + 9, v8 + 4, v8 + 4);
        v10 = (_QWORD *)v8[1];
        if ( !v10 )
          break;
        do
        {
          v8 = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
LABEL_11:
        if ( v8 == v9 )
          goto LABEL_14;
      }
      v11 = (__int64)(v8 + 2);
      v12 = (_QWORD *)v8[2];
      if ( (_QWORD *)*v12 != v8 )
      {
        do
        {
          v13 = *(_QWORD *)v11;
          v14 = *(_QWORD **)(*(_QWORD *)v11 + 16LL);
          v11 = *(_QWORD *)v11 + 16LL;
          v8 = v14;
        }
        while ( *v14 != v13 );
        goto LABEL_11;
      }
      v8 = (_QWORD *)v8[2];
    }
    while ( v12 != v9 );
  }
LABEL_14:
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v15 = *(_QWORD *)(a2 + 96);
  if ( v15 )
  {
    v16 = qalloc_or_throw(*(_QWORD *)(a2 + 96));
    v3[11] = v16;
    v3[13] = v15;
    result = memcpy(v16, *(const void **)(a2 + 88), v15);
    v3[12] = v15;
  }
  v3[15] = 0;
  v3[16] = 0;
  v3[14] = 0;
  v17 = *(_QWORD *)(a2 + 120);
  if ( v17 )
  {
    v18 = qalloc_or_throw(*(_QWORD *)(a2 + 120));
    v3[14] = v18;
    v3[16] = v17;
    result = memcpy(v18, *(const void **)(a2 + 112), v17);
    v3[15] = v17;
  }
  *((_DWORD *)v3 + 34) = *(_DWORD *)(a2 + 136);
  return result;
}
