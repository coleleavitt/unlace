__int64 __fastcall dyld4::Loader::getOnDiskBinarySliceOffset(
        dyld4::Loader *this,
        dyld4::RuntimeState *a2,
        const dyld3::MachOAnalyzer *a3,
        const char *a4)
{
  __int64 v7; // x0
  __int64 v8; // x19
  _QWORD v10[7]; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v11; // [xsp+40h] [xbp-80h] BYREF
  __int64 *v12; // [xsp+48h] [xbp-78h]
  __int64 v13; // [xsp+50h] [xbp-70h]
  __int64 v14; // [xsp+58h] [xbp-68h]
  __int64 v15; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v16; // [xsp+68h] [xbp-58h]
  __int64 v17; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v18)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v19)(); // [xsp+80h] [xbp-40h]
  vm_address_t v20; // [xsp+88h] [xbp-38h] BYREF

  v15 = 0;
  v16 = &v15;
  v17 = 0x3002000000LL;
  v18 = __Block_byref_object_copy__142;
  v19 = __Block_byref_object_dispose__143;
  Diagnostics::Diagnostics((Diagnostics *)&v20);
  v11 = 0;
  v12 = &v11;
  v13 = 0x2000000000LL;
  v14 = 0;
  v7 = *((_QWORD *)this + 1);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 0x40000000;
  v10[2] = ___ZN5dyld46Loader26getOnDiskBinarySliceOffsetERNS_12RuntimeStateEPKN5dyld313MachOAnalyzerEPKc_block_invoke;
  v10[3] = &unk_95ED8;
  v10[5] = &v11;
  v10[6] = a2;
  v10[4] = &v15;
  dyld4::SyscallDelegate::withReadOnlyMappedFile(v7, (_DWORD)v16 + 40, a3, 0, (__int64)v10);
  v8 = v12[3];
  _Block_object_dispose(&v11, 8);
  _Block_object_dispose(&v15, 8);
  Diagnostics::~Diagnostics(&v20);
  return v8;
}
