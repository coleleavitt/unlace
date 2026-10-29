__int64 sub_104B70()
{
  __int64 bpt_kernel_interface; // rax

  if ( !dbg || !*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL) )
    return 7;
  bpt_kernel_interface = get_bpt_kernel_interface();
  if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
         bpt_kernel_interface,
         xmmword_2528A0) )
  {
    return 7;
  }
  else
  {
    return 3;
  }
}

