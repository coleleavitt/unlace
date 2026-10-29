__int64 __fastcall sub_512E20(__int64 a1, const char *a2, unsigned int a3, unsigned int a4)
{
  __int64 bpt_kernel_interface; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 320LL))(
           bpt_kernel_interface,
           a2,
           a3,
           a4);
}

