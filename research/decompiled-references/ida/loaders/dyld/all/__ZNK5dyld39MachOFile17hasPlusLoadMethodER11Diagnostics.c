__int64 __fastcall dyld3::MachOFile::hasPlusLoadMethod(dyld3::MachOFile *this, Diagnostics *a2)
{
  __int64 v2; // x19
  __int64 v4; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v5; // [xsp+38h] [xbp-28h]
  __int64 v6; // [xsp+40h] [xbp-20h]
  char v7; // [xsp+48h] [xbp-18h]

  v4 = 0;
  v5 = &v4;
  v6 = 0x2000000000LL;
  v7 = 0;
  dyld3::MachOFile::forEachSection((int)this);
  v2 = *((unsigned __int8 *)v5 + 24);
  _Block_object_dispose(&v4, 8);
  return v2;
}
