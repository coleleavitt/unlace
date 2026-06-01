/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006752C
// Address: 0x000000010006752C

//----- (000000010006752C) ----------------------------------------------------
void __fastcall sub_10006752C(_QWORD *a1)
{
  _QWORD *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = sub_10006747C(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 100067544: variable '_8' is possibly undefined
