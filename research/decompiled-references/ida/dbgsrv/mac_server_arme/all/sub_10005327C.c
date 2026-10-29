/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005327C
// Address: 0x000000010005327C

//----- (000000010005327C) ----------------------------------------------------
void __fastcall sub_10005327C(__int64 a1, __int64 **a2)
{
  __int64 *v4; // x21
  const char *v5; // x22
  __int64 v6; // x23
  size_t v7; // x0
  size_t v8; // x23
  unsigned __int64 v9; // x25
  unsigned __int64 v10; // x24
  char *v11; // x8
  int v12; // w0
  void *__ptr; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int64 v14; // [xsp+10h] [xbp-70h]
  unsigned __int64 v15; // [xsp+18h] [xbp-68h]
  char v16; // [xsp+27h] [xbp-59h] BYREF

  if ( (_QWORD)a2[1] << 6 != 8LL * (_QWORD)a2[1] )
  {
    v4 = *a2;
    while ( 1 )
    {
      if ( v4[2] )
        v5 = (const char *)v4[1];
      else
        v5 = &byte_10007AE40;
      v6 = *v4;
      sub_100063440(57, (__int64 *)&__ptr);
      sub_1000530E4((_QWORD **)&__ptr, v6 + 1);
      if ( !v5 )
        v5 = &byte_1000931E5;
      v7 = strlen(v5);
      v8 = v7 + 1;
      if ( v7 != -1 )
      {
        v9 = v14;
        if ( __CFADD__(v14, v8) )
          v10 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v10 = v14 + v8;
        if ( v14 >= v10 )
        {
          if ( v14 != v10 )
          {
            v16 = 0;
            sub_10001B764((_QWORD **)&__ptr, v10, &v16);
          }
        }
        else
        {
          v11 = (char *)__ptr;
          if ( v15 < v10 )
          {
            v11 = (char *)qvector_reserve(&__ptr, __ptr, v10, 1u);
            __ptr = v11;
          }
          bzero(&v11[v14], v10 - v14);
          v14 = v10;
        }
        memcpy((char *)__ptr + v9, v5, v8);
      }
      sub_100053AB4((_QWORD **)&__ptr, (const void *)v4[4], v4[5]);
      v12 = sub_10005E41C(a1 + 192, (__int64)&__ptr, 0xFFFFFFFFLL, nullptr);
      if ( v12 < 0 )
        break;
      if ( v12 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 568LL))(*(_QWORD *)(a1 + 440), v4);
      if ( __ptr )
      {
        v14 = 0;
        qfree(__ptr);
      }
      v4 += 7;
      if ( v4 == &(*a2)[7 * (_QWORD)a2[1]] )
        return;
    }
    if ( __ptr )
    {
      v14 = 0;
      qfree(__ptr);
    }
  }
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
