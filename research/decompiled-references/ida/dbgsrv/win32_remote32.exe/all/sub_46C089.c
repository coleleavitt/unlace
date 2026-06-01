/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C089
// Address: 0x0046C089

//----- (0046C089) --------------------------------------------------------
char __cdecl sub_46C089(int a1, _DWORD *a2)
{
  int v2; // ecx

  if ( !a1 )
    return 0;
  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x2000) == 0 )
    return 0;
  if ( !sub_46C0BC(v2) )
  {
    ++*a2;
    return 0;
  }
  return 1;
}
