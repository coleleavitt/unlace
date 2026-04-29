const char *__fastcall dyld4::APIs::_dyld_shared_cache_real_path(dyld4::ProcessConfig **this, const char *a2)
{
  const char *v4; // x0
  const char *v5; // x21

  v4 = (const char *)dyld4::ProcessConfig::canonicalDylibPathInCache(*(this + 1), a2);
  v5 = v4;
  if ( *((_BYTE *)*(this + 1) + 184) )
    dyld4::RuntimeState::log((dyld4::RuntimeState *)this, "_dyld_shared_cache_real_path(%s) => '%s'\n", a2, v4);
  return v5;
}
