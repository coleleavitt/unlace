__int64 __fastcall sub_19B7E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 bpt_kernel_interface; // rax

  v2 = sub_19AFC0(a1, a2);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 112LL))(
           bpt_kernel_interface,
           v2,
           1);
}
