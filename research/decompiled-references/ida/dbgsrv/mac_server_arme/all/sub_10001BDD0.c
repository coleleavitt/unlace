/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BDD0
// Address: 0x000000010001BDD0

//----- (000000010001BDD0) ----------------------------------------------------
__int64 __fastcall sub_10001BDD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // x0
  _QWORD v13[2]; // [xsp+18h] [xbp-38h] BYREF

  sub_100004BD4(*(_QWORD *)(a1 + 16), "shared cache mapping: %a..%a\n", a3, a4, a5, a6, a7, a8, a2);
  v11 = *(_QWORD *)(a1 + 24);
  v13[0] = a2;
  v13[1] = a3;
  return rangeset_t_add(v11, (__int64)v13);
}
