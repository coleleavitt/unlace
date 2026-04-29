__int64 __fastcall dyld4::PrebuiltLoader::path(dyld4::PrebuiltLoader *this)
{
  if ( *((_WORD *)this + 4) )
    return (__int64)this + *((unsigned __int16 *)this + 4);
  else
    return 0;
}
