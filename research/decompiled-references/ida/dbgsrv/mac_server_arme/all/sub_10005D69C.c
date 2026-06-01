/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D69C
// Address: 0x000000010005D69C

//----- (000000010005D69C) ----------------------------------------------------
void __fastcall sub_10005D69C(_QWORD *a1)
{
  void *v2; // x0
  _QWORD *v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009F4D0;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
    a1[14] = 0;
    a1[16] = 0;
  }
  v3 = sub_1000611D8(a1);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v3);
}
// 10005D6F8: variable '_18' is possibly undefined
// 10009F4D0: using guessed type __int64 (__fastcall *off_10009F4D0[4])();
