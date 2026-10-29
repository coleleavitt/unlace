/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7880
// Address: 0x080C7880

//----- (080C7880) --------------------------------------------------------
int __cdecl sub_80C7880(int a1)
{
  if ( a1 == -1 )
    return sub_80C7850();
  *(_DWORD *)(__readgsdword(0) - 132 + 124) = a1;
  return a1;
}
