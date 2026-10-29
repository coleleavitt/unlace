/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AD90
// Address: 0x0008AD90

//----- (0008AD90) --------------------------------------------------------
int __cdecl sub_8AD90(_DWORD *a1, char *s1)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  unsigned int v5; // [esp+8h] [ebp-14h]

  result = -1;
  v5 = a1[12];
  if ( v5 )
  {
    v3 = a1[11];
    v4 = 0;
    while ( strcmp(s1, *(const char **)(v3 + 4 * v4)) )
    {
      if ( ++v4 >= v5 )
        return -1;
    }
    return *(_DWORD *)(a1[8] + 4 * v4);
  }
  return result;
}
