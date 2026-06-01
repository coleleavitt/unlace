/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054650
// Address: 0x0000000100054650

//----- (0000000100054650) ----------------------------------------------------
void __fastcall sub_100054650(_QWORD *a1)
{
  _BYTE *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_1000A9610;
  a1[24] = off_1000A9668;
  v2 = (_BYTE *)a1[55];
  if ( !v2[732] )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_100069360((__int64)a1);
  a1[56] = 0;
  free_debug_event((__int64)(a1 + 46));
  free_debug_event((__int64)(a1 + 37));
  a1[24] = off_1000AA6B8;
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
  sub_100069390(a1);
}
// 1000A9610: using guessed type __int64 (__fastcall *off_1000A9610)();
// 1000A9668: using guessed type __int64 (__fastcall *off_1000A9668[9])();
// 1000AA6B8: using guessed type void (__fastcall __noreturn *off_1000AA6B8[2])();
