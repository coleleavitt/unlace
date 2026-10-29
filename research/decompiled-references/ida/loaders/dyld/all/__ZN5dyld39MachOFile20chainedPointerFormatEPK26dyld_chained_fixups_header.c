__int64 __fastcall dyld3::MachOFile::chainedPointerFormat(dyld3::MachOFile *this, const dyld_chained_fixups_header *a2)
{
  __int64 v2; // x10
  char *v3; // x8
  __int64 v4; // x9
  unsigned int *i; // x10
  __int64 v6; // x11
  char *v7; // x11

  v2 = *((unsigned int *)this + 1);
  v3 = (char *)this + v2;
  v4 = *(unsigned int *)((char *)this + v2);
  if ( !(_DWORD)v4 )
    return 0;
  for ( i = (unsigned int *)((char *)this + v2 + 4); ; ++i )
  {
    v6 = *i;
    if ( (_DWORD)v6 )
    {
      v7 = &v3[v6];
      if ( *((_WORD *)v7 + 10) )
        break;
    }
    if ( !--v4 )
      return 0;
  }
  return *((unsigned __int16 *)v7 + 3);
}
