void __fastcall ___ZNK5dyld416JustInTimeLoader17forEachBindTargetER11DiagnosticsRNS_12RuntimeStateEU13block_pointerFvjjRKNS_6Loader14ResolvedSymbolEEbU13block_pointerFvS8_RbESD__block_invoke(
        _QWORD *a1,
        const mach_o::Layout *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x11
  __int64 v6; // x8
  void **v7; // [xsp+0h] [xbp-100h]
  __int64 v8; // [xsp+8h] [xbp-F8h]
  __int64 (__fastcall *v9)(); // [xsp+10h] [xbp-F0h]
  void *v10; // [xsp+18h] [xbp-E8h]
  __int64 v11; // [xsp+20h] [xbp-E0h]
  __int64 v12; // [xsp+28h] [xbp-D8h]
  _QWORD *v13; // [xsp+30h] [xbp-D0h]
  __int64 v14; // [xsp+38h] [xbp-C8h]
  __int64 v15; // [xsp+40h] [xbp-C0h]
  void **v16; // [xsp+48h] [xbp-B8h]
  __int64 v17; // [xsp+50h] [xbp-B0h]
  __int64 (__fastcall *v18)(); // [xsp+58h] [xbp-A8h]
  void *v19; // [xsp+60h] [xbp-A0h]
  __int64 v20; // [xsp+68h] [xbp-98h]
  __int64 v21; // [xsp+70h] [xbp-90h]
  _QWORD *v22; // [xsp+78h] [xbp-88h]
  __int64 v23; // [xsp+80h] [xbp-80h]
  __int64 v24; // [xsp+88h] [xbp-78h]
  __int64 v25; // [xsp+90h] [xbp-70h]
  _QWORD v26[3]; // [xsp+98h] [xbp-68h] BYREF
  int v27; // [xsp+B0h] [xbp-50h]
  _QWORD v28[3]; // [xsp+B8h] [xbp-48h] BYREF
  int v29; // [xsp+D0h] [xbp-30h]
  _BYTE v30[8]; // [xsp+D8h] [xbp-28h] BYREF

  v3 = a1[7];
  mach_o::Fixups::Fixups((mach_o::Fixups *)v30, a2);
  v28[0] = 0;
  v28[1] = v28;
  v28[2] = 0x2000000000LL;
  v29 = 0;
  v26[0] = 0;
  v26[1] = v26;
  v26[2] = 0x2000000000LL;
  v27 = 0;
  v16 = _NSConcreteStackBlock;
  v17 = 0x40000000;
  v18 = ___ZNK5dyld416JustInTimeLoader17forEachBindTargetER11DiagnosticsRNS_12RuntimeStateEU13block_pointerFvjjRKNS_6Loader14ResolvedSymbolEEbU13block_pointerFvS8_RbESD__block_invoke_2;
  v19 = &unk_96090;
  v22 = v28;
  v23 = v3;
  v4 = a1[9];
  v24 = a1[8];
  v25 = v4;
  v5 = a1[5];
  v20 = a1[4];
  v21 = v5;
  v7 = _NSConcreteStackBlock;
  v8 = 0x40000000;
  v9 = ___ZNK5dyld416JustInTimeLoader17forEachBindTargetER11DiagnosticsRNS_12RuntimeStateEU13block_pointerFvjjRKNS_6Loader14ResolvedSymbolEEbU13block_pointerFvS8_RbESD__block_invoke_3;
  v10 = &unk_960B8;
  v13 = v26;
  v14 = v3;
  v15 = v4;
  v6 = a1[6];
  v11 = v20;
  v12 = v6;
  mach_o::Fixups::forEachBindTarget(v30);
  _Block_object_dispose(v26, 8);
  _Block_object_dispose(v28, 8);
}
