/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80547B0
// Address: 0x080547B0

//----- (080547B0) --------------------------------------------------------
int __cdecl sub_80547B0(int a1, int a2)
{
  int result; // eax

  result = 0;
  if ( *(_DWORD *)(a2 + 724) == *(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 8) = a2;
    return 1;
  }
  return result;
}
