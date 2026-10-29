__int64 __fastcall dyld3::MachOFile::findFairPlayEncryptionLoadCommand(dyld3::MachOFile *this)
{
  __int64 v2; // x19
  _QWORD v4[5]; // [xsp+0h] [xbp-60h] BYREF
  vm_address_t v5; // [xsp+28h] [xbp-38h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  __int64 v9; // [xsp+48h] [xbp-18h]

  v6 = 0;
  v7 = &v6;
  v8 = 0x2000000000LL;
  v9 = 0;
  Diagnostics::Diagnostics((Diagnostics *)&v5);
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld39MachOFile33findFairPlayEncryptionLoadCommandEv_block_invoke;
  v4[3] = &unk_974E0;
  v4[4] = &v6;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v5, (__int64)v4);
  v2 = 0;
  if ( Diagnostics::noError((Diagnostics *)&v5) )
    v2 = v7[3];
  Diagnostics::~Diagnostics(&v5);
  _Block_object_dispose(&v6, 8);
  return v2;
}
