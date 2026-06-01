/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C548
// Address: 0x0004C548

//----- (0004C548) --------------------------------------------------------
int __fastcall sub_4C548(int result, int a2)
{
  __int64 v2; // r4
  __int64 v3; // r6

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(result + 8);
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 8) = v3 != v2;
  return result;
}
