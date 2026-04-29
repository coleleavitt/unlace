__int64 __fastcall _preboot_fire(const char **a1, __int64 a2, __int64 a3)
{
  __int64 devnode_by_role; // x21
  pid_t v6; // w0
  pid_t v7; // w0
  int v9; // w0
  int v10; // w21
  pid_t v11; // w0
  uid_t st_uid; // w24
  gid_t st_gid; // w25
  pid_t v14; // w0
  __int64 v15; // x0
  __int64 v16; // x0
  pid_t v17; // w0
  int v18; // [xsp+34h] [xbp-73Ch] BYREF
  int v19; // [xsp+38h] [xbp-738h] BYREF
  int v20; // [xsp+3Ch] [xbp-734h] BYREF
  stat v21; // [xsp+40h] [xbp-730h] BYREF
  __int128 v22; // [xsp+D0h] [xbp-6A0h]
  __int128 v23; // [xsp+E0h] [xbp-690h]
  __int128 v24; // [xsp+F0h] [xbp-680h]
  __int128 v25; // [xsp+100h] [xbp-670h]
  __int128 v26; // [xsp+110h] [xbp-660h]
  __int128 v27; // [xsp+120h] [xbp-650h]
  __int128 v28; // [xsp+130h] [xbp-640h]
  __int128 v29; // [xsp+140h] [xbp-630h]
  __int128 v30; // [xsp+150h] [xbp-620h]
  __int128 v31; // [xsp+160h] [xbp-610h]
  __int128 v32; // [xsp+170h] [xbp-600h]
  __int128 v33; // [xsp+180h] [xbp-5F0h]
  __int128 v34; // [xsp+190h] [xbp-5E0h]
  __int128 v35; // [xsp+1A0h] [xbp-5D0h]
  __int128 v36; // [xsp+1B0h] [xbp-5C0h]
  __int128 v37; // [xsp+1C0h] [xbp-5B0h]
  __int128 v38; // [xsp+1D0h] [xbp-5A0h]
  __int128 v39; // [xsp+1E0h] [xbp-590h]
  __int128 v40; // [xsp+1F0h] [xbp-580h]
  __int128 v41; // [xsp+200h] [xbp-570h]
  int v42; // [xsp+210h] [xbp-560h]
  __int64 v43; // [xsp+214h] [xbp-55Ch]
  const char *v44; // [xsp+228h] [xbp-548h] BYREF
  _BYTE v45[1024]; // [xsp+230h] [xbp-540h] BYREF
  char v46[256]; // [xsp+630h] [xbp-140h] BYREF

  configuration();
  memset(v46, 0, 255);
  __bzero(v45, 0x400u);
  v44 = nullptr;
  v42 = 0;
  v40 = 0u;
  v41 = 0u;
  v38 = 0u;
  v39 = 0u;
  v36 = 0u;
  v37 = 0u;
  v34 = 0u;
  v35 = 0u;
  v32 = 0u;
  v33 = 0u;
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v26 = 0u;
  v27 = 0u;
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  LOWORD(v23) = 1;
  v43 = 0x6300000063LL;
  memset(&v21, 0, sizeof(v21));
  v19 = -1;
  v20 = -1;
  v18 = -1;
  devnode_by_role = ignition_get_devnode_by_role(16, v46);
  v6 = __getpid();
  if ( !(_DWORD)devnode_by_role )
  {
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: preboot device: %s\n", v6, *a1, v46);
    devnode_by_role = ignition_get_mount_point_by_role(16, v45, &v44);
    v7 = __getpid();
    if ( (_DWORD)devnode_by_role )
    {
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to get preboot mount point: %d\n");
      goto LABEL_6;
    }
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: preboot mount point: %s\n", v7, *a1, v44);
    v9 = open(v44, 537919488);
    v20 = v9;
    if ( v9 < 0 )
    {
      v11 = __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to open preboot mount point: %d\n", v11, *a1, 0);
    }
    else
    {
      v10 = v9;
      if ( fstat(v9, &v21) )
      {
        devnode_by_role = (unsigned int)*__error();
        __getpid();
        dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to stat preboot mount point: %d\n");
        goto LABEL_6;
      }
      *(_QWORD *)&v22 = v46;
      st_uid = v21.st_uid;
      st_gid = v21.st_gid;
      v43 = *(_QWORD *)&v21.st_uid;
      v14 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: mounting preboot: dev = %s, uid = %u, gid = %u\n",
        v14,
        *a1,
        v46,
        st_uid,
        st_gid);
      v15 = fmount_90140467("apfs", v10, 0x100000, v46);
      if ( (_DWORD)v15 == 16 )
      {
        v17 = __getpid();
        dlog(
          0xFFFFFFFFLL,
          "libignition: %d: %12s: preboot already mounted: device = %s, mount point = %s\n",
          v17,
          *a1,
          v46,
          v44);
        v16 = xferfd(&v20);
        v19 = v16;
      }
      else
      {
        devnode_by_role = v15;
        if ( (_DWORD)v15 )
        {
          __getpid();
          dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to mount preboot: %d\n");
          goto LABEL_6;
        }
        v16 = open(v44, 537919488);
        v19 = v16;
        if ( (v16 & 0x80000000) != 0 )
        {
          devnode_by_role = (unsigned int)*__error();
          __getpid();
          dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to open preboot mount: %d\n");
          goto LABEL_6;
        }
      }
      v18 = dupfd(v16, "preboot mount");
      boot_set_root(a3, &_boot_root_preboot, &v19);
      boot_set_root(a3, &_boot_root_preboot_groupdir, &v18);
    }
    devnode_by_role = 0;
    goto LABEL_6;
  }
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to get preboot device: %d\n");
LABEL_6:
  closefd_optional(&v20, "mounted-over preboot");
  closefd_optional(&v19, "preboot");
  if ( (unsigned int)devnode_by_role >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", devnode_by_role);
  return devnode_by_role;
}
