void __fastcall dyld4::Loader::forEachPath(int a1, __int64 a2, dyld4::Utils *__s, __int64 a4, __int64 a5)
{
  __int64 v9; // x24
  char v10; // w4
  __int64 *v11; // x8
  __int64 v12; // x9
  const char *v13; // x2
  unsigned int v14; // w2
  int v15; // w3
  _QWORD v16[9]; // [xsp+8h] [xbp-98h] BYREF
  __int64 v17; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v18; // [xsp+58h] [xbp-48h]
  __int64 v19; // [xsp+60h] [xbp-40h]
  char v20; // [xsp+68h] [xbp-38h]

  v17 = 0;
  v18 = &v17;
  v19 = 0x2000000000LL;
  v20 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a4 + 1) || !_platform_strchr((char *)__s, 47) )
  {
    v10 = 0;
    v11 = &v17;
    v12 = v9;
  }
  else
  {
    v10 = dyld4::ProcessConfig::PathOverrides::getFrameworkPartialPath(
            (dyld4::ProcessConfig::PathOverrides *)(v9 + 344),
            __s,
            v13) == 0;
    v12 = *(_QWORD *)(a2 + 8);
    v11 = v18;
  }
  v14 = *(_DWORD *)(v12 + 68);
  v15 = *(unsigned __int8 *)(a4 + 11);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 0x40000000;
  v16[2] = ___ZN5dyld46Loader11forEachPathER11DiagnosticsRNS_12RuntimeStateEPKcRKNS0_11LoadOptionsEU13block_pointerFvS6_NS_13ProcessConfig13PathOverrides4TypeERbE_block_invoke;
  v16[3] = &unk_95A70;
  v16[6] = a4;
  v16[7] = __s;
  v16[8] = a2;
  v16[4] = a5;
  v16[5] = &v17;
  dyld4::ProcessConfig::PathOverrides::forEachPathVariant(v9 + 344, __s, v14, v15, v10, (_BYTE *)v11 + 24, (__int64)v16);
  _Block_object_dispose(&v17, 8);
}
