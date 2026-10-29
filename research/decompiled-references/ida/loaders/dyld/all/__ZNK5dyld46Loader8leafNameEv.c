char *__fastcall dyld4::Loader::leafName(dyld4::Loader *this)
{
  char *v1; // x19
  char *v2; // x0

  v1 = (char *)dyld4::Loader::path(this);
  v2 = strrchr(v1, 47);
  if ( v2 )
    return v2 + 1;
  else
    return v1;
}
