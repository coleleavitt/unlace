/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71EB0
// Address: 0x00071EB0

//----- (00071EB0) --------------------------------------------------------
int __fastcall sub_71EB0(_DWORD *a1, int *a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  result = sub_71B40(&v5, a2, 31, a3);
  if ( result == 1 )
    *a1 = v5;
  return result;
}
