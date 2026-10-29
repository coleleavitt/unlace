__int64 __fastcall sub_B75B0(__int64 a1)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v2; // rbx
  __int64 v3; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 280LL))(
         bpt_kernel_interface,
         *(_QWORD *)(a1 + 24));
  v3 = get_bpt_kernel_interface();
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 120LL))(v3, v2);
}

