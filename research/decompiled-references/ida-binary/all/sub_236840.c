double __fastcall sub_236840(__int64 a1, const char *a2)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v4; // rdi
  double result; // xmm0_8

  *(_QWORD *)a1 = &off_870E18;
  if ( *(_DWORD *)(a1 + 68) || *(_QWORD *)(a1 + 80) != -1 )
  {
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    a2 = (const char *)(a1 + 24);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(bpt_kernel_interface, a1 + 24);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree(v4, a2);
  }
  return result;
}
