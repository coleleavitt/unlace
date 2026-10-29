/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A610
// Address: 0x000000000044A610

//----- (000000000044A610) ----------------------------------------------------
__int64 __fastcall sub_44A610(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v8[5]; // [xsp+28h] [xbp-28h] BYREF

  memset(&v8[1], 0, 24);
  v3 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  LOBYTE(v8[0]) = 2;
  sub_4488B8(v8, (__int64 *)(v3 + 32 * v2 - 32));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) = v5;
    sub_448310((__int64 *)(v6 + 32 * v5));
  }
  sub_448310(v8);
  return v8[4] ^ _stack_chk_guard;
}
