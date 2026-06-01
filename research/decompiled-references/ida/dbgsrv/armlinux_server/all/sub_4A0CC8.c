/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0CC8
// Address: 0x00000000004A0CC8

//----- (00000000004A0CC8) ----------------------------------------------------
__int64 __fastcall sub_4A0CC8(__int64 *a1, unsigned __int8 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x22
  unsigned __int64 v5; // x21
  __int64 result; // x0
  size_t v7; // x4
  const void *v8; // x5
  __int64 v9; // x21
  int v10; // w23
  size_t v11; // x20
  size_t v13; // x2
  int v15; // w0
  size_t v16; // x2
  char *v17; // x0
  char *v18; // x25

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( a4 )
  {
    result = -1;
    if ( v5 > a3 )
    {
      v7 = v5 - a3;
      v8 = (const void *)(v4 + a3);
      v9 = v4 + v5;
      v10 = *a2;
      if ( a4 <= v7 )
      {
        v11 = 1 - a4;
        v13 = 1 - a4 + v7;
        if ( v13 )
        {
          while ( 1 )
          {
            v17 = (char *)memchr(v8, v10, v13);
            v18 = v17;
            if ( !v17 )
              return -1;
            v15 = memcmp(v17, a2, a4);
            v8 = v18 + 1;
            v16 = v9 - (_QWORD)(v18 + 1);
            if ( !v15 )
              break;
            if ( a4 <= v16 )
            {
              v13 = v11 + v16;
              if ( v13 )
                continue;
            }
            return -1;
          }
          return (__int64)&v18[-v4];
        }
      }
    }
  }
  else if ( v5 < a3 )
  {
    return -1;
  }
  else
  {
    return a3;
  }
  return result;
}
