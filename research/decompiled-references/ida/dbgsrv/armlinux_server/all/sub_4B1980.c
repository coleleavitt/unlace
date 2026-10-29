/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1980
// Address: 0x00000000004B1980

//----- (00000000004B1980) ----------------------------------------------------
__int64 __fastcall sub_4B1980(__int64 *a1, unsigned __int8 *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // x21
  __int64 v5; // x25
  unsigned __int64 v7; // x4
  bool v8; // cc
  __int64 v9; // x23
  int v10; // w22
  const void *v11; // x5
  unsigned __int64 v12; // x21
  size_t v13; // x20
  size_t v15; // x2
  int v17; // w0
  size_t v18; // x2
  char *v19; // x0
  char *v20; // x25

  v4 = a1[1];
  if ( !a4 )
  {
    if ( v4 < a3 )
      return -1;
    else
      return a3;
  }
  v5 = -1;
  if ( v4 <= a3 )
    return v5;
  v7 = v4 - a3;
  v8 = a4 > v4 - a3;
  v9 = *a1;
  v10 = *a2;
  v11 = (const void *)(*a1 + a3);
  v12 = *a1 + v4;
  if ( v8 )
    return v5;
  v13 = 1 - a4;
  v15 = 1 - a4 + v7;
  if ( v15 )
  {
    while ( 1 )
    {
      v19 = (char *)memchr(v11, v10, v15);
      v20 = v19;
      if ( !v19 )
        break;
      v17 = memcmp(v19, a2, a4);
      v11 = v20 + 1;
      v18 = v12 - (_QWORD)(v20 + 1);
      if ( !v17 )
        return (__int64)&v20[-v9];
      if ( a4 <= v18 )
      {
        v15 = v13 + v18;
        if ( v15 )
          continue;
      }
      return -1;
    }
  }
  return -1;
}
