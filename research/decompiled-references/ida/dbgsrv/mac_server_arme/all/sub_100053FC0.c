/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053FC0
// Address: 0x0000000100053FC0

//----- (0000000100053FC0) ----------------------------------------------------
__int64 __fastcall sub_100053FC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v7; // x19
  void *v8[3]; // [xsp+0h] [xbp-40h] BYREF

  sub_100063440(55, (__int64 *)v8);
  sub_10005EEE0((_QWORD **)v8, a2);
  sub_10002E2F0((_QWORD **)v8, a3);
  result = sub_10005E41C(a1 + 192, (__int64)v8, 0xFFFFFFFFLL, nullptr);
  if ( v8[0] )
  {
    v8[1] = nullptr;
    v7 = result;
    qfree(v8[0]);
    return v7;
  }
  return result;
}
