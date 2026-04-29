__int64 __fastcall dyld3::MachOFile::hasObjCMessageReferences(dyld3::MachOFile *this)
{
  __int64 v1; // x19
  __int64 v3; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v4; // [xsp+38h] [xbp-28h]
  __int64 v5; // [xsp+40h] [xbp-20h]
  char v6; // [xsp+48h] [xbp-18h]

  v3 = 0;
  v4 = &v3;
  v5 = 0x2000000000LL;
  v6 = 0;
  dyld3::MachOFile::forEachSection((int)this);
  v1 = *((unsigned __int8 *)v4 + 24);
  _Block_object_dispose(&v3, 8);
  return v1;
}
