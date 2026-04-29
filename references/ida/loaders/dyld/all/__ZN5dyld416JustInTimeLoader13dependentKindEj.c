__int64 __fastcall dyld4::JustInTimeLoader::dependentKind(dyld4::JustInTimeLoader *this, unsigned int a2)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x8

  v2 = *((_QWORD *)this + 2);
  v3 = (unsigned __int16)(v2 >> 39);
  if ( (unsigned int)v3 <= a2 )
    dyld4::JustInTimeLoader::dependentKind(this, a2);
  if ( (v2 & 0x800000) != 0 )
    dyld4::JustInTimeLoader::dependentKind(this, a2);
  return (__int64)this + 8 * v3 + a2 + 88;
}
