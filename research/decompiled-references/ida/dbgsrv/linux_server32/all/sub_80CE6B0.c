/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE6B0
// Address: 0x080CE6B0

//----- (080CE6B0) --------------------------------------------------------
int __cdecl sub_80CE6B0(char *dest, unsigned int a2, char *s)
{
  char *v4; // ebp
  char *v5; // eax
  size_t v6; // edx
  size_t v7; // [esp+0h] [ebp-20h]

  if ( !s || dest && a2 <= 1 )
    return 0;
  v4 = strrchr(s, 47);
  v5 = strrchr(s, 92);
  if ( v5 >= v4 )
  {
    v4 = v5;
    if ( !v5 )
    {
      if ( dest )
        *(_WORD *)dest = 46;
      return 0;
    }
  }
  v6 = v4 - s;
  if ( v4 - s >= a2 )
    v6 = a2 - 1;
  if ( !v6 )
    v6 = *v4 == 92 || *v4 == 47;
  if ( dest )
  {
    if ( s != dest )
    {
      v7 = v6;
      memcpy(dest, s, v6);
      v6 = v7;
    }
    dest[v6] = 0;
  }
  return 1;
}
