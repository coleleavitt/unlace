/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CF78
// Address: 0x000000000047CF78

//----- (000000000047CF78) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_47CF78(const char *a1))()
{
  unsigned __int8 v2; // w1
  __int64 v3; // x19
  _QWORD *v4; // x20
  pthread_mutex_t *v5; // x21
  _QWORD *v6; // x0
  __int64 v7; // x3
  const char *v9; // x0

  v2 = atomic_load((unsigned __int8 *)&byte_5223C8);
  if ( (v2 & 1) != 0 || !(unsigned int)sub_49F4B8((unsigned __int8 *)&byte_5223C8) )
  {
    v3 = qword_5223F0;
  }
  else
  {
    v3 = sub_493CB0(a1, 1u);
    qword_5223F0 = v3;
    sub_49F630((__int64)&byte_5223C8);
  }
  if ( !v3 )
  {
    v9 = sub_493840(-1);
    sub_40A608("%s qsem: %s", a1, v9);
  }
  if ( !sub_4941A8(v3, 0) )
    sub_40A608("%s: another running copy has been detected, exiting...", a1);
  v4 = sub_49E050(8u);
  v5 = (pthread_mutex_t *)qword_5223D0;
  *v4 = &off_51E3A8;
  sub_494720(v5);
  v6 = (_QWORD *)qword_5223D8;
  v7 = qword_5223E0;
  if ( qword_5223E0 + 1 > (unsigned __int64)qword_5223E8 )
  {
    v6 = sub_491288((__int64)&qword_5223D8, (void *)qword_5223D8, qword_5223E0 + 1, 8u);
    v7 = qword_5223E0;
    qword_5223D8 = (__int64)v6;
  }
  v6[v7] = v4;
  ++qword_5223E0;
  sub_494760(v5);
  *v4 = off_51BBB8;
  return off_51BBB8;
}
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
// 51BBB8: using guessed type __int64 (__fastcall *off_51BBB8[3])();
// 51E3A8: using guessed type void (__fastcall __noreturn *off_51E3A8)();
// 5223C8: using guessed type char byte_5223C8;
// 5223D0: using guessed type __int64 qword_5223D0;
// 5223D8: using guessed type __int64 qword_5223D8;
// 5223E0: using guessed type __int64 qword_5223E0;
// 5223E8: using guessed type __int64 qword_5223E8;
// 5223F0: using guessed type __int64 qword_5223F0;
