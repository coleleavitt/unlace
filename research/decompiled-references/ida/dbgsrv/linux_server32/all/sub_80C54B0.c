/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C54B0
// Address: 0x080C54B0

//----- (080C54B0) --------------------------------------------------------
int __cdecl sub_80C54B0(int *a1, char *s2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  const char *v5; // eax
  int v7; // [esp+0h] [ebp-20h]

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(const char **)(v3 + 4);
    v7 = v3;
    if ( v5 )
    {
      if ( !strcmp(v5, s2) )
        break;
    }
    ++v4;
    v3 += 20;
    if ( v4 == v2 )
      return 0;
  }
  return v7;
}
