__int64 __fastcall sub_451780(int a1, const char *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v2 == form_actions_impl_t__::vfunc_9 )
    v3 = *((_QWORD *)a2 + 4);
  else
    v3 = v2((__int64)a2);
  if ( a1 != -5 )
  {
    result = sub_4513D0((unsigned int *)v3, a1, (__int64)a2);
    if ( !(_DWORD)result )
      return result;
    if ( *(_BYTE *)(v3 + 73) != 1 && a1 == -7 )
      (*(void (__fastcall **)(const char *, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 0);
    return 1;
  }
  if ( !v3 )
    return 1;
  v5 = *(_QWORD *)(v3 + 48);
  if ( v5 )
  {
    *(_QWORD *)(v3 + 56) = 0;
    qfree(v5, a2);
  }
  v6 = *(_QWORD *)(v3 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v3 + 24) = 0;
    qfree(v6, a2);
  }
  operator delete((void *)v3, 0x58u);
  return 1;
}
