__int64 __fastcall configuration_init(__int64 a1, __int64 a2)
{
  int v4; // w21
  int *v5; // x0
  int v6; // w8
  pid_t v7; // w0
  int *v8; // x0
  int v9; // w8
  __int64 *v10; // x23
  int *v11; // x0
  int v12; // w8
  const char *v13; // x1
  int *v14; // x0
  int v15; // w8
  __int64 v16; // x0
  const char *v17; // x0
  __int64 v18; // x8
  _BYTE **v19; // x9
  _BYTE *v20; // x12
  __int64 result; // x0
  __int64 v22; // x19
  __int64 v23; // x19
  __int64 v24; // x19
  __int64 v25; // x19
  __int64 v26; // x19
  char v27[1024]; // [xsp+10h] [xbp-620h] BYREF
  char __source[16]; // [xsp+410h] [xbp-220h] BYREF
  __int128 v29; // [xsp+420h] [xbp-210h]
  __int128 v30; // [xsp+430h] [xbp-200h]
  __int128 v31; // [xsp+440h] [xbp-1F0h]
  unsigned __int64 v32; // [xsp+450h] [xbp-1E0h] BYREF
  size_t v33; // [xsp+458h] [xbp-1D8h] BYREF
  __int128 v34; // [xsp+460h] [xbp-1D0h] BYREF
  __int128 v35; // [xsp+470h] [xbp-1C0h]
  __int128 v36; // [xsp+480h] [xbp-1B0h]
  __int128 v37; // [xsp+490h] [xbp-1A0h]
  __int128 v38; // [xsp+4A0h] [xbp-190h]
  __int128 v39; // [xsp+4B0h] [xbp-180h]
  __int128 v40; // [xsp+4C0h] [xbp-170h]
  __int128 v41; // [xsp+4D0h] [xbp-160h]
  int v42; // [xsp+4E0h] [xbp-150h]
  size_t v43; // [xsp+4E8h] [xbp-148h] BYREF
  char __s1[16]; // [xsp+4F0h] [xbp-140h] BYREF
  __int128 v45; // [xsp+500h] [xbp-130h]
  __int128 v46; // [xsp+510h] [xbp-120h]
  __int128 v47; // [xsp+520h] [xbp-110h]
  __int128 v48; // [xsp+530h] [xbp-100h]
  __int128 v49; // [xsp+540h] [xbp-F0h]
  __int128 v50; // [xsp+550h] [xbp-E0h]
  __int128 v51; // [xsp+560h] [xbp-D0h]
  __int128 v52; // [xsp+570h] [xbp-C0h]
  __int128 v53; // [xsp+580h] [xbp-B0h]
  __int128 v54; // [xsp+590h] [xbp-A0h]
  __int128 v55; // [xsp+5A0h] [xbp-90h]
  __int128 v56; // [xsp+5B0h] [xbp-80h]
  __int128 v57; // [xsp+5C0h] [xbp-70h]
  __int128 v58; // [xsp+5D0h] [xbp-60h]
  __int128 v59; // [xsp+5E0h] [xbp-50h]
  __int64 v60; // [xsp+5F8h] [xbp-38h] BYREF

  v32 = 0;
  v31 = 0u;
  v30 = 0u;
  v29 = 0u;
  *(_OWORD *)__source = 0u;
  __bzero(v27, 0x400u);
  ignition_test_BRA();
  __config = a1;
  byte_A9D98 = __getpid() == 1;
  _derive_proc_name(a1, byte_A8230);
  qword_A8228 = (__int64)byte_A8230;
  if ( !byte_A9D98 )
    goto LABEL_60;
  v60 = 0;
  v59 = 0u;
  v58 = 0u;
  v57 = 0u;
  v56 = 0u;
  v55 = 0u;
  v54 = 0u;
  v53 = 0u;
  v52 = 0u;
  v51 = 0u;
  v50 = 0u;
  v49 = 0u;
  v48 = 0u;
  v47 = 0u;
  v46 = 0u;
  v45 = 0u;
  *(_OWORD *)__s1 = 0u;
  v43 = 256;
  v42 = -1431699456;
  v41 = 0u;
  v40 = 0u;
  v39 = 0u;
  v38 = 0u;
  v37 = 0u;
  v36 = 0u;
  v35 = 0u;
  v34 = 0u;
  v33 = 132;
  v4 = sysctlbyname("security.mac.img4.ignition_blob", &v34, &v33, nullptr, 0);
  v5 = __error();
  if ( v4 < 0 )
  {
    if ( !*v5 )
      goto LABEL_75;
  }
  else
  {
    *v5 = 0;
  }
  v6 = *__error();
  if ( v6 == 2 )
  {
    v7 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: ignition blob not available\n", v7);
  }
  else
  {
    if ( v6 )
    {
      v23 = (unsigned int)*__error();
      __error();
      ignition_halt(6, v23, 64, "failed to query ignition blob: %d");
    }
    xmmword_A9D20 = v40;
    xmmword_A9D30 = v41;
    dword_A9D40 = v42;
    xmmword_A9CE0 = v36;
    xmmword_A9CF0 = v37;
    xmmword_A9D00 = v38;
    xmmword_A9D10 = v39;
    xmmword_A9CC0 = v34;
    xmmword_A9CD0 = v35;
    qword_A9D48 = (__int64)&xmmword_A9CC0;
    qword_A9CB0 = (__int64)&xmmword_A9CD0 + 2;
  }
  __s1[0] = 0;
  v43 = 256;
  v4 = sysctlbyname("hw.osenvironment", __s1, &v43, nullptr, 0);
  v8 = __error();
  if ( v4 < 0 )
  {
    if ( !*v8 )
      goto LABEL_75;
  }
  else
  {
    *v8 = 0;
  }
  v9 = *__error();
  if ( (unsigned int)(v9 - 1) >= 2 && v9 != 22 )
  {
    if ( v9 )
    {
      v26 = (unsigned int)*__error();
      __error();
      ignition_halt(6, v26, 64, "failed to read os environment: %d");
    }
    if ( _platform_strcmp(__s1, (const char *)&unk_7E832) )
    {
      strlcpy(byte_A8368, __s1, 0x40u);
      qword_A8330 = (__int64)byte_A8368;
      v10 = &qword_A8338;
      if ( _platform_strcmp(__s1, "kcgen") )
      {
        if ( _platform_strcmp(__s1, "fvunlock") )
        {
          if ( _platform_strcmp(__s1, "recoveryos") )
          {
            if ( _platform_strcmp(__s1, "diagnostics") )
            {
              if ( _platform_strcmp(__s1, "migration") )
              {
                if ( _platform_strcmp(__s1, "eacs") )
                  goto LABEL_28;
                v10 = &qword_A8360;
              }
              else
              {
                v10 = &qword_A8358;
              }
            }
            else
            {
              v10 = &qword_A8350;
            }
          }
          else
          {
            v10 = &qword_A8348;
          }
        }
        else
        {
          v10 = &qword_A8340;
        }
      }
      *v10 = qword_A8330;
    }
  }
LABEL_28:
  __s1[0] = 0;
  v43 = 256;
  v4 = sysctlbyname("hw.target", __s1, &v43, nullptr, 0);
  v11 = __error();
  if ( v4 < 0 )
  {
    if ( !*v11 )
      goto LABEL_75;
  }
  else
  {
    *v11 = 0;
  }
  v12 = *__error();
  if ( v12 != 2 )
  {
    if ( v12 == 1 )
    {
      v13 = "unknownap";
      goto LABEL_39;
    }
    if ( v12 )
    {
      v24 = (unsigned int)*__error();
      __error();
      ignition_halt(6, v24, 64, "failed to query hardware target: %d");
    }
    if ( v43 >= 0x40 )
      ignition_halt(6, 0, 64, "hardware target string too long: actual = %lu, expected < %lu");
    if ( v43 >= 2 )
    {
      dyld_tolower_cstr(__s1, byte_A9D58);
      goto LABEL_40;
    }
  }
  v13 = "x86legacyap";
LABEL_39:
  strlcpy(byte_A9D58, v13, 0x40u);
LABEL_40:
  qword_A9D50 = (__int64)byte_A9D58;
  v4 = fsctl("/", 0x40084A6Au, &v60, 0);
  v14 = __error();
  if ( (v4 & 0x80000000) == 0 )
  {
    *v14 = 0;
    goto LABEL_43;
  }
  if ( !*v14 )
LABEL_75:
    dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "ret", v4);
LABEL_43:
  v15 = *__error();
  if ( v15 != 25 && v15 != 1 )
  {
    if ( v15 )
    {
      v25 = (unsigned int)*__error();
      __error();
      ignition_halt(6, v25, 64, "failed to query root device status: %d");
    }
    qword_A9420 = v60;
  }
  if ( statfs("/", &stru_A9430) )
  {
    v22 = (unsigned int)*__error();
    __error();
    ignition_halt(6, v22, 64, "statfs failed: %d");
  }
  qword_A9CA8 = (__int64)&stru_A9430;
  v16 = *(_QWORD *)(a1 + 16);
  if ( v16 )
  {
    if ( _simple_getenv(v16, "XPC_USERSPACE_REBOOTED") )
      byte_A9D9A = 1;
    v17 = (const char *)_simple_getenv(*(_QWORD *)(a1 + 16), "XPC_USERSPACE_PIVOTEDROOT");
    if ( v17 )
    {
      strlcpy(byte_A9018, v17, 0x400u);
      qword_A9010 = (__int64)byte_A9018;
    }
  }
  v18 = *(unsigned int *)(a1 + 4);
  if ( (int)v18 >= 1 )
  {
    v19 = *(_BYTE ***)(a1 + 8);
    do
    {
      v20 = *v19;
      if ( **v19 == 45 )
        v20 = *v19 + 1;
      if ( *v20 == 115 )
        byte_A9D99 = 1;
      ++v19;
      --v18;
    }
    while ( v18 );
  }
LABEL_60:
  if ( (unsigned int)dyld_parse_boot_arg_cstr(a2, "rd", __source, 64) )
  {
    strlcpy(byte_A83B8, __source, 0x40u);
    qword_A83A8 = (__int64)byte_A83B8;
    if ( !_platform_strcmp(__source, "md0") )
      qword_A83B0 = (__int64)byte_A83B8;
  }
  if ( (unsigned int)dyld_parse_boot_arg_cstr(a2, "arp0", v27, 1024) )
  {
    strlcpy(byte_A8400, v27, 0x400u);
    qword_A83F8 = (__int64)byte_A8400;
  }
  if ( (unsigned int)dyld_parse_boot_arg_cstr(a2, "rp", v27, 1024) )
  {
    strlcpy(byte_A8808, v27, 0x400u);
    qword_A8800 = (__int64)byte_A8808;
  }
  if ( (unsigned int)dyld_parse_boot_arg_cstr(a2, "rp0", v27, 1024) )
  {
    strlcpy(byte_A8C10, v27, 0x400u);
    qword_A8C08 = (__int64)byte_A8C10;
  }
  if ( (unsigned int)dyld_parse_boot_arg_int(a2, "rootdmg-ramdisk", &v32) )
  {
    if ( HIDWORD(v32) )
      dyld_halt("value not representable as uint32_t");
    dword_A9418 = v32;
  }
  result = dyld_parse_boot_arg_int(a2, "restore", 0);
  if ( (_DWORD)result )
    byte_A941C = 1;
  dword_A9428 = MEMORY[0xFFFFF4084];
  _config = (__int64)&__config;
  return result;
}
