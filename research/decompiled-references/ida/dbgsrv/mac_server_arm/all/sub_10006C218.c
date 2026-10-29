/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C218
// Address: 0x000000010006C218

//----- (000000010006C218) ----------------------------------------------------
char *__fastcall sub_10006C218(char *result, char *__s)
{
  char *v2; // x19
  const char *i; // x21
  size_t v4; // x22
  void *v5; // x0
  void *v6; // [xsp+8h] [xbp-58h] BYREF
  size_t v7; // [xsp+10h] [xbp-50h]
  __int64 v8; // [xsp+18h] [xbp-48h]
  const char *v9; // [xsp+20h] [xbp-40h] BYREF

  if ( result )
  {
    if ( __s )
    {
      v2 = result;
      result = qstrtok(__s, ":", &v9);
      for ( i = result; result; i = result )
      {
        if ( *i )
        {
          v6 = nullptr;
          v7 = 0;
          v8 = 0;
          v4 = strlen(i);
          v5 = nullptr;
          if ( v4 != -1 )
          {
            v5 = qvector_reserve(&v6, nullptr, v4 + 1, 1u);
            v6 = v5;
          }
          v7 = v4 + 1;
          memmove(v5, i, v4);
          *((_BYTE *)v6 + v4) = 0;
          sub_100013154((_QWORD **)v2, &v6);
          if ( v6 )
          {
            v7 = 0;
            qfree(v6);
          }
        }
        result = qstrtok(nullptr, ":", &v9);
      }
    }
  }
  return result;
}
