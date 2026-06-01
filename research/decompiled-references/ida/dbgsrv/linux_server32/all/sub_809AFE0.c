/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809AFE0
// Address: 0x0809AFE0

//----- (0809AFE0) --------------------------------------------------------
FILE *__cdecl sub_809AFE0(int a1, int a2)
{
  FILE *result; // eax
  int v3; // edx

  if ( a2 )
    sub_809A780(a1, 0, 0);
  while ( *(_DWORD *)(a1 + 140) )
    sub_8091B10(a1);
  sub_80CF780(*(void **)(a1 + 152));
  result = *(FILE **)(a1 + 148);
  *(_DWORD *)(a1 + 152) = 0;
  if ( result )
    result = (FILE *)sub_80CF060(result);
  v3 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  if ( v3 )
  {
    do
    {
      sub_80925F0((_DWORD *)a1);
      result = *(FILE **)(a1 + 32);
    }
    while ( result );
  }
  return result;
}
