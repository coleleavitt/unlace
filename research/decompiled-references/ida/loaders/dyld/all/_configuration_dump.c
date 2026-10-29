__int64 __fastcall configuration_dump(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x8
  __int64 v4; // x26
  __int64 v5; // x8
  unsigned int v6; // w23
  __int64 v7; // x24
  pid_t v8; // w0
  pid_t v9; // w0
  const char *v10; // x9
  pid_t v11; // w0
  const char *v12; // x9
  pid_t v13; // w0
  const char *v14; // x9
  pid_t v15; // w0
  const char *v16; // x9
  pid_t v17; // w0
  const char *v18; // x9
  pid_t v19; // w0
  const char *v20; // x9
  pid_t v21; // w0
  pid_t v22; // w0
  pid_t v23; // w0
  pid_t v24; // w0
  pid_t v25; // w0
  pid_t v26; // w0
  pid_t v27; // w0
  const char *v28; // x9
  pid_t v29; // w0
  pid_t v30; // w0
  pid_t v31; // w0
  pid_t v32; // w0
  pid_t v33; // w0
  const char *v34; // x9

  result = __getpid();
  if ( (int)result > 1 )
    return result;
  v3 = *(__int64 **)(a1 + 6800);
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 6952);
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(v5 + 46);
  if ( !_platform_strcmp((const char *)(v5 + 50), (const char *)&unk_7E832) )
  {
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 6952) + 50LL;
LABEL_10:
  v8 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %s   :\n", v8, "configuration      ");
  v9 = __getpid();
  if ( *(_QWORD *)(a1 + 8) )
    v10 = *(const char **)(a1 + 8);
  else
    v10 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v9, "program            ", v10);
  v11 = __getpid();
  if ( *(_QWORD *)(a1 + 272) )
    v12 = *(const char **)(a1 + 272);
  else
    v12 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v11, "os environment     ", v12);
  v13 = __getpid();
  if ( *(_QWORD *)(a1 + 392) )
    v14 = *(const char **)(a1 + 392);
  else
    v14 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v13, "rd                 ", v14);
  v15 = __getpid();
  if ( *(_QWORD *)(a1 + 472) )
    v16 = *(const char **)(a1 + 472);
  else
    v16 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v15, "arp0               ", v16);
  v17 = __getpid();
  if ( *(_QWORD *)(a1 + 1504) )
    v18 = *(const char **)(a1 + 1504);
  else
    v18 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v17, "rp                 ", v18);
  v19 = __getpid();
  if ( *(_QWORD *)(a1 + 3568) )
    v20 = *(const char **)(a1 + 3568);
  else
    v20 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v19, "pivot src          ", v20);
  v21 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v21, "root ramdisk       ", *(unsigned int *)(a1 + 4600));
  v22 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v22, "restore            ", *(unsigned __int8 *)(a1 + 4604));
  v23 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v23, "root device info   ", *(_QWORD *)(a1 + 4608));
  v24 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v24, "can haz debugger   ", *(unsigned int *)(a1 + 4616));
  v25 = __getpid();
  dlog(
    0xFFFFFFFFLL,
    "libignition: %d:   %s : 0x%llx\n",
    v25,
    "rootfs mount flags ",
    *(unsigned int *)(*(_QWORD *)(a1 + 6792) + 64LL));
  v26 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v26, "ecid               ", v4);
  v27 = __getpid();
  if ( *(_QWORD *)(a1 + 6960) )
    v28 = *(const char **)(a1 + 6960);
  else
    v28 = "n/a";
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v27, "hardware target    ", v28);
  v29 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v29, "initproc           ", *(unsigned __int8 *)(a1 + 7032));
  v30 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v30, "single user        ", *(unsigned __int8 *)(a1 + 7033));
  v31 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v31, "userspace reboot   ", *(unsigned __int8 *)(a1 + 7034));
  v32 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v32, "secure boot level  ", v6);
  v33 = __getpid();
  if ( v7 )
    v34 = (const char *)v7;
  else
    v34 = "n/a";
  return dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v33, "os version         ", v34);
}
