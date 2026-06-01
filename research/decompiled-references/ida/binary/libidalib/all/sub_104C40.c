__int64 sub_104C40()
{
  __int64 bpt_kernel_interface; // rax

  if ( !dbg || !*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL) )
    return 7;
  if ( (~WORD4(xmmword_2528B0) & 0x600) != 0 )
    return 7;
  bpt_kernel_interface = get_bpt_kernel_interface();
  if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
         bpt_kernel_interface,
         xmmword_2528A0) )
  {
    return 7;
  }
  return 3;
}

