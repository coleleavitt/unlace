/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD7C0
// Address: 0x080BD7C0

//----- (080BD7C0) --------------------------------------------------------
int __cdecl sub_80BD7C0(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 20) )
  {
    result = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(result + 4) += a2;
  }
  return result;
}
