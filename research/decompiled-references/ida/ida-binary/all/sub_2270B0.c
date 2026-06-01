__int64 __fastcall sub_2270B0(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = bpt_kernel_interface;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(bpt_kernel_interface, v3);
  v6 = get_bpt_kernel_interface(v4, v3);
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, v5);
}
