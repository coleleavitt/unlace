__int64 __fastcall sub_19A8C0(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rbx
  __int64 v3; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(bpt_kernel_interface, a1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(
             bpt_kernel_interface,
             v3);
  else
    return 0;
}
