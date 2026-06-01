char *__fastcall dyld4::ProcessConfig::PathOverrides::addEnvVar(
        const char **this,
        const dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Security *a3,
        lsl::Allocator *a4,
        char *__s,
        int a6,
        char *a7)
{
  char *result; // x0
  char *v14; // x23
  dyld4::ProcessConfig::PathOverrides *v15; // x0
  const char **v16; // x2
  bool v17; // zf
  __int64 v18; // x8
  __int64 v19; // x9
  _BYTE *v20; // x8
  int v21; // w9
  _QWORD v22[3]; // [xsp+48h] [xbp-478h] BYREF
  char v23; // [xsp+60h] [xbp-460h]
  char __sa[1024]; // [xsp+68h] [xbp-458h] BYREF

  result = _platform_strchr(__s, 61);
  if ( !result )
    return result;
  v14 = result + 1;
  if ( a6 && _platform_strchr(result + 1, 64) )
  {
    v22[0] = 0;
    v22[1] = v22;
    v22[2] = 0x2000000000LL;
    v23 = 0;
    __sa[0] = 0;
    dyld4::ProcessConfig::PathOverrides::forEachInColonList(v14);
    v14 = (char *)lsl::Allocator::strdup(a4, __sa);
    _Block_object_dispose(v22, 8);
  }
  result = (char *)_platform_strncmp(__s, "DYLD_LIBRARY_PATH", 0x11u);
  if ( !(_DWORD)result )
  {
    if ( a6 )
      v16 = this + 6;
    else
      v16 = this;
    goto LABEL_27;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_FRAMEWORK_PATH", 0x13u);
  if ( !(_DWORD)result )
  {
    v17 = a6 == 0;
    v18 = 8;
    v19 = 56;
LABEL_24:
    if ( !v17 )
      v18 = v19;
    v16 = (const char **)((char *)this + v18);
    goto LABEL_27;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_FALLBACK_FRAMEWORK_PATH", 0x1Cu);
  if ( !(_DWORD)result )
  {
    v17 = a6 == 0;
    v18 = 24;
    v19 = 72;
    goto LABEL_24;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_FALLBACK_LIBRARY_PATH", 0x1Au);
  if ( !(_DWORD)result )
  {
    v17 = a6 == 0;
    v18 = 16;
    v19 = 64;
    goto LABEL_24;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_VERSIONED_FRAMEWORK_PATH", 0x1Cu);
  if ( !(_DWORD)result )
  {
    v17 = a6 == 0;
    v18 = 40;
    v19 = 80;
    goto LABEL_24;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_VERSIONED_LIBRARY_PATH", 0x1Au);
  if ( !(_DWORD)result )
  {
    v17 = a6 == 0;
    v18 = 32;
    v19 = 88;
    goto LABEL_24;
  }
  v15 = (dyld4::ProcessConfig::PathOverrides *)_platform_strncmp(__s, "DYLD_INSERT_LIBRARIES", 0x15u);
  if ( !(_DWORD)v15 )
  {
    result = (char *)dyld4::ProcessConfig::PathOverrides::setString(v15, a4, this + 12, v14);
    v20 = *(this + 12);
    if ( *v20 )
    {
      v21 = 1;
      *((_DWORD *)this + 35) = 1;
      while ( 1 )
      {
        if ( *v20 == 58 )
        {
          *((_DWORD *)this + 35) = ++v21;
        }
        else if ( !*v20 )
        {
          goto LABEL_28;
        }
        ++v20;
      }
    }
    goto LABEL_28;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_IMAGE_SUFFIX", 0x11u);
  if ( !(_DWORD)result )
  {
    v16 = this + 13;
    goto LABEL_27;
  }
  result = (char *)_platform_strncmp(__s, "DYLD_ROOT_PATH", 0xEu);
  if ( !(_DWORD)result )
  {
    result = (char *)dyld3::MachOFile::isSimulatorPlatform(*((unsigned int *)a2 + 15), 0);
    if ( (_DWORD)result )
    {
      v16 = this + 14;
LABEL_27:
      result = (char *)dyld4::ProcessConfig::PathOverrides::setString(
                         (dyld4::ProcessConfig::PathOverrides *)result,
                         a4,
                         v16,
                         v14);
    }
  }
LABEL_28:
  if ( a7 )
  {
    result = (char *)_platform_strncmp(__s, "DYLD_", 5u);
    if ( !(_DWORD)result )
    {
      strlcat(a7, __s, 0x800u);
      return (char *)strlcat(a7, " ", 0x800u);
    }
  }
  return result;
}
