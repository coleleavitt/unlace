/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91952
// Address: 0x00091952

//----- (00091952) --------------------------------------------------------
int __fastcall sub_91952(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = *(_DWORD *)(a2 + 4);
  if ( result == a3 )
  {
    result = *(_DWORD *)(a2 + 28);
    if ( result != 1 )
      *(_DWORD *)(a2 + 28) = a4;
  }
  return result;
}
