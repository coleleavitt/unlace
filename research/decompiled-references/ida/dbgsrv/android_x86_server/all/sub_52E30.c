/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52E30
// Address: 0x00052E30

//----- (00052E30) --------------------------------------------------------
int __cdecl sub_52E30(_DWORD *a1, char *s2)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  const char *v5; // eax
  bool v6; // zf

  if ( s2 )
  {
    v2 = a1[1];
    v3 = v2;
    while ( --v3 >= 0 )
    {
      v4 = *(_DWORD *)(*a1 + 4 * v2 - 4);
      v5 = byte_EF875;
      if ( *(_DWORD *)(v4 + 4) )
        v5 = *(const char **)v4;
      v6 = strcmp(v5, s2) == 0;
      v2 = v3;
      if ( v6 )
        return v3;
    }
  }
  return -1;
}
