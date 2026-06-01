/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068DF8
// Address: 0x0000000100068DF8

//----- (0000000100068DF8) ----------------------------------------------------
void __fastcall sub_100068DF8(std::exception *a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  std::exception::~exception(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 100068E10: variable '_8' is possibly undefined
// 100068E1C: variable 'v1' is possibly undefined
