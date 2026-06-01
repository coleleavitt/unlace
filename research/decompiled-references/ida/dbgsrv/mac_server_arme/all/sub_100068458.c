/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068458
// Address: 0x0000000100068458

//----- (0000000100068458) ----------------------------------------------------
__int64 __fastcall sub_100068458(__int64 a1)
{
  __int64 (*v2)(void); // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  (*(void (**)(void))(a1 + 376))();
  v2 = *(__int64 (**)(void))(a1 + 384);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v2();
}
// 100068484: variable '_18' is possibly undefined
