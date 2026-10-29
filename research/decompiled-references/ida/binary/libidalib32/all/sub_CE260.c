void sub_CE260()
{
  __int64 bpt_kernel_interface; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 200LL))(bpt_kernel_interface) > 0
    && (int)sub_CC780((__int64)qword_2515B0, 3) > 0 )
  {
    dword_251538 |= 2u;
    sub_CB4C0("Exiting...");
  }
}

