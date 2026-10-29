/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90BA4
// Address: 0x00090BA4

//----- (00090BA4) --------------------------------------------------------
int __fastcall sub_90BA4(int a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // [sp+8h] [bp-10h] BYREF

  HIDWORD(v5) = a4;
  LODWORD(v5) = 0;
  Unwind_VRS_Get(a1, 0, a2, 0, &v5);
  return v5;
}
