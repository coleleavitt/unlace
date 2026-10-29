/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C88
// Address: 0x00067C88

//----- (00067C88) --------------------------------------------------------
int __fastcall sub_67C88(int result, int a2)
{
  if ( *(_DWORD *)(result + 20) )
    *(_DWORD *)(*(_DWORD *)(result + 16) + 4) += a2;
  return result;
}
