/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040904
// Address: 0x0000000100040904

//----- (0000000100040904) ----------------------------------------------------
void __fastcall sub_100040904(__int64 a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( a1 )
  {
    v1 = (void *)sub_100048448(a1);
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(v1);
  }
}
// 100040920: variable '_8' is possibly undefined
