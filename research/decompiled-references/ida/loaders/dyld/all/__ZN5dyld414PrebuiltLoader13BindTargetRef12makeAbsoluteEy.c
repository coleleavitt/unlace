unsigned __int64 __fastcall dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(
        dyld4::PrebuiltLoader::BindTargetRef *this,
        unsigned __int64 a2)
{
  if ( (__int64)this - 0x4000000000000000LL >= 0 )
    dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(this, a2);
  return (unsigned __int64)this | 0x8000000000000000LL;
}
