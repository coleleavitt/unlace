/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BE98
// Address: 0x000000010000BE98

//----- (000000010000BE98) ----------------------------------------------------
void __fastcall sub_10000BE98(__int64 a1, _QWORD *a2)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10000BE98(a1, *a2);
    sub_10000BE98(a1, a2[1]);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 10000BEDC: variable '_18' is possibly undefined
