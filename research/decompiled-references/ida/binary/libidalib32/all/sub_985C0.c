__int64 __fastcall sub_985C0(__int64 a1)
{
  __int64 bpt_kernel_interface; // rbx
  __int64 v2; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(bpt_kernel_interface, a1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(
             bpt_kernel_interface,
             v2);
  else
    return 0;
}

