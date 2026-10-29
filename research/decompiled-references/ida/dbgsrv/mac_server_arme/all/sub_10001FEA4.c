/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FEA4
// Address: 0x000000010001FEA4

//----- (000000010001FEA4) ----------------------------------------------------
void __fastcall sub_10001FEA4(__int64 a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = (void *)sub_10001D1B0(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 10001FEBC: variable '_8' is possibly undefined
