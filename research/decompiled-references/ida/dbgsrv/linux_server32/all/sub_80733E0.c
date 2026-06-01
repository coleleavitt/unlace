/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80733E0
// Address: 0x080733E0

//----- (080733E0) --------------------------------------------------------
int __cdecl sub_80733E0(int a1, int a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = (char *)&dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = sub_808EC50(a1, v2) == 0;
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
