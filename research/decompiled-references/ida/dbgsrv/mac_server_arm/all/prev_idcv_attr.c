/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x00000001000345AC

//----- (00000001000345AC) ----------------------------------------------------
char *__fastcall prev_idcv_attr(char *result, char *__s)
{
  _QWORD *v3; // x22
  size_t v4; // x20
  char *v5; // x0
  char *v6; // x20
  _QWORD *v7; // x23
  __int64 v8; // x24
  const char *v9; // x21
  const char *v10; // x0
  int v11; // w0
  _QWORD *v12; // x9
  _QWORD *v13; // x8
  bool v14; // zf
  const char *v15; // x20
  int v16; // w8
  char *v17; // [xsp+0h] [xbp-60h] BYREF
  size_t v18; // [xsp+8h] [xbp-58h]
  __int64 v19; // [xsp+10h] [xbp-50h]

  if ( result )
  {
    if ( *result == 5 )
    {
      v3 = *((_QWORD **)result + 1);
      v17 = nullptr;
      v18 = 0;
      v19 = 0;
      if ( __s )
      {
        v4 = strlen(__s);
        if ( v4 == -1 )
        {
          v5 = nullptr;
        }
        else
        {
          v5 = (char *)qvector_reserve(&v17, nullptr, v4 + 1, 1u);
          v17 = v5;
        }
        v18 = v4 + 1;
        memmove(v5, __s, v4);
        v17[v4] = 0;
        v6 = v17;
      }
      else
      {
        v6 = nullptr;
      }
      v7 = v3 + 1;
      v8 = v3[1];
      if ( v8 )
      {
        if ( v18 )
          v9 = v6;
        else
          v9 = &byte_100075A30;
        do
        {
          if ( *(_QWORD *)(v8 + 40) )
            v10 = *(const char **)(v8 + 32);
          else
            v10 = &byte_100075A30;
          v11 = strcmp(v10, v9);
          if ( v11 >= 0 )
            v7 = (_QWORD *)v8;
          v8 = *(_QWORD *)(v8 + (((unsigned int)v11 >> 28) & 8));
        }
        while ( v8 );
      }
      if ( v6 )
      {
        v18 = 0;
        qfree(v6);
      }
      if ( v7 != (_QWORD *)*v3 )
      {
        v12 = (_QWORD *)*v7;
        if ( *v7 )
        {
          do
          {
            v13 = v12;
            v12 = (_QWORD *)v12[1];
          }
          while ( v12 );
        }
        else
        {
          do
          {
            v13 = (_QWORD *)v7[2];
            v14 = *v13 == (_QWORD)v7;
            v7 = v13;
          }
          while ( v14 );
        }
        if ( v13[5] )
        {
          v15 = (const char *)v13[4];
          v16 = strcmp(v15, __s);
          result = (char *)v15;
          if ( v16 < 0 )
            return result;
        }
        else if ( *__s )
        {
          return &byte_100075A30;
        }
      }
    }
    return nullptr;
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
