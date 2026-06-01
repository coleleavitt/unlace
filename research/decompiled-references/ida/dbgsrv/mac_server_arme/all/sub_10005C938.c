/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C938
// Address: 0x000000010005C938

//----- (000000010005C938) ----------------------------------------------------
__int64 __fastcall sub_10005C938(__int64 a1, __int64 a2)
{
  __int64 _28; // [xsp+28h] [xbp+8h]

  sub_100000B44();
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return call_system(a2);
}
// 10005C974: variable '_28' is possibly undefined
