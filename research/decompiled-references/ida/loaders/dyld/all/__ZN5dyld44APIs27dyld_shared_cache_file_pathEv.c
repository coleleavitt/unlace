const char *__fastcall dyld4::APIs::dyld_shared_cache_file_path(dyld4::APIs *this)
{
  __int64 v1; // x8
  const char *v2; // x19

  v1 = *((_QWORD *)this + 1);
  v2 = *(const char **)(v1 + 224);
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "dyld_shared_cache_file_path() => %s\n", v2);
  return v2;
}
