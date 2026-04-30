double __fastcall deferred_wait_dialog_t__::vfunc_1(__int64 a1, const char *a2)
{
  bool v2; // zf
  __int64 v4; // rdi
  double result; // xmm0_8

  v2 = *(_BYTE *)(a1 + 16) == 0;
  *(_QWORD *)a1 = deferred_wait_dialog_t___vtable;
  if ( v2 )
    sub_541C50();
  else
    sub_1C78D0();
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    return qfree(v4, a2);
  }
  return result;
}
