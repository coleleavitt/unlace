/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B48C
// Address: 0x000000010001B48C

//----- (000000010001B48C) ----------------------------------------------------
void __fastcall sub_10001B48C(__int64 a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = (void *)sub_10001B4B4(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 10001B4A4: variable '_8' is possibly undefined
