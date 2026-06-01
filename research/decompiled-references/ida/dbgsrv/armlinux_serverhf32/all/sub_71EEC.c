/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71EEC
// Address: 0x00071EEC

//----- (00071EEC) --------------------------------------------------------
int __fastcall sub_71EEC(_QWORD *a1, int *a2, int a3)
{
  int result; // r0
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  result = sub_71B40(&v5, a2, 63, a3);
  if ( result == 1 )
    *a1 = v5;
  return result;
}
