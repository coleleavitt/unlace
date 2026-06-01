__int64 __fastcall ignition_get_mount_point_by_role(int a1, char *a2, char **a3)
{
  int v6; // w22
  int *v7; // x0
  int *v8; // x0
  __int64 result; // x0
  size_t v10; // x8
  const char *i; // x9
  __int64 v12; // x0
  __int64 unsafe; // x0
  __int64 v14; // x0
  size_t v15; // [xsp+20h] [xbp-970h] BYREF
  _BYTE v16[232]; // [xsp+28h] [xbp-968h] BYREF
  __int64 v17; // [xsp+110h] [xbp-880h] BYREF

  __bzero(v16, 0x938u);
  v15 = 2360;
  v6 = sysctlbyname("vfs.generic.apfs.edt_fstab", v16, &v15, nullptr, 0);
  v7 = __error();
  if ( v6 < 0 )
  {
    if ( !*v7 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "ret", v6);
  }
  else
  {
    *v7 = 0;
  }
  v8 = __error();
  if ( *v8 )
  {
    if ( *v8 == 12 )
    {
      v15 = 0;
      v12 = sysctlbyname("vfs.generic.apfs.edt_fstab", nullptr, &v15, nullptr, 0);
      unsafe = boot_get_unsafe(v12);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)unsafe + 8LL),
        0,
        *(_QWORD *)(*(_QWORD *)unsafe + 16LL),
        "device tree fstab buffer not large enough: actual = %lu, expected >= %lu, required DEVICE_TREE_FSTAB_COUNT >= %lu");
    }
    result = (unsigned int)*__error();
    if ( (unsigned int)result >= 0x6A )
      dyld_halt("error not set to valid posix code: %d", result);
  }
  else
  {
    v10 = v15 / 0xEC;
    if ( v15 % 0xEC )
    {
      v14 = boot_get_unsafe(v8);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)v14 + 8LL),
        0,
        *(_QWORD *)(*(_QWORD *)v14 + 16LL),
        "non-integral fstab buffer returned; possible mismatch between kernel and userspace structs: total = %lu, expecte"
        "d element size = %lu");
    }
    if ( v15 < 0xEC )
    {
      return 2;
    }
    else
    {
      for ( i = (const char *)&v17; *(_DWORD *)i != a1; i += 236 )
      {
        if ( !--v10 )
          return 2;
      }
      strlcpy(a2, i - 200, 0x400u);
      result = 0;
      *a3 = a2;
    }
  }
  return result;
}
