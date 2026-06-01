/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67B0C
// Address: 0x00067B0C

//----- (00067B0C) --------------------------------------------------------
int __fastcall sub_67B0C(int result, int a2)
{
  if ( *(_DWORD *)(result + 20) )
    *(_DWORD *)(*(_DWORD *)(result + 16) + 4) += a2;
  return result;
}
