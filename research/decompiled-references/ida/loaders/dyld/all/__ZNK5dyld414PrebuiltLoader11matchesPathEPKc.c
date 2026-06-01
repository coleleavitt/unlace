bool __fastcall dyld4::PrebuiltLoader::matchesPath(dyld4::PrebuiltLoader *this, const char *__s1)
{
  const char *v4; // x1

  if ( *((_WORD *)this + 4) )
    v4 = (char *)this + *((unsigned __int16 *)this + 4);
  else
    v4 = nullptr;
  return !_platform_strcmp(__s1, v4)
      || *((_WORD *)this + 8) && !_platform_strcmp(__s1, (const char *)this + *((unsigned __int16 *)this + 8));
}
