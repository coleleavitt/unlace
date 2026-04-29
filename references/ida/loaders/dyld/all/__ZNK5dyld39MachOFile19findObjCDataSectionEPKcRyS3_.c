__int64 __fastcall dyld3::MachOFile::findObjCDataSection(
        dyld3::MachOFile *this,
        const char *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v4; // w22
  __int64 v5; // x19
  __int64 v7; // [xsp+50h] [xbp-40h] BYREF
  __int64 *v8; // [xsp+58h] [xbp-38h]
  __int64 v9; // [xsp+60h] [xbp-30h]
  char v10; // [xsp+68h] [xbp-28h]

  v4 = (int)this;
  v7 = 0;
  v8 = &v7;
  v9 = 0x2000000000LL;
  v10 = 0;
  dyld3::MachOFile::preferredLoadAddress(this);
  dyld3::MachOFile::forEachSection(v4);
  v5 = *((unsigned __int8 *)v8 + 24);
  _Block_object_dispose(&v7, 8);
  return v5;
}
