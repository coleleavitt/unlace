size_t __fastcall arguments_init(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  size_t result; // x0
  __int128 v5; // [xsp+0h] [xbp-70h] BYREF
  __int128 v6; // [xsp+10h] [xbp-60h]
  __int128 v7; // [xsp+20h] [xbp-50h]
  __int128 v8; // [xsp+30h] [xbp-40h]
  __int64 v9; // [xsp+48h] [xbp-28h] BYREF

  v9 = 0;
  v7 = 0u;
  v8 = 0u;
  v5 = 0u;
  v6 = 0u;
  if ( _args )
    dyld_halt("arguments already initialized", v5, v6, v7, v8);
  if ( (unsigned int)dyld_parse_boot_arg_int(a1, "ignition_level", &v9) )
    __args = v9;
  if ( (unsigned int)dyld_parse_boot_arg_cstr(a1, "ignition_force_dylib_root", &v5, 64) )
  {
    if ( _platform_strcmp((const char *)&v5, "none") )
    {
      if ( _platform_strcmp((const char *)&v5, "cryptex") )
      {
        if ( _platform_strcmp((const char *)&v5, "livefs") )
        {
          if ( _platform_strcmp((const char *)&v5, "rootfs") )
            goto LABEL_14;
          v2 = 3;
        }
        else
        {
          v2 = 2;
        }
      }
      else
      {
        v2 = 1;
      }
    }
    else
    {
      v2 = 0;
    }
    qword_9C120 = v2;
  }
LABEL_14:
  if ( !(unsigned int)dyld_parse_boot_arg_cstr(a1, "ignition_live_app_graft", &v5, 64) )
    goto LABEL_22;
  if ( _platform_strcmp((const char *)&v5, "skip") )
  {
    if ( _platform_strcmp((const char *)&v5, "optional") )
    {
      if ( _platform_strcmp((const char *)&v5, "require") )
        goto LABEL_22;
      v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = 0;
  }
  qword_9C128 = v3;
LABEL_22:
  result = dyld_parse_boot_arg_cstr(a1, "ignition_halt_after", &v5, 64);
  if ( (_DWORD)result )
  {
    result = strlcpy(byte_9C138, (const char *)&v5, 0x40u);
    qword_9C130 = (__int64)byte_9C138;
  }
  _args = (__int64)&__args;
  return result;
}
