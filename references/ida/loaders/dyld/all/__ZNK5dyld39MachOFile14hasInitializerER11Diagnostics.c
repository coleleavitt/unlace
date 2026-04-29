bool __fastcall dyld3::MachOFile::hasInitializer(dyld3::MachOFile *this, Diagnostics *a2)
{
  _BOOL8 v4; // x19
  _QWORD v6[5]; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v7[5]; // [xsp+58h] [xbp-78h] BYREF
  __int64 v8; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v9; // [xsp+88h] [xbp-48h]
  __int64 v10; // [xsp+90h] [xbp-40h]
  char v11; // [xsp+98h] [xbp-38h]

  v8 = 0;
  v9 = &v8;
  v10 = 0x2000000000LL;
  v11 = 0;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld39MachOFile14hasInitializerER11Diagnostics_block_invoke;
  v7[3] = &unk_97648;
  v7[4] = &v8;
  dyld3::MachOFile::forEachLoadCommand(this, a2, (__int64)v7);
  if ( *((_BYTE *)v9 + 24)
    || (v6[0] = _NSConcreteStackBlock,
        v6[1] = 0x40000000,
        v6[2] = ___ZNK5dyld39MachOFile14hasInitializerER11Diagnostics_block_invoke_2,
        v6[3] = &unk_97670,
        v6[4] = &v8,
        dyld3::MachOFile::forEachInitializerPointerSection(this, a2, v6),
        *((_BYTE *)v9 + 24)) )
  {
    v4 = 1;
  }
  else
  {
    dyld3::MachOFile::forEachSection((int)this);
    v4 = *((_BYTE *)v9 + 24) != 0;
  }
  _Block_object_dispose(&v8, 8);
  return v4;
}
