/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000622BC
// Address: 0x00000001000622BC

//----- (00000001000622BC) ----------------------------------------------------
void __fastcall sub_1000622BC(_QWORD **a1)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009FB40;
  sub_100062328((__int64)(a1 + 1), a1[2]);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(a1);
}
// 100062308: variable '_18' is possibly undefined
// 10009FB40: using guessed type __int64 (__fastcall *off_10009FB40[5])();
