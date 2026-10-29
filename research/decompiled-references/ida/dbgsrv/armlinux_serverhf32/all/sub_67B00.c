/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67B00
// Address: 0x00067B00

//----- (00067B00) --------------------------------------------------------
int __fastcall sub_67B00(int result)
{
  int v1; // r3

  v1 = *(_DWORD *)(result + 20);
  if ( v1 )
    *(_DWORD *)(result + 20) = v1 - 1;
  return result;
}
