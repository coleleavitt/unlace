dyld4::Loader *__fastcall dyld4::Loader::leafName(dyld4::Loader *this, const char *a2)
{
  char *v3; // x0

  v3 = strrchr((char *)this, 47);
  if ( v3 )
    return (dyld4::Loader *)(v3 + 1);
  else
    return this;
}
