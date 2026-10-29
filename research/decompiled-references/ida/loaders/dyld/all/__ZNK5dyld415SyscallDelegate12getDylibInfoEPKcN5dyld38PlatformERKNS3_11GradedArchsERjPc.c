__int64 __fastcall dyld4::SyscallDelegate::getDylibInfo(int a1, dyld3 *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v12; // x19
  _QWORD v14[10]; // [xsp+8h] [xbp-F8h] BYREF
  int v15; // [xsp+58h] [xbp-A8h]
  __int64 v16; // [xsp+60h] [xbp-A0h] BYREF
  __int64 *v17; // [xsp+68h] [xbp-98h]
  __int64 v18; // [xsp+70h] [xbp-90h]
  char v19; // [xsp+78h] [xbp-88h]
  __int64 v20; // [xsp+80h] [xbp-80h] BYREF
  __int64 *v21; // [xsp+88h] [xbp-78h]
  __int64 v22; // [xsp+90h] [xbp-70h]
  __int64 (__fastcall *v23)(); // [xsp+98h] [xbp-68h]
  __int64 (__fastcall *v24)(); // [xsp+A0h] [xbp-60h]
  vm_address_t v25; // [xsp+A8h] [xbp-58h] BYREF

  v20 = 0;
  v21 = &v20;
  v22 = 0x3002000000LL;
  v23 = __Block_byref_object_copy__6;
  v24 = __Block_byref_object_dispose__6;
  Diagnostics::Diagnostics((Diagnostics *)&v25);
  v16 = 0;
  v17 = &v16;
  v18 = 0x2000000000LL;
  v19 = 0;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 0x40000000;
  v14[2] = ___ZNK5dyld415SyscallDelegate12getDylibInfoEPKcN5dyld38PlatformERKNS3_11GradedArchsERjPc_block_invoke;
  v14[3] = &unk_96490;
  v15 = a3;
  v14[6] = a4;
  v14[7] = a2;
  v14[8] = a5;
  v14[9] = a6;
  v14[4] = &v20;
  v14[5] = &v16;
  dyld4::SyscallDelegate::withReadOnlyMappedFile(a1, (_DWORD)v21 + 40, a2, 0, (__int64)v14);
  v12 = *((unsigned __int8 *)v17 + 24);
  _Block_object_dispose(&v16, 8);
  _Block_object_dispose(&v20, 8);
  Diagnostics::~Diagnostics(&v25);
  return v12;
}
