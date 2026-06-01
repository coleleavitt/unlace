__int64 __fastcall sub_19F660(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 160LL))(bpt_kernel_interface, a2);
  if ( v3
    && (v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)bpt_kernel_interface + 104LL))(
               bpt_kernel_interface,
               v3,
               &v6)) != 0
    && v6 > 0 )
  {
    return *(_QWORD *)v4;
  }
  else
  {
    return -1;
  }
}
