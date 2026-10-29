bool __fastcall dyld3::MachOFile::inCodeSection(dyld3::MachOFile *this)
{
  int v1; // w19
  _BOOL8 v2; // x19
  __int64 v4; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v5; // [xsp+48h] [xbp-38h]
  __int64 v6; // [xsp+50h] [xbp-30h]
  char v7; // [xsp+58h] [xbp-28h]

  if ( *((_DWORD *)this + 1) != 16777228 )
    return 0;
  v1 = (int)this;
  if ( (*((_DWORD *)this + 2) & 0xFFFFFF) != 2 )
    return 0;
  v4 = 0;
  v5 = &v4;
  v6 = 0x2000000000LL;
  v7 = 0;
  dyld3::MachOFile::preferredLoadAddress(this);
  dyld3::MachOFile::forEachSection(v1);
  v2 = *((_BYTE *)v5 + 24) != 0;
  _Block_object_dispose(&v4, 8);
  return v2;
}
