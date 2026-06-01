__int64 __fastcall dyld4::APIs::dyld_get_active_platform(dyld4::APIs *this)
{
  __int64 v1; // x8
  __int64 v2; // x19

  v1 = *((_QWORD *)this + 1);
  v2 = *(unsigned int *)(v1 + 68);
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "dyld_get_active_platform() => %d\n", v2);
  return v2;
}
