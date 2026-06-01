void __fastcall deferred_wait_dialog_t__::vfunc_2(_BYTE *a1, const char *a2)
{
  bool v2; // zf
  __int64 v4; // rdi

  v2 = a1[16] == 0;
  *(_QWORD *)a1 = deferred_wait_dialog_t___vtable;
  if ( v2 )
    sub_541C50(a1);
  else
    sub_1C78D0();
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree(v4, a2);
  }
  operator delete(a1, 0x30u);
}
