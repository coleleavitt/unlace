/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71F2C
// Address: 0x00071F2C

//----- (00071F2C) --------------------------------------------------------
int __fastcall sub_71F2C(_QWORD *a1, int *a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  result = sub_71B40(&v5, a2, 64, a3);
  if ( result == 1 )
    *a1 = v5;
  return result;
}
