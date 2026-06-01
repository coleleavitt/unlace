__int64 __fastcall sub_19A9A0(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 80LL))(
           bpt_kernel_interface,
           (unsigned int)a1);
}
