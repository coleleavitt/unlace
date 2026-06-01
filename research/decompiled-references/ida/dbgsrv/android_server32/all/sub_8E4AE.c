/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E4AE
// Address: 0x0008E4AE

//----- (0008E4AE) --------------------------------------------------------
int __fastcall sub_8E4AE(int a1)
{
  int result; // r0
  int v3; // r1

  result = 0;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 224);
    result = 0;
    if ( v3 )
      return *(_DWORD *)(v3 + 192) + *(_DWORD *)(v3 + 64);
  }
  return result;
}
