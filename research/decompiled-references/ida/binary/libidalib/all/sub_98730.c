bool __fastcall sub_98730(__int64 a1, unsigned __int8 a2)
{
  __int64 bpt_kernel_interface; // rbx
  __int64 v3; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a1);
  return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 112LL))(
           bpt_kernel_interface,
           v3,
           a2) > 0;
}

