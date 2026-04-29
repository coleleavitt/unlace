dyld4::ProcessConfig::PathOverrides *__fastcall dyld4::ProcessConfig::PathOverrides::PathOverrides(
        dyld4::ProcessConfig::PathOverrides *this,
        const dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Security *a3,
        const dyld4::ProcessConfig::Logging *a4,
        const dyld4::ProcessConfig::DyldCache *a5,
        dyld4::SyscallDelegate *a6,
        lsl::Allocator *a7)
{
  const char **v13; // x8
  const char *v14; // x4
  const char **v15; // x25
  const char *v16; // t1
  __int64 v17; // x0
  _QWORD v19[8]; // [xsp+8h] [xbp-888h] BYREF
  char __dst[2048]; // [xsp+48h] [xbp-848h] BYREF

  *((_OWORD *)this + 7) = 0u;
  *((_OWORD *)this + 8) = 0u;
  *((_OWORD *)this + 5) = 0u;
  *((_OWORD *)this + 6) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *((_OWORD *)this + 4) = 0u;
  *((_OWORD *)this + 1) = 0u;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)this = 0u;
  *((_DWORD *)this + 34) = *((unsigned __int8 *)a3 + 5) ^ 1;
  if ( *((_BYTE *)a3 + 3) )
  {
    strlcpy(__dst, "dyld config: ", 0x800u);
    v13 = *((const char ***)a2 + 13);
    v14 = *v13;
    if ( *v13 )
    {
      v15 = v13 + 1;
      do
      {
        dyld4::ProcessConfig::PathOverrides::addEnvVar(this, a2, a3, a7, v14, 0, __dst);
        v16 = *v15++;
        v14 = v16;
      }
      while ( v16 );
    }
    if ( _platform_strlen(__dst) > 0xF )
      qword_9C1D8 = lsl::Allocator::strdup(a7, __dst);
  }
  if ( *((_BYTE *)a3 + 8) )
  {
    v17 = *(_QWORD *)a2;
    v19[0] = _NSConcreteStackBlock;
    v19[1] = 0x40000000;
    v19[2] = ___ZN5dyld413ProcessConfig13PathOverridesC2ERKNS0_7ProcessERKNS0_8SecurityERKNS0_7LoggingERKNS0_9DyldCacheERNS_15SyscallDelegateERN3lsl9AllocatorE_block_invoke;
    v19[3] = &__block_descriptor_tmp_63;
    v19[4] = this;
    v19[5] = a2;
    v19[6] = a3;
    v19[7] = a7;
    dyld3::MachOFile::forDyldEnv(v17, v19);
  }
  if ( *((_QWORD *)a5 + 10) )
    *((_QWORD *)this + 15) = *((_QWORD *)a5 + 9);
  if ( *((_BYTE *)a3 + 3) )
    dyld4::ProcessConfig::PathOverrides::processVersionedPaths(
      this,
      a2,
      a6,
      a5,
      *((unsigned int *)a2 + 15),
      *((_QWORD *)a2 + 17),
      a7);
  return this;
}
