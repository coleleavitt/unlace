__int64 __fastcall sub_986A0(__int64 a1)
{
  __int64 bpt_kernel_interface; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 312LL))(
           bpt_kernel_interface,
           a1,
           0);
}

