/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805AEE0
// Address: 0x0805AEE0

//----- (0805AEE0) --------------------------------------------------------
int __cdecl sub_805AEE0(_DWORD *a1, char *s2)
{
  int v2; // ebp
  int v3; // edi
  int v6; // edi
  int v7; // ebp
  int v8; // [esp+0h] [ebp-20h]

  if ( !s2 )
    return -1;
  v2 = a1[141] - 1;
  if ( v2 < 0 )
  {
LABEL_7:
    v6 = a1[147];
    if ( v6 )
    {
      v7 = 0;
      v8 = a1[149];
      while ( strcmp(*(const char **)(v8 + 4 * v7), s2) )
      {
        if ( ++v7 == v6 )
          return -1;
      }
      return *(_DWORD *)(a1[146] + 4 * v7);
    }
    return -1;
  }
  v3 = a1[143];
  while ( strcmp(*(const char **)(v3 + 4 * v2), s2) )
  {
    if ( v2-- == 0 )
      goto LABEL_7;
  }
  return *(_DWORD *)(a1[140] + 4 * v2);
}
