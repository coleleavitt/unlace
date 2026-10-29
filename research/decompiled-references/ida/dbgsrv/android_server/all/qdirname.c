/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x00000000000BC144

//----- (00000000000BC144) ----------------------------------------------------
__int64 __fastcall qdirname(char *a1, unsigned __int64 a2, char *s)
{
  __int64 result; // x0
  char *v7; // x22
  char *v8; // x0
  char *v9; // x8
  size_t v10; // x21
  int v11; // w8

  if ( !s || a1 && a2 < 2 )
    return 0;
  v7 = strrchr(s, 47);
  v8 = strrchr(s, 92);
  if ( v7 <= v8 )
    v9 = v8;
  else
    v9 = v7;
  if ( v9 )
  {
    if ( v9 - s >= a2 )
      v10 = a2 - 1;
    else
      v10 = v9 - s;
    if ( !v10 )
    {
      v11 = (unsigned __int8)*v9;
      if ( v11 != 92 && v11 != 47 )
      {
        v10 = 0;
        if ( a1 )
          goto LABEL_17;
        return 1;
      }
      v10 = 1;
    }
    if ( a1 )
    {
LABEL_17:
      if ( a1 != s )
        memcpy(a1, s, v10);
      a1[v10] = 0;
    }
    return 1;
  }
  result = 0;
  if ( a1 )
    *(_WORD *)a1 = 46;
  return result;
}
