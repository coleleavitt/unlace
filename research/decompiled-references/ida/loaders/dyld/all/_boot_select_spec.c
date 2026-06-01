char **__fastcall boot_select_spec(__int64 a1)
{
  char **result; // x0

  ignition_test_BRA();
  if ( !*(_BYTE *)(a1 + 7032) )
    return &_boot_spec_post_initproc;
  if ( *(_QWORD *)(a1 + 400) )
    return &_boot_spec_remote_ramdisk;
  if ( *(_DWORD *)(a1 + 4600) || *(_QWORD *)(a1 + 472) || *(_QWORD *)(a1 + 1504) || *(_QWORD *)(a1 + 2536) )
    return &_boot_spec_remote_nerd;
  if ( *(_BYTE *)(a1 + 4604) )
    return &_boot_spec_remote_ramdisk;
  if ( *(_QWORD *)(a1 + 280) || *(_QWORD *)(a1 + 288) || *(_QWORD *)(a1 + 296) )
    return &_boot_spec_remote_dmg;
  result = &_boot_spec_local;
  if ( !*(_QWORD *)(a1 + 304) )
  {
    if ( *(_QWORD *)(a1 + 312) )
      return &_boot_spec_remote_dmg;
    result = &_boot_spec_remote_dmg;
    if ( !*(_QWORD *)(a1 + 320) && (*(_BYTE *)(a1 + 4608) & 1) == 0 )
      return &_boot_spec_local;
  }
  return result;
}
