const char *__fastcall dyld4::ProcessConfig::PathOverrides::forEachPathVariant(
        __int64 a1,
        dyld4::Utils *a2,
        unsigned int a3,
        int a4,
        char a5,
        _BYTE *a6,
        __int64 a7)
{
  const char *result; // x0
  const char *v13; // x26
  const char *v14; // x21
  __int64 v15; // x28
  _QWORD *v16; // x3
  const char *v17; // x0
  __int64 v18; // x1
  const char *v19; // x28
  __int64 v20; // x21
  char *v21; // x0
  const char *v22; // x22
  __int64 **v23; // x21
  size_t v24; // x0
  int v25; // w0
  char *v26; // x21
  __int64 v27; // x8
  char *v28; // x21
  char *v29; // x0
  char *v30; // x8
  char *v31; // x21
  __int64 v32; // x8
  char *v33; // x21
  char *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  char *v38; // x0
  const char *v39; // x21
  size_t v40; // x0
  char *v41; // x21
  __int128 v42; // [xsp+0h] [xbp-1B0h] BYREF
  int v43; // [xsp+18h] [xbp-198h]
  unsigned int v44; // [xsp+1Ch] [xbp-194h]
  _QWORD v45[10]; // [xsp+20h] [xbp-190h] BYREF
  _QWORD v46[10]; // [xsp+70h] [xbp-140h] BYREF
  _QWORD v47[9]; // [xsp+C0h] [xbp-F0h] BYREF
  _QWORD v48[9]; // [xsp+108h] [xbp-A8h] BYREF

  v43 = a4;
  v44 = a3;
  result = (const char *)dyld4::ProcessConfig::PathOverrides::getFrameworkPartialPath(
                           (dyld4::ProcessConfig::PathOverrides *)a1,
                           a2);
  v13 = result;
  if ( result )
  {
    v14 = *(const char **)(a1 + 8);
    v15 = *(_QWORD *)(a1 + 56);
    if ( !((unsigned __int64)v14 | v15) )
      goto LABEL_10;
    v48[0] = _NSConcreteStackBlock;
    v48[1] = 0x40000000;
    v48[2] = ___ZNK5dyld413ProcessConfig13PathOverrides18forEachPathVariantEPKcN5dyld38PlatformEbbRbU13block_pointerFvS3_NS1_4TypeES6_E_block_invoke;
    v48[3] = &unk_94EA0;
    v48[6] = _platform_strlen(result);
    v48[7] = v13;
    v48[8] = a6;
    v48[4] = a7;
    v48[5] = a1;
    v16 = v48;
    v17 = v14;
    v18 = v15;
  }
  else
  {
    v19 = *(const char **)a1;
    v20 = *(_QWORD *)(a1 + 48);
    if ( !(*(_QWORD *)a1 | v20) )
      goto LABEL_10;
    v21 = strrchr((char *)a2, 47);
    if ( v21 )
      v22 = v21 + 1;
    else
      v22 = (const char *)a2;
    v47[0] = _NSConcreteStackBlock;
    v47[1] = 0x40000000;
    v47[2] = ___ZNK5dyld413ProcessConfig13PathOverrides18forEachPathVariantEPKcN5dyld38PlatformEbbRbU13block_pointerFvS3_NS1_4TypeES6_E_block_invoke_2;
    v47[3] = &unk_94EC8;
    v47[6] = _platform_strlen(v22);
    v47[7] = v22;
    v47[8] = a6;
    v47[4] = a7;
    v47[5] = a1;
    v16 = v47;
    v17 = v19;
    v18 = v20;
  }
  result = dyld4::ProcessConfig::PathOverrides::forEachInColonList(v17, v18, a6, (__int64)v16);
LABEL_10:
  if ( *a6 )
    return result;
  v23 = *(__int64 ***)(a1 + 128);
  if ( !v23 )
  {
LABEL_15:
    if ( *(_BYTE *)a2 == 64 )
    {
LABEL_16:
      result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(a1, (__int64)a2, 9, a6, a7);
      if ( !*a6 && (a5 & 1) == 0 )
      {
        if ( v13 )
        {
          v24 = _platform_strlen(v13);
          v46[0] = _NSConcreteStackBlock;
          v46[1] = 0x40000000;
          v46[2] = ___ZNK5dyld413ProcessConfig13PathOverrides18forEachPathVariantEPKcN5dyld38PlatformEbbRbU13block_pointerFvS3_NS1_4TypeES6_E_block_invoke_3;
          v46[3] = &unk_94EF0;
          v46[6] = v24;
          v46[7] = v13;
          v46[8] = a2;
          v46[9] = a6;
          v46[4] = a7;
          v46[5] = a1;
          return (const char *)dyld4::ProcessConfig::PathOverrides::forEachFrameworkFallback(
                                 a1,
                                 v44,
                                 v43,
                                 a6,
                                 (__int64)v46);
        }
        else
        {
          v38 = strrchr((char *)a2, 47);
          if ( v38 )
            v39 = v38 + 1;
          else
            v39 = (const char *)a2;
          v40 = _platform_strlen(v39);
          v45[0] = _NSConcreteStackBlock;
          v45[1] = 0x40000000;
          v45[2] = ___ZNK5dyld413ProcessConfig13PathOverrides18forEachPathVariantEPKcN5dyld38PlatformEbbRbU13block_pointerFvS3_NS1_4TypeES6_E_block_invoke_4;
          v45[3] = &unk_94F18;
          v45[6] = v40;
          v45[7] = v39;
          v45[8] = a2;
          v45[9] = a6;
          v45[4] = a7;
          v45[5] = a1;
          return (const char *)dyld4::ProcessConfig::PathOverrides::forEachDylibFallback(a1, v44, v43, a6, (__int64)v45);
        }
      }
      return result;
    }
    if ( v44 == 6 )
    {
      v25 = _platform_strncmp((const char *)a2, "/System/iOSSupport/", 0x13u);
      if ( !*(_QWORD *)(a1 + 120) )
      {
        if ( !v25 )
          goto LABEL_16;
        _platform_strlen((const char *)a2);
        v41 = (char *)&v42 - ((__chkstk_darwin() + 41) & 0xFFFFFFFFFFFFFFF0LL);
        strcpy(v41, "/System/iOSSupport");
        strcat(v41, (const char *)a2);
        v35 = a1;
        v36 = (__int64)v41;
        v37 = 4;
LABEL_37:
        result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(v35, v36, v37, a6, a7);
        if ( *a6 )
          return result;
        goto LABEL_16;
      }
      if ( v25 )
      {
        _platform_strlen((const char *)a2);
        v26 = (char *)&v42 - ((__chkstk_darwin() + 41) & 0xFFFFFFFFFFFFFFF0LL);
        v42 = *(_OWORD *)"/System/iOSSupport";
        strcpy(v26, "/System/iOSSupport");
        strcat(v26, (const char *)a2);
        result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(a1, (__int64)v26, 3, a6, a7);
        if ( *a6 )
          return result;
        _platform_strlen(*(const char **)(a1 + 120));
        _platform_strlen((const char *)a2);
        __chkstk_darwin();
        v28 = (char *)&v42 - v27;
        v29 = strcpy((char *)&v42 - v27, *(const char **)(a1 + 120));
        v30 = &v28[_platform_strlen(v29)];
        *(_DWORD *)(v30 + 15) = 7631471;
        *(_OWORD *)v30 = v42;
        strcat(v28, (const char *)a2);
        result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(a1, (__int64)v28, 6, a6, a7);
        if ( *a6 )
          return result;
        _platform_strlen((const char *)a2);
        v31 = (char *)&v42 - ((__chkstk_darwin() + 41) & 0xFFFFFFFFFFFFFFF0LL);
        *(_DWORD *)(v31 + 15) = 7631471;
        *(_OWORD *)v31 = v42;
        strcat(v31, (const char *)a2);
        result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(a1, (__int64)v31, 4, a6, a7);
        if ( *a6 )
          return result;
      }
    }
    else if ( !*(_QWORD *)(a1 + 120) )
    {
      goto LABEL_16;
    }
    result = dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(a1, (__int64)a2, 8, a6, a7);
    if ( *a6 )
      return result;
    _platform_strlen(*(const char **)(a1 + 120));
    _platform_strlen((const char *)a2);
    __chkstk_darwin();
    v33 = (char *)&v42 - v32;
    v34 = strcpy((char *)&v42 - v32, *(const char **)(a1 + 120));
    strcat(v34, (const char *)a2);
    v35 = a1;
    v36 = (__int64)v33;
    v37 = 7;
    goto LABEL_37;
  }
  while ( _platform_strcmp((const char *)v23[1], (const char *)a2) )
  {
    v23 = (__int64 **)*v23;
    if ( !v23 )
      goto LABEL_15;
  }
  return (const char *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _BYTE *))(a7 + 16))(a7, v23[2], 1, a6);
}
