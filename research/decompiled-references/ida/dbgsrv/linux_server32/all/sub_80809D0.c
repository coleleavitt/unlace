/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80809D0
// Address: 0x080809D0

//----- (080809D0) --------------------------------------------------------
int __cdecl sub_80809D0(char *s2)
{
  int v1; // ebp
  int v2; // esi
  int v3; // edi

  if ( !s2 )
    return 0;
  v1 = dword_811D3A0[0];
  if ( !dword_811D3A0[0] )
    return 0;
  v2 = dword_811D3A0[1];
  v3 = 0;
  while ( strcmp(*(const char **)v2, s2) )
  {
    ++v3;
    v2 += 24;
    if ( v1 == v3 )
      return 0;
  }
  if ( !v2 || *(_DWORD *)(v2 + 4) )
    return v2;
  else
    return 0;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
