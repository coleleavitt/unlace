/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7201C
// Address: 0x0007201C

//----- (0007201C) --------------------------------------------------------
int __fastcall sub_7201C(_DWORD *a1, int *a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  result = sub_71CAC(&v5, a2, 31, a3);
  if ( result == 1 )
    *a1 = v5;
  return result;
}
