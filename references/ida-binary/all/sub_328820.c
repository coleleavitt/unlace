__int64 __fastcall sub_328820(int a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi

  v3 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v3 == form_actions_impl_t__::vfunc_9 )
    v4 = a2[4];
  else
    v4 = v3((__int64)a2);
  if ( a1 != -1 && a1 != 100 )
    return 1;
  sub_328750(v4, (__int64)a2);
  return 1;
}
