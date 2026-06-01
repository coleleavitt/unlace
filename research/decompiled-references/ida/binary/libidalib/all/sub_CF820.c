void sub_CF820()
{
  __int64 bpt_kernel_interface; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 200LL))(bpt_kernel_interface) > 0
    && (int)sub_CDCF0((__int64)qword_252758, 3) > 0 )
  {
    dword_2526BC |= 2u;
    sub_CCA40("Exiting...");
  }
}

