/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D200
// Address: 0x000000010003D200

//----- (000000010003D200) ----------------------------------------------------
__int64 *__fastcall sub_10003D200(__int64 **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v6; // x8
  __int64 *v7; // x23
  __int64 *v8; // x20
  const char *v9; // x22
  const char *v10; // x23
  _QWORD *v11; // x22
  __int64 v12; // x24
  size_t v13; // x21
  void *v14; // x0
  __int64 *v15; // x8
  _QWORD *v17; // [xsp+0h] [xbp-60h]

  v6 = a1[1];
  v7 = (__int64 *)(a1 + 1);
  v8 = (__int64 *)(a1 + 1);
  if ( v6 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      v9 = *(const char **)a2;
    else
      v9 = &byte_100075A30;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v6;
        v10 = v6[5] ? (const char *)v6[4] : &byte_100075A30;
        if ( (strcmp(v9, v10) & 0x80000000) == 0 )
          break;
        v6 = (__int64 *)*v8;
        v7 = v8;
        if ( !*v8 )
          goto LABEL_13;
      }
      if ( (strcmp(v10, v9) & 0x80000000) == 0 )
        break;
      v6 = (__int64 *)v8[1];
      if ( !v6 )
      {
        v7 = v8 + 1;
        goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    v11 = operator new(0x58u);
    v17 = v11;
    v12 = *a4;
    v11[5] = 0;
    v11[6] = 0;
    v11[4] = 0;
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
    {
      v14 = qalloc_or_throw(*(_QWORD *)(v12 + 8));
      v11[4] = v14;
      v11[6] = v13;
      memcpy(v14, *(const void **)v12, v13);
      v11[5] = v13;
    }
    *((_BYTE *)v11 + 56) = 2;
    v11[9] = 0;
    v11[10] = 0;
    v11[8] = 0;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = v8;
    *v7 = (__int64)v11;
    v15 = (__int64 *)**a1;
    if ( v15 )
    {
      *a1 = v15;
      v11 = (_QWORD *)*v7;
    }
    sub_10000B394(a1[1], v11);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
    return v17;
  }
  return v8;
}
// 100075A30: using guessed type char byte_100075A30;
