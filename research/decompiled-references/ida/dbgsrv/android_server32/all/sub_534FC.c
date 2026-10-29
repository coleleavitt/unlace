/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_534FC
// Address: 0x000534FC

//----- (000534FC) --------------------------------------------------------
int __fastcall sub_534FC(int result, int a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 8) = v2 == 0;
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
