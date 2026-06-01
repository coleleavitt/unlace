/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000973C
// Address: 0x000000010000973C

//----- (000000010000973C) ----------------------------------------------------
void __fastcall sub_10000973C(__int64 a1, _QWORD *a2)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10000973C(a1, *a2);
    sub_10000973C(a1, a2[1]);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 100009780: variable '_18' is possibly undefined
