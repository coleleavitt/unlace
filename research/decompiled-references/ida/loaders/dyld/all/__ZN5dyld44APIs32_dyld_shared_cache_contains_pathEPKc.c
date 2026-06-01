bool __fastcall dyld4::APIs::_dyld_shared_cache_contains_path(dyld4::ProcessConfig **this, const char *a2)
{
  __int64 v4; // x0
  __int64 v5; // x20

  v4 = dyld4::ProcessConfig::canonicalDylibPathInCache(*(this + 1), a2);
  v5 = v4;
  if ( *((_BYTE *)*(this + 1) + 184) )
    dyld4::RuntimeState::log((dyld4::RuntimeState *)this, "_dyld_shared_cache_contains_path(%s) => %d\n", a2, v4 != 0);
  return v5 != 0;
}
