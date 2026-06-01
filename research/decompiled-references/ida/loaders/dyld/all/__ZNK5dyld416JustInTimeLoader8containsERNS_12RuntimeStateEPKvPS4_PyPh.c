bool __fastcall dyld4::JustInTimeLoader::contains(
        dyld4::JustInTimeLoader *this,
        dyld4::RuntimeState *a2,
        unsigned __int64 a3,
        const void **a4,
        unsigned __int64 *a5,
        unsigned __int8 *a6)
{
  dyld3::MachOFile *v6; // x20
  _BOOL8 v7; // x19
  _QWORD v9[10]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v10; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v11; // [xsp+58h] [xbp-48h]
  __int64 v12; // [xsp+60h] [xbp-40h]
  char v13; // [xsp+68h] [xbp-38h]

  v6 = *((dyld3::MachOFile **)this + 1);
  if ( (unsigned __int64)v6 > a3 )
    return 0;
  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK5dyld416JustInTimeLoader8containsERNS_12RuntimeStateEPKvPS4_PyPh_block_invoke;
  v9[3] = &unk_95F20;
  v9[6] = a3;
  v9[7] = a4;
  v9[8] = a5;
  v9[9] = a6;
  v9[4] = &v10;
  v9[5] = (char *)v6 - dyld3::MachOFile::preferredLoadAddress(v6);
  dyld3::MachOFile::forEachSegment(v6, v9);
  v7 = *((_BYTE *)v11 + 24) != 0;
  _Block_object_dispose(&v10, 8);
  return v7;
}
