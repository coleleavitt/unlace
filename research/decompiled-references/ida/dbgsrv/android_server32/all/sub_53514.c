/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53514
// Address: 0x00053514

//----- (00053514) --------------------------------------------------------
int __fastcall sub_53514(int result, int a2)
{
  int v2; // r3

  v2 = ~*(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) = ~*(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = v2;
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
