/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D0C8
// Address: 0x000000010003D0C8

//----- (000000010003D0C8) ----------------------------------------------------
__int64 **__fastcall sub_10003D0C8(__int64 **a1, __int64 a2, __int64 a3, __int64 ***a4)
{
  __int64 *v6; // x8
  __int64 **v7; // x23
  const char *v8; // x22
  __int64 **v9; // x20
  const char *v10; // x23
  __int64 *v11; // x22
  __int64 **v12; // x8
  __int64 *v13; // x8
  __int64 *v14; // x1

  v7 = a1 + 1;
  v6 = a1[1];
  if ( v6 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      v8 = *(const char **)a2;
    else
      v8 = &byte_100075A30;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (__int64 **)v6;
        v10 = v6[5] ? (const char *)v6[4] : &byte_100075A30;
        if ( (strcmp(v8, v10) & 0x80000000) == 0 )
          break;
        v6 = *v9;
        v7 = v9;
        if ( !*v9 )
          goto LABEL_14;
      }
      if ( (strcmp(v10, v8) & 0x80000000) == 0 )
        break;
      v6 = v9[1];
      if ( !v6 )
      {
        v7 = v9 + 1;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v9 = a1 + 1;
LABEL_14:
    v11 = (__int64 *)v9;
    v9 = (__int64 **)operator new(0x58u);
    v12 = *a4;
    v9[4] = **a4;
    *v12 = nullptr;
    v9[5] = v12[1];
    v12[1] = nullptr;
    v9[6] = v12[2];
    v12[2] = nullptr;
    *((_BYTE *)v9 + 56) = 2;
    v9[9] = nullptr;
    v9[10] = nullptr;
    v9[8] = nullptr;
    *v9 = nullptr;
    v9[1] = nullptr;
    v9[2] = v11;
    *v7 = (__int64 *)v9;
    v13 = (__int64 *)**a1;
    v14 = (__int64 *)v9;
    if ( v13 )
    {
      *a1 = v13;
      v14 = *v7;
    }
    sub_10000B394(a1[1], v14);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v9;
}
// 100075A30: using guessed type char byte_100075A30;
