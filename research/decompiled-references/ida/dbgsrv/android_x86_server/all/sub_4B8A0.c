/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B8A0
// Address: 0x0004B8A0

//----- (0004B8A0) --------------------------------------------------------
int __cdecl sub_4B8A0(_DWORD *a1)
{
  int result; // eax

  result = 0;
  if ( a1[30] == 1 && *(_DWORD *)(a1[25] + 12) )
  {
    result = sub_4B510(a1);
    if ( !result )
      return sub_4B910(a1);
  }
  return result;
}
