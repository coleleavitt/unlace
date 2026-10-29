/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A1D8
// Address: 0x000000010001A1D8

//----- (000000010001A1D8) ----------------------------------------------------
void __fastcall sub_10001A1D8(__int64 a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = (void *)sub_1000092EC(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 10001A1F0: variable '_8' is possibly undefined
