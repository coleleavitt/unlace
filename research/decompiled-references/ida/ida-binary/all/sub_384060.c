__int64 __fastcall sub_384060(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 bpt_kernel_interface; // rax
  const char *v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const char *, _QWORD, _QWORD); // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v6 = &s1;
  v7 = bpt_kernel_interface;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const char *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 136LL);
  if ( *(_QWORD *)(a1 + 64) )
    v6 = *(const char **)(a1 + 56);
  return v8(v7, a2, v6, a3, 0);
}
