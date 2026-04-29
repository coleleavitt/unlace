__int64 __fastcall ignite(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  int v7; // w9
  int v8; // w20
  int *v9; // x0
  int *v10; // x0
  int v11; // w8
  pid_t v12; // w20
  size_t v13; // x21
  int *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x20
  pid_t v19; // w0
  pid_t v20; // w0
  pid_t v21; // w0
  pid_t v22; // w0
  pid_t v23; // w0
  __int64 v24; // x20
  __int64 v25; // x21
  __int64 v26; // x20
  pid_t v27; // w0
  __int64 v29; // x21
  __int64 unsafe; // x0
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x19
  __int64 v37; // x20
  __int64 v38; // x21
  int *v39; // x0
  size_t v40; // [xsp+20h] [xbp-540h] BYREF
  _BYTE v41[1216]; // [xsp+28h] [xbp-538h] BYREF
  __int64 v42; // [xsp+4E8h] [xbp-78h] BYREF
  _OWORD v43[2]; // [xsp+4F0h] [xbp-70h] BYREF
  __int64 v44; // [xsp+510h] [xbp-50h]
  int v45; // [xsp+524h] [xbp-3Ch]
  __int64 v46; // [xsp+528h] [xbp-38h]

  v44 = 0xFFFFFFFFLL;
  memset(v43, 0, sizeof(v43));
  LODWORD(v43[0]) = 1;
  v42 = 0;
  __bzero(v41, 0x4C0u);
  v40 = 1216;
  v46 = 1;
  v45 = 2;
  if ( __getpid() == 1 )
  {
    v4 = _open_as(0x20000);
    if ( (_DWORD)v4 )
    {
      v29 = v4;
      unsafe = boot_get_unsafe(v4);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)unsafe + 8LL),
        v29,
        *(_QWORD *)(*(_QWORD *)unsafe + 16LL),
        "failed to reserve stdin descriptor: %s: %d");
    }
    v5 = _open_as(131073);
    if ( (_DWORD)v5 )
    {
      v31 = v5;
      v32 = boot_get_unsafe(v5);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)v32 + 8LL),
        v31,
        *(_QWORD *)(*(_QWORD *)v32 + 16LL),
        "failed to reserve stdout descriptor: %s: %d");
    }
    v6 = _open_as(131074);
    if ( (_DWORD)v6 )
    {
      v33 = v6;
      v34 = boot_get_unsafe(v6);
      ignition_halt(
        *(_QWORD *)(*(_QWORD *)v34 + 8LL),
        v33,
        *(_QWORD *)(*(_QWORD *)v34 + 16LL),
        "failed to reserve stderr descriptor: %s: %d");
    }
  }
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 != 1 )
      dyld_halt("unsupported parameter struct version: 0x%x", *(_DWORD *)a1);
    HIDWORD(v44) = *(_DWORD *)(a1 + 36);
  }
  v7 = *(_DWORD *)(a1 + 4);
  LODWORD(v43[0]) = 1;
  DWORD1(v43[0]) = v7;
  *(_OWORD *)((char *)v43 + 8) = *(_OWORD *)(a1 + 8);
  *((_QWORD *)&v43[1] + 1) = *(_QWORD *)(a1 + 24);
  LODWORD(v44) = *(_DWORD *)(a1 + 32);
  log_init((__int64)v43);
  dlog(0xFFFFFFFFLL, "%s\n", __darwin_version_string[0]);
  v8 = sysctlbyname("kern.bootargs", v41, &v40, nullptr, 0);
  v9 = __error();
  if ( v8 < 0 )
  {
    if ( !*v9 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "ret", v8);
  }
  else
  {
    *v9 = 0;
  }
  v10 = __error();
  v11 = *v10;
  if ( *v10 > 11 )
  {
    if ( v11 != 22 )
    {
      if ( v11 != 12 )
        goto LABEL_32;
      v12 = __getpid();
      v13 = v40;
      v14 = __error();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: boot-arg buff not large enough: actual = %lu, expected >= %lu: %d\n",
        v12,
        v13,
        1216,
        *v14);
    }
    goto LABEL_18;
  }
  if ( (unsigned int)(v11 - 1) < 2 )
  {
LABEL_18:
    v41[0] = 0;
    goto LABEL_19;
  }
  if ( v11 )
  {
LABEL_32:
    v35 = boot_get_unsafe(v10);
    v36 = *(_QWORD *)(*(_QWORD *)v35 + 8LL);
    v37 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
    v38 = (unsigned int)*__error();
    v39 = __error();
    ignition_halt(v36, v38, v37, "failed to read boot args: %d", *v39);
  }
LABEL_19:
  v15 = arguments_init(v41);
  v16 = arguments(v15);
  arguments_dump(v16);
  v17 = configuration_init(v43, v41);
  v18 = configuration(v17);
  configuration_dump();
  if ( __getpid() == 1 )
  {
    v19 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %s   :\n", v19, "parameters       ");
    v20 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v20, "version          ", LODWORD(v43[0]));
    v21 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v21, "argc             ", SDWORD1(v43[0]));
    v22 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v22, "log fd           ", (int)v44);
    v23 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v23, "platform         ", HIDWORD(v44));
  }
  v24 = boot_select_spec(v18);
  boot_dump_spec();
  v25 = boot_init(v24);
  v42 = v25;
  v26 = boot_boot();
  if ( (_DWORD)v26 )
  {
    v27 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: ignition boot failed: %d\n", v27, v26);
  }
  else
  {
    boot_set_payload(v25, &_boot_root_preboot, a2);
    boot_set_payload(v25, &_boot_root_dylib_cache, a2);
    boot_set_payload(v25, &_boot_root_xart, a2);
    boot_set_payload(v25, &_boot_root_cryptex_app, a2);
    boot_set_payload(v25, &_boot_root_cryptex_os, a2);
    boot_set_payload(v25, &_boot_root_preboot_groupdir, a2);
  }
  if ( __getpid() == 1 )
  {
    close(0);
    close(1);
    close(2);
  }
  boot_destroy(&v42);
  log_destroy();
  return v26;
}
