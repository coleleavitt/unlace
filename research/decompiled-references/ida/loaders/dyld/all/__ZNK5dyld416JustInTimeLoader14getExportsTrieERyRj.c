bool __fastcall dyld4::JustInTimeLoader::getExportsTrie(
        dyld4::JustInTimeLoader *this,
        unsigned __int64 *a2,
        unsigned int *a3)
{
  unsigned __int64 v3; // x8

  v3 = *((unsigned int *)this + 20);
  if ( (_DWORD)v3 )
  {
    *a2 = v3;
    *a3 = *((_DWORD *)this + 21);
  }
  return (_DWORD)v3 != 0;
}
