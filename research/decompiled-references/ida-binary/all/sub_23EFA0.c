__int64 __fastcall exit_process(__int64 a1, __int64 a2, double a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  char *v6; // rcx

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 200LL))(bpt_kernel_interface);
  if ( (int)result > 0 )
  {
    result = sub_23D480((__int64)qword_8CC600, 3, v5, v6, a3);
    if ( (int)result > 0 )
    {
      dword_8CC55C |= 2u;
      return sub_30A040("Exiting...");
    }
  }
  return result;
}
