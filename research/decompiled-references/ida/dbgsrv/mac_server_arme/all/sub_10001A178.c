/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A178
// Address: 0x000000010001A178

//----- (000000010001A178) ----------------------------------------------------
void __fastcall sub_10001A178(_QWORD **a1)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009CFC8;
  sub_10000938C((__int64)(a1 + 4), a1[5]);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(a1);
}
// 10001A1C4: variable '_18' is possibly undefined
// 10009CFC8: using guessed type __int64 (__fastcall *off_10009CFC8[6])();
