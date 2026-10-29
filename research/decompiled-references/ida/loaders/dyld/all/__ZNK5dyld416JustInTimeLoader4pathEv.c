__int64 __fastcall dyld4::JustInTimeLoader::path(dyld4::JustInTimeLoader *this)
{
  if ( *((_WORD *)this + 8) )
    return (__int64)this + *((unsigned __int16 *)this + 8);
  else
    return 0;
}
