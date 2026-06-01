__int64 __fastcall dyld4::APIs::linkedDylibVersion(dyld4::APIs *this, const dyld3::MachOFile *a2, const char *a3)
{
  __int64 v3; // x19
  _QWORD v5[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  int v9; // [xsp+48h] [xbp-18h]

  v6 = 0;
  v7 = &v6;
  v8 = 0x2000000000LL;
  v9 = 0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZN5dyld44APIs18linkedDylibVersionEPKN5dyld39MachOFileEPKc_block_invoke;
  v5[3] = &unk_96740;
  v5[4] = &v6;
  v5[5] = a3;
  dyld3::MachOFile::forEachDependentDylib(a2, (__int64)v5);
  v3 = *((unsigned int *)v7 + 6);
  _Block_object_dispose(&v6, 8);
  return v3;
}
