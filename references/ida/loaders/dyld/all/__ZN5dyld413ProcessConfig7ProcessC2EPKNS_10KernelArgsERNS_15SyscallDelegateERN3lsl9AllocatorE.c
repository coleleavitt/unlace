dyld4::ProcessConfig::Process *__fastcall dyld4::ProcessConfig::Process::Process(
        dyld4::ProcessConfig::Process *this,
        const dyld4::KernelArgs *a2,
        dyld4::SyscallDelegate *a3,
        lsl::Allocator *a4)
{
  _QWORD *v8; // x21
  __int64 v9; // x9
  _QWORD *v10; // x8
  __int64 v12; // x1
  __int64 v13; // x1
  char *v14; // x22
  char *v15; // x0
  char *v16; // x8
  __int64 v17; // x0
  __int64 v18; // x8
  const char *v19; // x0
  const char *v20; // x21
  int v21; // w8
  const char *v22; // x20
  _BYTE *v23; // x0
  const char *v24; // x20
  int v25; // w22
  unsigned int v26; // w21
  int v27; // w8
  __int64 v28; // x23
  __int64 v29; // x23
  __int64 v30; // x22
  int v32; // w8

  v8 = (_QWORD *)((char *)this + 128);
  dyld4::SyscallDelegate::DyldCommPage::DyldCommPage((dyld4::ProcessConfig::Process *)((char *)this + 128));
  v9 = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 22) = v9;
  v10 = (_QWORD *)((char *)a2 + 8 * v9 + 24);
  *((_QWORD *)this + 12) = (char *)a2 + 16;
  *((_QWORD *)this + 13) = v10;
  while ( *v10++ )
    ;
  *((_QWORD *)this + 14) = v10;
  *((_DWORD *)this + 36) = dyld4::SyscallDelegate::getpid();
  *((_DWORD *)this + 15) = dyld4::ProcessConfig::Process::getMainPlatform(this);
  *((_QWORD *)this + 3) = dyld4::ProcessConfig::Process::getMainFileID(this);
  *((_QWORD *)this + 4) = v12;
  *((_QWORD *)this + 2) = dyld4::ProcessConfig::Process::getMainUnrealPath(this, a3, a4);
  *((_QWORD *)this + 1) = dyld4::ProcessConfig::Process::getMainPath(this, a3, a4);
  *((_QWORD *)this + 9) = dyld4::ProcessConfig::Process::getDyldFileID(this);
  *((_QWORD *)this + 10) = v13;
  *((_QWORD *)this + 8) = dyld4::ProcessConfig::Process::getDyldPath(this, a3, a4);
  v14 = *((char **)this + 2);
  v15 = strrchr(v14, 47);
  if ( v15 )
    v16 = v15 + 1;
  else
    v16 = v14;
  *((_QWORD *)this + 15) = v16;
  *((_BYTE *)this + 149) = 0;
  v17 = dyld4::SyscallDelegate::dyldCommPageFlags(a3);
  *((_QWORD *)this + 16) = v17;
  if ( *((_DWORD *)this + 36) == 1 )
    *v8 = (unsigned int)v17;
  *((_QWORD *)this + 17) = dyld4::ProcessConfig::Process::getMainArchs(this, a3);
  *((_BYTE *)this + 148) = dyld4::SyscallDelegate::isTranslated(a3);
  v18 = *((_QWORD *)this + 16);
  *((_BYTE *)this + 150) = (((unsigned int)v18 >> 21) & 1) == 0;
  *((_BYTE *)this + 151) = (v18 & 0xC0000) != 0x80000;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 39) = 2;
  if ( !(unsigned int)dyld4::SyscallDelegate::internalInstall(a3)
    || (v19 = (const char *)_simple_getenv(*((_QWORD *)this + 13), "DYLD_PAGEIN_LINKING")) == nullptr )
  {
LABEL_14:
    if ( *((int *)this + 39) <= 1 )
      goto LABEL_18;
LABEL_15:
    if ( !(unsigned int)dyld4::SyscallDelegate::sandboxBlockedPageInLinking(a3) )
      goto LABEL_18;
    goto LABEL_16;
  }
  v20 = v19;
  if ( _platform_strcmp(v19, "0") )
  {
    if ( !_platform_strcmp(v20, "1") )
    {
      v21 = 1;
      goto LABEL_17;
    }
    if ( _platform_strcmp(v20, "2") )
    {
      if ( _platform_strcmp(v20, "3") )
        goto LABEL_14;
      v32 = 3;
    }
    else
    {
      v32 = 2;
    }
    *((_DWORD *)this + 39) = v32;
    goto LABEL_15;
  }
LABEL_16:
  v21 = 0;
LABEL_17:
  *((_DWORD *)this + 39) = v21;
LABEL_18:
  v22 = *((const char **)this + 1);
  if ( !_platform_strcmp(v22, "/usr/libexec/adid") )
    *((_DWORD *)this + 39) = 0;
  if ( !_platform_strcmp(v22, "/usr/libexec/fairplaydeviceidentityd") )
    *((_DWORD *)this + 39) = 0;
  if ( !_platform_strncmp(v22, "/usr/sbin/fairplayd", 0x13u) )
    *((_DWORD *)this + 39) = 0;
  v23 = (_BYTE *)_simple_getenv(*((_QWORD *)this + 14), "vm_force_4k_pages");
  if ( v23 && *v23 == 49 )
    vm_page_size = 4096;
  v24 = *((const char **)this + 15);
  v25 = *((_DWORD *)this + 15);
  v26 = *((_DWORD *)this + 10);
  v27 = *((unsigned __int8 *)this + 150);
  if ( v25 == 2 && *((_BYTE *)this + 150) )
  {
    v28 = 0;
    while ( _platform_strcmp(v24, dyld4::dataConstApps_iOS14_5_arm64[v28]) )
    {
      if ( ++v28 == 37 )
        goto LABEL_34;
    }
    if ( v26 >> 8 < 0xE0F )
      goto LABEL_47;
LABEL_34:
    v29 = 0;
    while ( _platform_strcmp(v24, dyld4::dataConstApps_iOS14_5_Intune_arm64[v29]) )
    {
      if ( ++v29 == 137 )
        goto LABEL_39;
    }
    if ( v26 >> 8 < 0xE0F )
      goto LABEL_47;
LABEL_39:
    v27 = 1;
  }
  if ( v25 == 2 && v27 )
  {
    v30 = 0;
    while ( _platform_strcmp(v24, dyld4::dataConstApps_iOS15_0[v30]) )
    {
      if ( ++v30 == 30 )
        return this;
    }
    if ( HIWORD(v26) <= 0xEu )
LABEL_47:
      *((_BYTE *)this + 150) = 0;
  }
  return this;
}
