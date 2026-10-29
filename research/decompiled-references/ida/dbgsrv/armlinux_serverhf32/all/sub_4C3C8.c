/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C3C8
// Address: 0x0004C3C8

//----- (0004C3C8) --------------------------------------------------------
int __fastcall sub_4C3C8(int result, int a2)
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
