bool __fastcall dyld3::MachOFile::hasCodeSignature(dyld3::MachOFile *this, unsigned int *a2, unsigned int *a3)
{
  _BOOL8 v6; // x19
  _QWORD v8[6]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v9; // [xsp+38h] [xbp-A8h] BYREF
  __int64 *v10; // [xsp+40h] [xbp-A0h]
  __int64 v11; // [xsp+48h] [xbp-98h]
  char v12; // [xsp+50h] [xbp-90h]
  __int64 v13; // [xsp+58h] [xbp-88h] BYREF
  __int64 *v14; // [xsp+60h] [xbp-80h]
  __int64 v15; // [xsp+68h] [xbp-78h]
  char v16; // [xsp+70h] [xbp-70h]
  _QWORD v17[6]; // [xsp+78h] [xbp-68h] BYREF
  vm_address_t v18; // [xsp+A8h] [xbp-38h] BYREF

  *a2 = 0;
  *a3 = 0;
  Diagnostics::Diagnostics((Diagnostics *)&v18);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 0x40000000;
  v17[2] = ___ZNK5dyld39MachOFile16hasCodeSignatureERjS1__block_invoke;
  v17[3] = &__block_descriptor_tmp_139_0;
  v17[4] = a2;
  v17[5] = a3;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v18, (__int64)v17);
  Diagnostics::assertNoError((Diagnostics *)&v18);
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 1) | 0x1000000) == 0x1000007 )
    {
      v13 = 0;
      v14 = &v13;
      v15 = 0x2000000000LL;
      v16 = 0;
      v9 = 0;
      v10 = &v9;
      v11 = 0x2000000000LL;
      v12 = 0;
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 0x40000000;
      v8[2] = ___ZNK5dyld39MachOFile16hasCodeSignatureERjS1__block_invoke_2;
      v8[3] = &unk_97708;
      v8[4] = &v13;
      v8[5] = &v9;
      dyld3::MachOFile::forEachSupportedPlatform(this, (__int64)v8);
      if ( *((_BYTE *)v14 + 24) )
        v6 = *((_BYTE *)v10 + 24) == 0;
      else
        v6 = 0;
      _Block_object_dispose(&v9, 8);
      _Block_object_dispose(&v13, 8);
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  Diagnostics::~Diagnostics(&v18);
  return v6;
}
