__int64 __fastcall _cryptex1_sniff_fire(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w19
  int *v4; // x0
  __int64 result; // x0
  __int64 unsafe; // x0
  __int64 v7; // x19
  __int64 v8; // x20
  __int64 v9; // x21
  int *v10; // x0
  stat v11; // [xsp+10h] [xbp-B0h] BYREF

  memset(&v11, 0, sizeof(v11));
  v3 = fstatat(*(_DWORD *)(a3 + 24), "cryptex1", &v11, 0);
  v4 = __error();
  if ( v3 < 0 )
  {
    if ( !*v4 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "ret", v3);
  }
  else
  {
    *v4 = 0;
  }
  result = (unsigned int)*__error();
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 2 )
    {
      unsafe = boot_get_unsafe(result);
      v7 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
      v8 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
      v9 = (unsigned int)*__error();
      v10 = __error();
      ignition_halt(v7, v9, v8, "failed to stat cryptex1 canary: %d", *v10);
    }
    return 8;
  }
  return result;
}
