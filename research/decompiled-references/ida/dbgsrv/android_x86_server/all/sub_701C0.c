/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_701C0
// Address: 0x000701C0

//----- (000701C0) --------------------------------------------------------
int __cdecl sub_701C0(int a1, int a2, _DWORD *a3)
{
  int result; // eax

  result = sub_6EB10(a1, a2, 0, a3);
  if ( !result )
  {
    if ( *(_DWORD *)(a1 + 32) )
      return sub_6FBF0(a1, a2);
  }
  return result;
}
