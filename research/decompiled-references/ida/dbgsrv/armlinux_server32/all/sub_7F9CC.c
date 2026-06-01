/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F9CC
// Address: 0x0007F9CC

//----- (0007F9CC) --------------------------------------------------------
int __fastcall sub_7F9CC(int a1)
{
  __int64 v2; // r6
  int v3; // r1
  __int64 v4; // r0

  LODWORD(v2) = sub_753FC(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  HIDWORD(v2) = v3;
  LODWORD(v4) = sub_753FC(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v4;
  return v4;
}
// 7F9DA: variable 'v3' is possibly undefined
// 7F9E8: variable 'v4' is possibly undefined
