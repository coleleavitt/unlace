__int64 __fastcall dyld4::PrebuiltLoaderSet::findLoader(dyld4::PrebuiltLoaderSet *this, const char *a2)
{
  unsigned __int16 v4; // [xsp+Eh] [xbp-12h] BYREF

  v4 = 0;
  if ( !(unsigned int)dyld4::PrebuiltLoaderSet::findIndex(this, a2, &v4) )
    return 0;
  if ( *((_DWORD *)this + 3) <= (unsigned int)v4 )
    dyld4::PrebuiltLoaderSet::findLoader();
  return (__int64)this + *(unsigned int *)((char *)this + 4 * v4 + *((unsigned int *)this + 4));
}
