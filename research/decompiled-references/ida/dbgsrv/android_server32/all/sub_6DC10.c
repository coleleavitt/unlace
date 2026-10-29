/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DC10
// Address: 0x0006DC10

//----- (0006DC10) --------------------------------------------------------
int __fastcall sub_6DC10(int result)
{
  int v1; // r1

  v1 = *(_DWORD *)(result + 20);
  if ( v1 )
    *(_DWORD *)(result + 20) = v1 - 1;
  return result;
}
