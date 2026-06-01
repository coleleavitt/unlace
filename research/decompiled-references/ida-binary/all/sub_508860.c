_BOOL8 __fastcall form_actions_impl_t__::vfunc_12(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax

  v2 = sub_4F9F10(*(_QWORD *)(a1 + 8), a2);
  result = 0;
  if ( v2 )
    return (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 8LL) & 1) == 0;
  return result;
}
