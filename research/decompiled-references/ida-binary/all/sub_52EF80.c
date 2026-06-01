double __fastcall ui_action_t__::vfunc_0(__int64 a1, const char *a2)
{
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdi
  double result; // xmm0_8
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = *(_BYTE *)(a1 + 156) == 0;
  *(_QWORD *)a1 = &ui_action_t___vtable;
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    result = qfree(v5, a2);
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    result = qfree(v7, a2);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return qfree(v8, a2);
  }
  return result;
}
