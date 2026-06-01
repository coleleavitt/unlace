/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strarray
// Address: 0x00000000000C6A68

//----- (00000000000C6A68) ----------------------------------------------------
char *__fastcall strarray(__int64 a1, __int64 a2, int a3)
{
  char *v3; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x10
  __int64 v6; // x8

  v3 = "";
  if ( a1 )
  {
    v4 = a2 - 1;
    if ( a2 >= 1 )
    {
      v5 = 0;
      v6 = a1 + 8;
      do
      {
        if ( *(_DWORD *)(v6 - 8) == a3 )
          return *(char **)v6;
        ++v5;
        v6 += 16;
      }
      while ( v5 < a2 );
      if ( *(_DWORD *)(a1 + 16 * v4) )
        return "";
      return *(char **)(a1 + 16 * v4 + 8);
    }
  }
  return v3;
}
