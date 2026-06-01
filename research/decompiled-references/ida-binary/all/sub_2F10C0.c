__int64 __fastcall sub_2F10C0(int a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi

  v3 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v3 == form_actions_impl_t__::vfunc_9 )
    v4 = a2[4];
  else
    v4 = v3((__int64)a2);
  if ( a1 == 10 )
  {
    sub_2F0FB0(v4, 1, nullptr);
    return 0;
  }
  else
  {
    if ( a1 == 11 )
      sub_2F0FB0(v4, 0, nullptr);
    return 0;
  }
}
