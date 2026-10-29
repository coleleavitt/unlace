/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050F24
// Address: 0x0000000100050F24

//----- (0000000100050F24) ----------------------------------------------------
__int64 __fastcall sub_100050F24(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v7; // x19
  void *v8[3]; // [xsp+0h] [xbp-40h] BYREF

  sub_10005F000(55, (__int64 *)v8);
  sub_10005B360((_QWORD **)v8, a2);
  sub_10002CF84((_QWORD **)v8, a3);
  result = sub_10005A8F0(a1 + 192, (__int64)v8, 0xFFFFFFFFLL, nullptr);
  if ( v8[0] )
  {
    v8[1] = nullptr;
    v7 = result;
    qfree(v8[0]);
    return v7;
  }
  return result;
}
