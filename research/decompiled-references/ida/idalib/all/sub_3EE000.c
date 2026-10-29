__int64 sub_3EE000()
{
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 (__fastcall ***v1)(); // rax
  __int64 (__fastcall ***v2)(); // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)()))(*bpt_kernel_interface)[2])(bpt_kernel_interface);
  v1 = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v1)[11])(v1);
  v2 = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), _QWORD))(*v2)[1])(v2, 0);
  return 1;
}
