__int64 __fastcall cryptex_open(const char ***a1, _DWORD *a2)
{
  const char **v4; // x24
  const char **v5; // x23
  unsigned __int64 v6; // x26
  int v7; // w0
  ssize_t v8; // x21
  int *v9; // x0
  int *v10; // x0
  pid_t v11; // w0
  __int64 v12; // x0
  unsigned __int64 v13; // x9
  pid_t v14; // w0
  pid_t v15; // w0
  unsigned __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 *v18; // x10
  __int64 v19; // t1
  __int64 v20; // x21
  const char *v21; // x25
  pid_t v22; // w0
  int v23; // w20
  int *v24; // x0
  int v25; // w8
  __int64 v26; // x22
  pid_t v27; // w0
  int *v28; // x0
  pid_t v29; // w0
  pid_t v30; // w0
  __int64 v31; // x20
  const char ***v32; // x19
  __int64 v33; // x25
  const char *v34; // x27
  __int64 v35; // x26
  const char *v36; // x28
  int v37; // w22
  const char **v38; // x20
  __int64 v39; // x0
  pid_t v40; // w0
  __int64 v41; // x0
  __int64 v42; // x8
  int v43; // w20
  _DWORD *v44; // x21
  const char **v45; // x22
  char **v46; // x0
  pid_t v47; // w0
  __int64 v49; // x0
  __int64 unsafe; // x0
  __int64 v51; // x19
  __int64 v52; // x20
  __int64 v53; // x21
  const char *v54; // x23
  int *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x19
  __int64 v59; // x21
  __int64 v60; // x22
  const char *v61; // x23
  int *v62; // x0
  __int64 v63; // x0
  _DWORD *v64; // [xsp+38h] [xbp-898h]
  __int64 v65; // [xsp+40h] [xbp-890h]
  int v66; // [xsp+50h] [xbp-880h] BYREF
  char v67[1024]; // [xsp+54h] [xbp-87Ch] BYREF
  int v68; // [xsp+454h] [xbp-47Ch] BYREF
  _QWORD v69[3]; // [xsp+458h] [xbp-478h] BYREF
  int v70; // [xsp+474h] [xbp-45Ch] BYREF
  char value[1032]; // [xsp+478h] [xbp-458h] BYREF

  v4 = *a1;
  v66 = -1;
  v65 = configuration();
  v5 = *a1;
  __bzero(value, 0x400u);
  memset(v69, 0, sizeof(v69));
  v6 = (unsigned __int64)v5[7];
  v68 = -1;
  v7 = openat(*((_DWORD *)a1[1] + 4), v5[9], 0x200000);
  v70 = v7;
  if ( v7 < 0 )
  {
    __bzero(v67, 0x400u);
    v49 = realpathfd(*((unsigned int *)a1[1] + 4), v67, "rootmnt");
    unsafe = boot_get_unsafe(v49);
    v51 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
    v52 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
    v53 = (unsigned int)*__error();
    v54 = v5[9];
    v55 = __error();
    ignition_halt(
      v51,
      v53,
      v52,
      "failed to open canonical cryptex location: root = %s, subpath = %s: %d",
      v67,
      v54,
      *v55);
  }
  v8 = fgetxattr(v7, "com.apple.root.cryptex", value, 0x400u, 0, 0);
  v9 = __error();
  if ( v8 < 0 )
  {
    if ( !*v9 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "xattr_len", v8);
  }
  else
  {
    *v9 = 0;
  }
  v10 = __error();
  if ( *v10 == 93 )
    goto LABEL_10;
  if ( *v10 )
  {
    v57 = boot_get_unsafe(v10);
    v58 = *(_QWORD *)(*(_QWORD *)v57 + 8LL);
    v59 = *(_QWORD *)(*(_QWORD *)v57 + 16LL);
    v60 = (unsigned int)*__error();
    v61 = v5[9];
    v62 = __error();
    ignition_halt(v58, v60, v59, "failed to read xattr: path = %s, attr = %s: %d", v61, "com.apple.root.cryptex", *v62);
  }
  value[v8] = 0;
  if ( !_platform_strlen(value) )
  {
    v14 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: root xattr empty\n", v14, *a1[2], **a1);
LABEL_10:
    v15 = __getpid();
    v12 = dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: no root xattr present\n", v15, *a1[2], **a1);
    v13 = 0;
    goto LABEL_11;
  }
  v69[0] = value;
  ++v6;
  v11 = __getpid();
  v12 = dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: found root xattr: %s\n", v11, *a1[2], **a1, value);
  v13 = 1;
LABEL_11:
  if ( v6 > 3 )
  {
    v56 = boot_get_unsafe(v12);
    ignition_halt(
      *(_QWORD *)(*(_QWORD *)v56 + 8LL),
      0,
      *(_QWORD *)(*(_QWORD *)v56 + 16LL),
      "path count overflow: actual = %lu, expected <= %lu");
  }
  v64 = a2;
  v16 = v6 - v13;
  if ( v6 > v13 )
  {
    v17 = &v69[v13];
    v18 = (__int64 *)(v5 + 4);
    do
    {
      v19 = *v18++;
      *v17++ = v19;
      --v16;
    }
    while ( v16 );
  }
  v20 = 0;
  while ( 1 )
  {
    v21 = (const char *)v69[v20];
    v22 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: opening preboot subdirectory: %s\n", v22, *a1[2], **a1, v21);
    v23 = openat(*((_DWORD *)a1[1] + 6), v21, 537919488);
    v68 = v23;
    v24 = __error();
    if ( v23 < 0 )
    {
      if ( !*v24 )
        dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "pbobjdir", v23);
    }
    else
    {
      *v24 = 0;
    }
    v25 = *__error();
    if ( v25 == 2 )
    {
      v28 = __error();
      if ( v21 == value )
        dyld_halt("root object directory does not exist: %s", value);
      v26 = (unsigned int)*v28;
      goto LABEL_24;
    }
    if ( !v25 )
      break;
    v26 = (unsigned int)*__error();
    v27 = __getpid();
    dlog(
      0xFFFFFFFFLL,
      "libignition: %d: %12s: %s: failed to open preboot subdirectory: %s: %d\n",
      v27,
      *a1[2],
      **a1,
      v21,
      v26);
LABEL_24:
    if ( (_DWORD)v26 == 2 && ++v20 < v6 )
      continue;
    goto LABEL_30;
  }
  if ( v21 == value )
  {
    strlcpy((char *)a1 + 128, value, 0x400u);
    a1[144] = (const char **)(a1 + 16);
  }
  v29 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: opened preboot subdirectory: %s\n", v29, *a1[2], **a1, v21);
  v26 = 0;
LABEL_30:
  if ( (v68 & 0x80000000) == 0 )
    *((_DWORD *)a1 + 6) = xferfd(&v68);
  closefd(&v70, "canonical cryptex");
  if ( (unsigned int)v26 >= 0x6A )
    goto LABEL_38;
  if ( (_DWORD)v26 )
  {
    v30 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to open object directory: %d\n", v30, *a1[2], **a1, v26);
    goto LABEL_35;
  }
  v66 = openat(*((_DWORD *)a1[1] + 4), v4[9], 0x100000);
  if ( v66 < 0 )
  {
    v26 = (unsigned int)*__error();
    __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to open canonical root: %d\n");
    goto LABEL_66;
  }
  v33 = 0;
  while ( 2 )
  {
    v34 = v4[v33 + 12];
    if ( !v34 )
    {
      __getpid();
      v39 = dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: object spec not present: %lu\n");
      goto LABEL_51;
    }
    v35 = configuration();
    v36 = *((const char **)v34 + 2);
    v37 = *((_DWORD *)v34 + 3);
    LODWORD(v69[0]) = -1;
    __bzero(value, 0x400u);
    v38 = a1[144];
    if ( !v36 )
      v36 = (const char *)(*((__int64 (__fastcall **)(const char *, __int64, char *))v34 + 3))(v34, v35, value);
    *(_DWORD *)v67 = openat(*((_DWORD *)a1 + 6), v36, v37);
    if ( (*(_DWORD *)v67 & 0x80000000) == 0 )
    {
      LODWORD(v69[0]) = xferfd(v67);
      goto LABEL_50;
    }
    v26 = (unsigned int)*__error();
    if ( (unsigned int)v26 >= 0x6A )
      goto LABEL_38;
    if ( (_DWORD)v26 != 2 )
    {
      if ( (_DWORD)v26 )
      {
        v47 = __getpid();
        dlog(
          0xFFFFFFFFLL,
          "libignition: %d: %12s: %s: failed to open object: name = %s, type = %s: %d\n",
          v47,
          *a1[2],
          **a1,
          v36,
          *(const char **)v34,
          v26);
        goto LABEL_65;
      }
LABEL_50:
      object_setfd(v34, a1 + 4, v69);
      __getpid();
      v39 = dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: opened object: name = %s, type = %s\n");
LABEL_51:
      if ( ++v33 == 4 )
      {
        v42 = *(_QWORD *)(v65 + 6952);
        if ( v42 )
        {
          v43 = *(_DWORD *)(v42 + 46);
          v44 = v64;
          v45 = v4;
          if ( (unsigned int)(v43 - 1) >= 3 )
          {
            if ( v43 )
            {
              v63 = boot_get_unsafe(v39);
              ignition_halt(
                *(_QWORD *)(*(_QWORD *)v63 + 8LL),
                0,
                *(_QWORD *)(*(_QWORD *)v63 + 16LL),
                "bogus secure boot level: 0x%x");
            }
            v46 = &_object_spec_im4m;
          }
          else
          {
            v46 = (char **)object_reduced_im4m_spec(v39);
          }
        }
        else
        {
          v46 = &_object_spec_im4m;
          v44 = v64;
          v45 = v4;
        }
        a1[12] = (const char **)v46;
        a1[13] = (const char **)v45[13];
        a1[14] = (const char **)v45[14];
        a1[15] = (const char **)v45[15];
        *v44 = xferfd(&v66);
        goto LABEL_67;
      }
      continue;
    }
    break;
  }
  v40 = __getpid();
  dlog(
    0xFFFFFFFFLL,
    "libignition: %d: %12s: %s: object not present: name = %s, type = %s\n",
    v40,
    *a1[2],
    **a1,
    v36,
    *(const char **)v34);
  v41 = (*((__int64 (__fastcall **)(const char *, const char **, __int64))v34 + 4))(v34, v38, 2);
  if ( !(_DWORD)v41 )
  {
    __getpid();
    v39 = dlog(
            0xFFFFFFFFLL,
            "libignition: %d: %12s: %s: object absence permitted: name = %s, type = %s, xattr path = %s\n");
    goto LABEL_51;
  }
  v26 = v41;
  if ( (unsigned int)v41 >= 0x6A )
    goto LABEL_38;
LABEL_65:
  __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to open object: %s: %d\n");
LABEL_66:
  if ( !(_DWORD)v26 )
  {
LABEL_67:
    closefd_optional(&v66, "canonical root");
    return 0;
  }
LABEL_35:
  v31 = 0;
  v32 = a1 + 4;
  do
  {
    object_fd_close(&v32[v31]);
    v31 += 2;
  }
  while ( v31 != 8 );
  closefd_optional(&v66, "canonical root");
  if ( (unsigned int)v26 >= 0x6A )
LABEL_38:
    dyld_halt("error not set to valid posix code: %d", v26);
  return v26;
}
