__int64 __fastcall dyld4::PrebuiltLoaderSet::swiftForeignTypeProtocolTable(dyld4::PrebuiltLoaderSet *this)
{
  __int64 v1; // x8

  v1 = *((unsigned int *)this + 18);
  if ( (_DWORD)v1 )
    return (__int64)this + v1;
  else
    return 0;
}
