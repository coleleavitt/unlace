__int64 __fastcall dyld3::MachOFile::hasSection(dyld3::MachOFile *this, const char *a2, const char *a3)
{
  __int64 v3; // x19
  __int64 v5; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+48h] [xbp-28h]
  __int64 v7; // [xsp+50h] [xbp-20h]
  char v8; // [xsp+58h] [xbp-18h]

  v5 = 0;
  v6 = &v5;
  v7 = 0x2000000000LL;
  v8 = 0;
  dyld3::MachOFile::forEachSection((int)this);
  v3 = *((unsigned __int8 *)v6 + 24);
  _Block_object_dispose(&v5, 8);
  return v3;
}
