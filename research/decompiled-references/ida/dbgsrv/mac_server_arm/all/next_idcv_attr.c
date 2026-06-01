/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x0000000100034420

//----- (0000000100034420) ----------------------------------------------------
char *__fastcall next_idcv_attr(char *result, char *__s)
{
  char *v2; // x19
  __int64 v3; // x22
  size_t v4; // x20
  char *v5; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // t1
  const char *v9; // x20
  __int64 v10; // x21
  const char *v11; // x1
  int v12; // w0
  char *v13; // [xsp+0h] [xbp-50h] BYREF
  size_t v14; // [xsp+8h] [xbp-48h]
  __int64 v15; // [xsp+10h] [xbp-40h]

  if ( result )
  {
    if ( *result != 5 )
      return nullptr;
    v2 = __s;
    v3 = *((_QWORD *)result + 1);
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    if ( __s )
    {
      v4 = strlen(__s);
      if ( v4 == -1 )
      {
        v5 = nullptr;
      }
      else
      {
        v5 = (char *)qvector_reserve(&v13, nullptr, v4 + 1, 1u);
        v13 = v5;
      }
      v14 = v4 + 1;
      memmove(v5, v2, v4);
      v13[v4] = 0;
      v2 = v13;
    }
    v8 = *(_QWORD *)(v3 + 8);
    v6 = v3 + 8;
    v7 = v8;
    if ( v8 )
    {
      if ( v14 )
        v9 = v2;
      else
        v9 = &byte_100075A30;
      v10 = v6;
      do
      {
        if ( *(_QWORD *)(v7 + 40) )
          v11 = *(const char **)(v7 + 32);
        else
          v11 = &byte_100075A30;
        v12 = strcmp(v9, v11);
        if ( v12 < 0 )
          v10 = v7;
        v7 = *(_QWORD *)(v7 + 8LL * (v12 >= 0));
      }
      while ( v7 );
      if ( !v2 )
      {
LABEL_23:
        if ( v10 != v6 )
        {
          if ( *(_QWORD *)(v10 + 40) )
            return *(char **)(v10 + 32);
          else
            return &byte_100075A30;
        }
        return nullptr;
      }
    }
    else
    {
      v10 = v6;
      if ( !v2 )
        goto LABEL_23;
    }
    v14 = 0;
    qfree(v2);
    goto LABEL_23;
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
