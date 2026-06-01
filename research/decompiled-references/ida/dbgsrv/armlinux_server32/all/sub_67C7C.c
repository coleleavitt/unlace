/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C7C
// Address: 0x00067C7C

//----- (00067C7C) --------------------------------------------------------
int __fastcall sub_67C7C(int result)
{
  int v1; // r3

  v1 = *(_DWORD *)(result + 20);
  if ( v1 )
    *(_DWORD *)(result + 20) = v1 - 1;
  return result;
}
