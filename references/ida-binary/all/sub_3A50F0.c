_BOOL8 __fastcall sub_3A50F0(int a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rdx
  _BOOL8 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v2 == form_actions_impl_t__::vfunc_9 )
    v3 = a2[4];
  else
    v3 = v2((__int64)a2);
  result = 1;
  if ( a1 == -2 )
    return *(_QWORD *)(v3 + 96) == 0;
  return result;
}
