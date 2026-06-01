__int64 __fastcall sub_C6DD0(__int64 a1)
{
  __int64 result; // rax
  __int64 bpt_kernel_interface; // rax

  *(_QWORD *)a1 = &off_235CD0;
  result = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)result || *(_DWORD *)(a1 + 76) != -1 )
  {
    bpt_kernel_interface = get_bpt_kernel_interface();
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(
               bpt_kernel_interface,
               a1 + 24);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree();
  }
  return result;
}

