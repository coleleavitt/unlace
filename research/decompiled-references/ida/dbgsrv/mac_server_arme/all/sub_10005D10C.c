/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D10C
// Address: 0x000000010005D10C

//----- (000000010005D10C) ----------------------------------------------------
_QWORD *__fastcall sub_10005D10C(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009F4D0;
  v1 = (void *)a1[14];
  if ( v1 )
  {
    v2 = a1;
    a1[15] = 0;
    qfree(v1);
    a1 = v2;
    v2[14] = 0;
    v2[16] = 0;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000611D8(a1);
}
// 10005D168: variable '_18' is possibly undefined
// 10009F4D0: using guessed type __int64 (__fastcall *off_10009F4D0[4])();
