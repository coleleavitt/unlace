/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E838
// Address: 0x0003E838

//----- (0003E838) --------------------------------------------------------
__int64 __fastcall sub_3E838(_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r0
  __int64 v6; // r2

  v4 = sub_3E7EC(a1, a2);
  v5 = sub_3E7EC(a1, a2 + 4);
  LODWORD(v6) = 0;
  HIDWORD(v6) = v5;
  return v6 + (unsigned int)v4;
}
