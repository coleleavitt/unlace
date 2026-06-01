__int64 __fastcall enable_disable_bpt_ah_t__::vfunc_4(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // al
  char v5; // dl
  __int64 bpt_kernel_interface; // rax
  int v7; // edx
  __int64 result; // rax
  const char *v9; // rdx
  bool v10; // zf
  const char *v11; // rdx

  v4 = *(_BYTE *)(a3 + 72);
  v5 = *(_BYTE *)(a1 + 13);
  if ( v5 == ((v4 & 8) != 0) )
  {
    v10 = v5 == 0;
    v11 = "disabled";
    if ( !v10 )
      v11 = "enabled";
    sub_169A50(a2, (__int64)"Breakpoint is already %s!", v11);
  }
  else
  {
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 112LL))(
           bpt_kernel_interface,
           a3,
           *(unsigned __int8 *)(a1 + 13));
    result = 0;
    if ( v7 <= 0 )
      return result;
    v9 = "disabled";
    if ( *(_BYTE *)(a1 + 13) )
      v9 = "enabled";
    sub_169A50(a2, (__int64)"Breakpoint has been %s.", v9);
  }
  return 1;
}
