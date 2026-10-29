/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C03D0
// Address: 0x080C03D0

//----- (080C03D0) --------------------------------------------------------
int __cdecl sub_80C03D0(int a1)
{
  int result; // eax

  result = sub_80BBFF0(*(_DWORD *)(a1 + 16));
  if ( !(_BYTE)result )
    *(_DWORD *)(a1 + 32) = "irs";
  return result;
}
