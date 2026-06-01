/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_390F4
// Address: 0x000390F4

//----- (000390F4) --------------------------------------------------------
int __fastcall sub_390F4(int *a1, char *s2)
{
  int v2; // r7
  int v4; // r4
  int i; // r5
  const char *v6; // r0

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a1;
    for ( i = 0; i != v2; ++i )
    {
      if ( *(_DWORD *)(v4 + 4) )
      {
        v6 = *(const char **)v4;
        v4 += 12;
        if ( !strcmp(v6, s2) )
          return i;
      }
      else
      {
        v4 += 12;
        if ( !strcmp((const char *)&dword_8DA5C, s2) )
          return i;
      }
    }
  }
  return -1;
}
// 8DA5C: using guessed type int dword_8DA5C;
