/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809AEC0
// Address: 0x0809AEC0

//----- (0809AEC0) --------------------------------------------------------
int __cdecl sub_809AEC0(int a1, char *s)
{
  void *v2; // eax
  FILE *v3; // eax
  int result; // eax

  while ( *(_DWORD *)(a1 + 140) )
    sub_8091B10(a1);
  *(_DWORD *)(a1 + 116) = a1;
  *(_DWORD *)(a1 + 112) = sub_80922A0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  if ( !s )
  {
    sub_80C7880(1);
    *__errno_location() = 2;
  }
  sub_80CF780(*(void **)(a1 + 152));
  v2 = sub_80CF830(s);
  *(_DWORD *)(a1 + 152) = v2;
  if ( !v2 )
    return sub_80C7850();
  v3 = sub_80CDB00((int)v2);
  *(_DWORD *)(a1 + 148) = v3;
  if ( !v3 )
    return sub_80C7850();
  result = 0;
  if ( *(_BYTE *)(a1 + 404) )
    return sub_809A780(a1, 0, 0);
  return result;
}
