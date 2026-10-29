/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000617CC
// Address: 0x00000001000617CC

//----- (00000001000617CC) ----------------------------------------------------
__int64 __fastcall sub_1000617CC(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = operator new(0x10u);
  sub_100065674(v2);
  *v2 = off_10009FB78;
  v2[1] = a1;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100065794();
}
// 100061818: variable '_18' is possibly undefined
// 10009FB78: using guessed type __int64 (__fastcall *off_10009FB78[3])();
