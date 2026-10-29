/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004DC0C
// Address: 0x000000010004DC0C

//----- (000000010004DC0C) ----------------------------------------------------
_QWORD *__fastcall sub_10004DC0C(_QWORD *a1)
{
  _BYTE *v2; // x0
  void *v3; // x0
  void *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009ED70;
  a1[24] = off_10009EDC8;
  v2 = (_BYTE *)a1[55];
  if ( (v2[732] & 1) == 0 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_100060B54((__int64)a1);
  a1[56] = 0;
  free_debug_event((__int64)(a1 + 46));
  free_debug_event((__int64)(a1 + 37));
  a1[24] = off_10009FBA0;
  v3 = (void *)a1[33];
  if ( v3 )
  {
    a1[34] = 0;
    qfree(v3);
    a1[33] = 0;
    a1[35] = 0;
  }
  v4 = (void *)a1[26];
  if ( v4 )
  {
    a1[27] = 0;
    qfree(v4);
    a1[26] = 0;
    a1[28] = 0;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100060B7C(a1);
}
// 10004DD04: variable '_18' is possibly undefined
// 10009ED70: using guessed type __int64 (__fastcall *off_10009ED70[9])();
// 10009EDC8: using guessed type __int64 (__fastcall *off_10009EDC8[9])();
// 10009FBA0: using guessed type void (__fastcall __noreturn *off_10009FBA0[2])();
