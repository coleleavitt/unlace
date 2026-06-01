/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ED68
// Address: 0x0003ED68

//----- (0003ED68) --------------------------------------------------------
int __fastcall sub_3ED68(_DWORD *a1, char *s2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r5
  const char **v7; // r3
  int v8; // t1

  if ( s2 )
  {
    v2 = a1[1];
    v3 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      v5 = *a1 + 4 * v2;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v5 - 4);
        v5 -= 4;
        v7 = (const char **)v8;
        if ( *(_DWORD *)(v8 + 4) )
        {
          if ( !strcmp(*v7, s2) )
            return v3;
        }
        else if ( !strcmp((const char *)&dword_8DA5C, s2) )
        {
          return v3;
        }
        if ( v3-- == 0 )
          return v3;
      }
    }
  }
  return -1;
}
// 8DA5C: using guessed type int dword_8DA5C;
