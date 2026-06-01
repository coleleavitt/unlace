__int64 __fastcall dyld4::APIs::dyld_get_program_sdk_version(dyld4::APIs *this)
{
  __int64 SdkVersion; // x0
  __int64 v3; // x20

  SdkVersion = dyld4::APIs::getSdkVersion(this, *(const mach_header **)(*((_QWORD *)this + 1) + 8LL));
  v3 = SdkVersion;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_program_sdk_version() => 0x%08X\n", SdkVersion);
  return v3;
}
