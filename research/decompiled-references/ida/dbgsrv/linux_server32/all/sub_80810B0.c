/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80810B0
// Address: 0x080810B0

//----- (080810B0) --------------------------------------------------------
int __cdecl sub_80810B0(int *a1, char *s2)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int i; // ebp
  int v6; // [esp+0h] [ebp-20h]

  result = sub_80806D0(a1, s2);
  if ( result == -1 )
  {
    if ( !s2 )
      return 0x7FFFFFFF;
    v3 = dword_811D3A0[0];
    if ( !dword_811D3A0[0] )
      return 0x7FFFFFFF;
    v4 = 0;
    v6 = dword_811D3A0[1];
    for ( i = v6; strcmp(*(const char **)i, s2); i += 24 )
    {
      if ( ++v4 == v3 )
        return 0x7FFFFFFF;
    }
    if ( i && *(_DWORD *)(i + 4) )
      return 1431655765 * ((i - v6) >> 3);
    else
      return 0x7FFFFFFF;
  }
  return result;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
