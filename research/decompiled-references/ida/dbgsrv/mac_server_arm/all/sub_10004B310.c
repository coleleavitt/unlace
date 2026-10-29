/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B310
// Address: 0x000000010004B310

//----- (000000010004B310) ----------------------------------------------------
_QWORD *__fastcall sub_10004B310(_QWORD *a1)
{
  _BYTE *v2; // x0
  void *v3; // x0
  void *v4; // x0

  *a1 = off_10009AD30;
  a1[24] = off_10009AD88;
  v2 = (_BYTE *)a1[55];
  if ( (v2[732] & 1) == 0 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_10005CD60((__int64)a1);
  a1[56] = 0;
  free_debug_event((__int64)(a1 + 46));
  free_debug_event((__int64)(a1 + 37));
  a1[24] = off_10009BB60;
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
  return sub_10005CD88(a1);
}
// 10009AD30: using guessed type __int64 (__fastcall *off_10009AD30[9])();
// 10009AD88: using guessed type __int64 (__fastcall *off_10009AD88[9])();
// 10009BB60: using guessed type void (__fastcall __noreturn *off_10009BB60[2])();
