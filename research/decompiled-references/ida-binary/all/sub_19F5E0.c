__int64 __fastcall sub_19F5E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 bpt_kernel_interface; // rbp
  _QWORD *v6; // rbx
  __int64 i; // r12
  __int64 v8; // rsi

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 296LL))(bpt_kernel_interface);
  v6 = (_QWORD *)*a4;
  for ( i = *a4 + 8LL * a4[1]; (_QWORD *)i != v6; ++v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 168LL))(
           bpt_kernel_interface,
           *v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(bpt_kernel_interface, v8);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 304LL))(bpt_kernel_interface);
  sub_199E30(0);
  return 2;
}
