/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91DC2
// Address: 0x00091DC2

//----- (00091DC2) --------------------------------------------------------
int __fastcall sub_91DC2(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0

  result = sub_91274(a1, *(_DWORD *)(a2 + 8), a6);
  if ( result )
    return sub_918E4(result, a2, a3, a4, a5);
  return result;
}
