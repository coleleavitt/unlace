/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C164
// Address: 0x0004C164

//----- (0004C164) --------------------------------------------------------
int __fastcall sub_4C164(int result, int a2)
{
  __int64 v2; // r2
  bool v3; // cf

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (_DWORD)v2 == 0;
  LODWORD(v2) = -(int)v2;
  HIDWORD(v2) -= 2 * HIDWORD(v2) + !v3;
  *(_QWORD *)(result + 8) = v2;
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
