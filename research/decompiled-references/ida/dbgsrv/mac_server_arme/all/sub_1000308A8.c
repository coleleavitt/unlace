/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000308A8
// Address: 0x00000001000308A8

//----- (00000001000308A8) ----------------------------------------------------
void __fastcall sub_1000308A8(__int64 a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = (void *)sub_100030758(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 1000308C0: variable '_8' is possibly undefined
