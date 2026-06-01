__int64 __fastcall sub_228210(int a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax

  if ( a1 != -1 )
    return 1;
  v3 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v3 == form_actions_impl_t__::vfunc_9 )
    v4 = a2[4];
  else
    v4 = v3((__int64)a2);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 16LL))(a2, 1, 0);
  return 1;
}
