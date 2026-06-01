__int64 __fastcall dyld4::APIs::dyld_get_sdk_version(dyld4::APIs *this, const mach_header *a2)
{
  __int64 SdkVersion; // x0
  __int64 v5; // x21

  SdkVersion = dyld4::APIs::getSdkVersion(this, a2);
  v5 = SdkVersion;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_sdk_version(%p) => 0x%08X\n", a2, SdkVersion);
  return v5;
}
