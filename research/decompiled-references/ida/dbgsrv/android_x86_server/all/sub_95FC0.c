/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95FC0
// Address: 0x00095FC0

//----- (00095FC0) --------------------------------------------------------
int __cdecl sub_95FC0(int a1, char *s2)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v5; // [esp+8h] [ebp-14h]

  v5 = *(_DWORD *)(a1 + 44);
  if ( !v5 )
    return 0;
  v2 = *(_DWORD *)(a1 + 40);
  v3 = 0;
  while ( strcmp(*(const char **)(v2 + 4), s2) )
  {
    ++v3;
    v2 += 12;
    if ( v3 >= v5 )
      return 0;
  }
  return v2;
}
