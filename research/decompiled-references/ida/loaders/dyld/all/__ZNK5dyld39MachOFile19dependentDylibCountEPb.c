__int64 __fastcall dyld3::MachOFile::dependentDylibCount(dyld3::MachOFile *this, bool *a2)
{
  __int64 v3; // x19
  _QWORD v5[6]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v6; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-48h]
  __int64 v8; // [xsp+40h] [xbp-40h]
  char v9; // [xsp+48h] [xbp-38h]
  __int64 v10; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v11; // [xsp+58h] [xbp-28h]
  __int64 v12; // [xsp+60h] [xbp-20h]
  int v13; // [xsp+68h] [xbp-18h]

  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v6 = 0;
  v7 = &v6;
  v8 = 0x2000000000LL;
  v9 = 1;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld39MachOFile19dependentDylibCountEPb_block_invoke;
  v5[3] = &unk_975D0;
  v5[4] = &v10;
  v5[5] = &v6;
  dyld3::MachOFile::forEachDependentDylib(this, (__int64)v5);
  if ( a2 )
    *a2 = *((_BYTE *)v7 + 24);
  v3 = *((unsigned int *)v11 + 6);
  _Block_object_dispose(&v6, 8);
  _Block_object_dispose(&v10, 8);
  return v3;
}
