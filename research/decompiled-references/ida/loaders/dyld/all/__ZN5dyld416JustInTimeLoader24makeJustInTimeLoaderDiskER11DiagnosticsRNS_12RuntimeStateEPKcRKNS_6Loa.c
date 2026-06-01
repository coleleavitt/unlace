__int64 __fastcall dyld4::JustInTimeLoader::makeJustInTimeLoaderDisk(
        __int64 a1,
        __int64 a2,
        dyld3 *a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7)
{
  __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x19
  _QWORD v18[10]; // [xsp+8h] [xbp-B8h] BYREF
  int v19; // [xsp+58h] [xbp-68h]
  char v20; // [xsp+5Ch] [xbp-64h]
  __int64 v21; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v22; // [xsp+68h] [xbp-58h]
  __int64 v23; // [xsp+70h] [xbp-50h]
  __int64 v24; // [xsp+78h] [xbp-48h]

  v21 = 0;
  v22 = &v21;
  v23 = 0x2000000000LL;
  v24 = 0;
  v14 = dyld3::GradedArchs::checksOSBinary(*(dyld3::GradedArchs **)(*(_QWORD *)(a2 + 8) + 144LL));
  v15 = *(_QWORD *)(a2 + 8);
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 0x40000000;
  v18[2] = ___ZN5dyld416JustInTimeLoader24makeJustInTimeLoaderDiskER11DiagnosticsRNS_12RuntimeStateEPKcRKNS_6Loader11LoadOptionsEbjPKN6mach_o6LayoutE_block_invoke;
  v18[3] = &unk_96180;
  v18[6] = a3;
  v18[7] = a2;
  v18[4] = &v21;
  v18[5] = a1;
  v20 = a5;
  v19 = a6;
  v18[8] = a4;
  v18[9] = a7;
  dyld4::SyscallDelegate::withReadOnlyMappedFile(v15, a1, a3, v14, (__int64)v18);
  v16 = v22[3];
  _Block_object_dispose(&v21, 8);
  return v16;
}
