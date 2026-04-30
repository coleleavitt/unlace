__int64 __fastcall sub_227070(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = bpt_kernel_interface;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(bpt_kernel_interface, v4);
  v7 = get_bpt_kernel_interface(v5, v4);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 112LL))(
           v7,
           v6,
           *(unsigned __int8 *)(a1 + 32));
}
