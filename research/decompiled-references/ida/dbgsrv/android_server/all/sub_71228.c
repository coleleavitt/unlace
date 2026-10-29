/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71228
// Address: 0x0000000000071228

//----- (0000000000071228) ----------------------------------------------------
__int64 *__fastcall sub_71228(__int64 *result, __int64 a2)
{
  _QWORD *v2; // x21
  const char **v3; // x22
  const char **v4; // x23
  __int64 *v6; // x19
  char *v7; // x8
  __int64 v8; // x8
  const char *v9; // x9
  const char **v10; // t1

  result[1] = 0;
  v2 = result + 1;
  result[2] = 0;
  *result = (__int64)(result + 1);
  v3 = (const char **)(a2 + 8);
  v4 = *(const char ***)a2;
  v6 = result;
  while ( v4 != v3 )
  {
    result = sub_7BAA8((_QWORD **)v6, v2, v4 + 4, (__int64)(v4 + 4));
    v7 = (char *)v4[1];
    if ( v7 )
    {
      do
      {
        v4 = (const char **)v7;
        v7 = *(char **)v7;
      }
      while ( v7 );
    }
    else
    {
      v8 = (__int64)(v4 + 2);
      if ( *(const char ***)v4[2] == v4 )
      {
        v4 = (const char **)v4[2];
      }
      else
      {
        do
        {
          v9 = *(const char **)v8;
          v10 = *(const char ***)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v4 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  *((_DWORD *)v6 + 6) = 1;
  *((_DWORD *)v6 + 7) = *(_DWORD *)(a2 + 28);
  return result;
}
