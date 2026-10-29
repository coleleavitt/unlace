__int64 __fastcall dyld3::MachOFile::getDylibInstallName(
        dyld3::MachOFile *this,
        const char **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v8; // x19
  _QWORD v10[8]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v11; // [xsp+48h] [xbp-48h] BYREF
  __int64 *v12; // [xsp+50h] [xbp-40h]
  __int64 v13; // [xsp+58h] [xbp-38h]
  char v14; // [xsp+60h] [xbp-30h]
  vm_address_t v15; // [xsp+68h] [xbp-28h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v15);
  v11 = 0;
  v12 = &v11;
  v13 = 0x2000000000LL;
  v14 = 0;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 0x40000000;
  v10[2] = ___ZNK5dyld39MachOFile19getDylibInstallNameEPPKcPjS4__block_invoke;
  v10[3] = &unk_97358;
  v10[6] = a4;
  v10[7] = a2;
  v10[4] = &v11;
  v10[5] = a3;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v15, (__int64)v10);
  Diagnostics::assertNoError((Diagnostics *)&v15);
  v8 = *((unsigned __int8 *)v12 + 24);
  _Block_object_dispose(&v11, 8);
  Diagnostics::~Diagnostics(&v15);
  return v8;
}
