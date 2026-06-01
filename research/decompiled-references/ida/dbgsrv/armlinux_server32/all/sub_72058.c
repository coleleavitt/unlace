/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72058
// Address: 0x00072058

//----- (00072058) --------------------------------------------------------
int __fastcall sub_72058(_QWORD *a1, int *a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  result = sub_71CAC(&v5, a2, 63, a3);
  if ( result == 1 )
    *a1 = v5;
  return result;
}
