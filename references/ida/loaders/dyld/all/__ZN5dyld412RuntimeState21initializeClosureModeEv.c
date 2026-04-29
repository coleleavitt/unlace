__int64 __fastcall dyld4::RuntimeState::initializeClosureMode(dyld4::RuntimeState *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  __int64 v4; // x9
  unsigned int *v5; // x20
  int valid; // w0
  void *v7; // x0
  __int64 v8; // x8
  __int64 LaunchLoaderSet; // x0
  dyld4::PrebuiltLoaderSet *v10; // x20
  __int64 v11; // x20
  __int64 v12; // x8
  DyldSharedCache *v13; // x20
  const char *v14; // x0
  __int64 v15; // x8
  int v16; // w23
  dyld4::ProcessConfig::Process *v17; // x0
  DyldSharedCache *v18; // x20
  const char *v19; // x0
  __int64 LaunchLoaderSetWithCDHash; // x0
  const char *v21; // x1
  dyld4::RuntimeState *v22; // x0
  const char *v23; // x21
  dyld4::Loader *v24; // x0
  const char *v25; // x1
  const char *v26; // x0
  __int64 v27; // x8
  const char *v28; // x0
  const char *v29; // x21
  int v30; // w22
  int v31; // w23
  dyld4::PrebuiltLoaderSet **v32; // x24
  __int64 result; // x0
  __int64 v34; // x0
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x20
  __int64 v39; // x0
  __int64 v40; // x20
  __int64 v41; // x0
  dyld4::PrebuiltLoaderSet *v42; // x8
  _BYTE *v43; // x9
  __int64 v44; // x8
  const char *v45; // x10
  __int64 v46; // x8
  __int64 v47; // x8
  dyld4::RuntimeState *ProcessArrays; // x0
  dyld4::PrebuiltLoader *v49; // x21
  __int64 v50; // x8
  const char *v51; // x0
  const char *v52; // x0
  unsigned int v53; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int8 v54[20]; // [xsp+14h] [xbp-4Ch] BYREF

  v2 = 0u;
  *((_OWORD *)this + 41) = 0u;
  v3 = *((_QWORD *)this + 1);
  v4 = *(_QWORD *)(v3 + 200);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 16) >= 0x170u )
    {
      v5 = (unsigned int *)(*(_QWORD *)(v3 + 208) + *(_QWORD *)(v4 + 328));
      valid = dyld4::PrebuiltLoaderSet::validHeader((dyld4::PrebuiltLoaderSet *)v5, this);
      v2 = 0u;
      if ( valid )
      {
        *((_QWORD *)this + 82) = v5;
        v7 = (void *)lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), v5[3]);
        *((_QWORD *)this + 83) = v7;
        __bzero(v7, *(unsigned int *)(*((_QWORD *)this + 82) + 12LL));
        v2 = 0u;
      }
    }
  }
  *((_QWORD *)this + 84) = 0;
  *((_OWORD *)this + 43) = v2;
  *((_BYTE *)this + 704) = 0;
  v8 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v8 + 200) )
  {
    if ( *(_BYTE *)(v8 + 187) )
      dyld4::RuntimeState::log(this, "PrebuiltLoaders not being used because there is no dyld shared cache\n");
    goto LABEL_37;
  }
  if ( (unsigned int)dyld4::ProcessConfig::PathOverrides::dontUsePrebuiltForApp((dyld4::ProcessConfig::PathOverrides *)(v8 + 344)) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      dyld4::RuntimeState::log(this, "PrebuiltLoaders not being used because DYLD_ env vars are set\n");
    goto LABEL_37;
  }
  if ( !*((_QWORD *)this + 82) || !*((_QWORD *)this + 83) )
  {
LABEL_37:
    v31 = 0;
    v30 = 0;
    v32 = (dyld4::PrebuiltLoaderSet **)((char *)this + 680);
    goto LABEL_38;
  }
  LaunchLoaderSet = DyldSharedCache::findLaunchLoaderSet(
                      *(DyldSharedCache **)(*((_QWORD *)this + 1) + 200LL),
                      *(const char **)(*((_QWORD *)this + 1) + 16LL));
  if ( LaunchLoaderSet )
  {
    v10 = (dyld4::PrebuiltLoaderSet *)LaunchLoaderSet;
LABEL_25:
    v16 = 0;
    goto LABEL_26;
  }
  v11 = *((_QWORD *)this + 1);
  if ( !_platform_strncmp(*(const char **)(v11 + 16), "/System/", 8u) )
  {
    v17 = (dyld4::ProcessConfig::Process *)(v11 + 8);
    v18 = *(DyldSharedCache **)(v11 + 200);
    v19 = (const char *)dyld4::ProcessConfig::Process::appleParam(v17, "executable_cdhash");
    LaunchLoaderSetWithCDHash = DyldSharedCache::findLaunchLoaderSetWithCDHash(v18, v19);
    if ( LaunchLoaderSetWithCDHash )
    {
      v10 = (dyld4::PrebuiltLoaderSet *)LaunchLoaderSetWithCDHash;
      v22 = (dyld4::RuntimeState *)dyld4::Loader::leafName(*(dyld4::Loader **)(*((_QWORD *)this + 1) + 16LL), v21);
      if ( !*((_DWORD *)v10 + 3) )
        dyld4::RuntimeState::initializeClosureMode(v22);
      v23 = (const char *)v22;
      v24 = (dyld4::Loader *)dyld4::PrebuiltLoader::path((dyld4::PrebuiltLoaderSet *)((char *)v10
                                                                                    + *(unsigned int *)((char *)v10 + *((unsigned int *)v10 + 4))));
      v26 = (const char *)dyld4::Loader::leafName(v24, v25);
      if ( !_platform_strcmp(v23, v26) )
        goto LABEL_25;
    }
  }
  v12 = *((_QWORD *)this + 1);
  v13 = *(DyldSharedCache **)(v12 + 200);
  v14 = (const char *)dyld4::ProcessConfig::Process::appleParam(
                        (dyld4::ProcessConfig::Process *)(v12 + 8),
                        "executable_cdhash");
  if ( (DyldSharedCache::hasLaunchLoaderSetWithCDHash(v13, v14) & 1) != 0 )
  {
LABEL_24:
    v10 = nullptr;
    goto LABEL_25;
  }
  v15 = *((_QWORD *)this + 1);
  if ( (unsigned int)(*(_DWORD *)(v15 + 68) - 2) >= 3 )
  {
    dyld4::ProcessConfig::Process::appleParam((dyld4::ProcessConfig::Process *)(v15 + 8), "executable_cdhash");
    goto LABEL_24;
  }
  v10 = nullptr;
  v16 = 1;
LABEL_26:
  v27 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v27 + 168) )
    goto LABEL_31;
  v28 = (const char *)dyld4::ProcessConfig::Process::environ(
                        (dyld4::ProcessConfig::Process *)(v27 + 8),
                        "DYLD_USE_CLOSURES");
  if ( !v28 )
    goto LABEL_31;
  v29 = v28;
  if ( !_platform_strcmp(v28, "0") )
  {
    *((_QWORD *)this + 82) = 0;
    goto LABEL_37;
  }
  if ( !_platform_strcmp(v29, "1") )
  {
    v46 = *((_QWORD *)this + 1);
    if ( (unsigned int)(*(_DWORD *)(v46 + 68) - 2) < 3 )
    {
      v30 = 0;
      v31 = 1;
      goto LABEL_69;
    }
    dyld4::ProcessConfig::Process::appleParam((dyld4::ProcessConfig::Process *)(v46 + 8), "executable_cdhash");
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      dyld4::RuntimeState::log(this, "PrebuiltLoaders cannot be used with unsigned or old format programs\n");
    v30 = 0;
LABEL_68:
    v31 = 0;
    goto LABEL_69;
  }
  if ( !_platform_strcmp(v29, "2") )
  {
    v47 = *((_QWORD *)this + 1);
    if ( (unsigned int)(*(_DWORD *)(v47 + 68) - 2) >= 3 )
    {
      dyld4::ProcessConfig::Process::appleParam((dyld4::ProcessConfig::Process *)(v47 + 8), "executable_cdhash");
      if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
        dyld4::RuntimeState::log(this, "PrebuiltLoaders cannot be used with unsigned or old format programs\n");
    }
    v31 = 0;
    v30 = 1;
    goto LABEL_33;
  }
LABEL_31:
  v30 = 0;
  if ( !v16 )
  {
    v31 = 0;
    goto LABEL_69;
  }
  v31 = 1;
LABEL_33:
  dyld4::RuntimeState::buildAppPrebuiltLoaderSetPath(this, 0);
  if ( !*((_QWORD *)this + 84) )
    goto LABEL_68;
  dyld4::RuntimeState::loadAppPrebuiltLoaderSet(this);
LABEL_69:
  v32 = (dyld4::PrebuiltLoaderSet **)((char *)this + 680);
  result = *((_QWORD *)this + 85);
  if ( result || !v10 )
  {
LABEL_39:
    if ( result )
    {
      v34 = dyld4::PrebuiltLoaderSet::swiftTypeProtocolTable((dyld4::PrebuiltLoaderSet *)result);
      if ( v34 )
      {
        v35 = v34;
        v36 = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), 0x68u);
        *((_QWORD *)this + 39) = dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::MultiMap(
                                   v36,
                                   this,
                                   v35);
      }
      v37 = dyld4::PrebuiltLoaderSet::swiftMetadataProtocolTable(*v32);
      if ( v37 )
      {
        v38 = v37;
        v39 = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), 0x68u);
        *((_QWORD *)this + 40) = dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::MultiMap(
                                   v39,
                                   this,
                                   v38);
      }
      result = dyld4::PrebuiltLoaderSet::swiftForeignTypeProtocolTable(*v32);
      if ( result )
      {
        v40 = result;
        v41 = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), 0x68u);
        result = dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::MultiMap(
                   v41,
                   this,
                   v40);
        *((_QWORD *)this + 41) = result;
      }
    }
    v42 = *v32;
    if ( !*v32 )
    {
      *((_BYTE *)this + 704) = v31;
      if ( v31 )
        goto LABEL_48;
      v42 = nullptr;
    }
LABEL_52:
    *((_BYTE *)this + 705) = 0;
    if ( !v30 )
      return result;
    v43 = (char *)this + 705;
    if ( v42 )
      return result;
    goto LABEL_54;
  }
  ProcessArrays = (dyld4::RuntimeState *)dyld4::RuntimeState::allocateProcessArrays(this, *((unsigned int *)v10 + 3));
  **((_QWORD **)this + 87) = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
  if ( !*((_DWORD *)v10 + 3) )
    dyld4::RuntimeState::initializeClosureMode(ProcessArrays);
  v49 = (dyld4::PrebuiltLoaderSet *)((char *)v10 + *(unsigned int *)((char *)v10 + *((unsigned int *)v10 + 4)));
  v50 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v50 + 187) )
  {
    dyld4::RuntimeState::log(
      this,
      "PrebuiltLoader %p found for %s in the dyld cache\n",
      (char *)v10 + *(unsigned int *)((char *)v10 + *((unsigned int *)v10 + 4)),
      *(const char **)(v50 + 16));
    v50 = *((_QWORD *)this + 1);
  }
  v51 = (const char *)dyld4::ProcessConfig::Process::appleParam(
                        (dyld4::ProcessConfig::Process *)(v50 + 8),
                        "executable_cdhash");
  if ( !v51
    || (v53 = 0, !(unsigned int)hexStringToBytes(v51, v54, 0x14u, &v53))
    || (dyld4::PrebuiltLoader::recordedCdHashIs(v49, v54) & 1) == 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      dyld4::RuntimeState::log(this, "PrebuiltLoader %p not used because cdHash does not match\n", v49);
    goto LABEL_38;
  }
  *((_QWORD *)this + 85) = v10;
  result = dyld4::PrebuiltLoaderSet::isValid(v10, this);
  if ( (result & 1) != 0 )
  {
LABEL_38:
    result = (__int64)*v32;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
  {
    v52 = (const char *)dyld4::PrebuiltLoader::path(v49);
    result = dyld4::RuntimeState::log(this, "PrebuiltLoader %p not used because Loader for %s is invalid\n", v10, v52);
  }
  *((_QWORD *)this + 85) = 0;
  *((_BYTE *)this + 704) = v31;
  if ( (v31 & 1) == 0 )
  {
    v42 = nullptr;
    v31 = 0;
    goto LABEL_52;
  }
LABEL_48:
  result = dyld4::RuntimeState::buildAppPrebuiltLoaderSetPath(this, 1);
  *((_BYTE *)this + 705) = 0;
  if ( !v30 )
    return result;
  v43 = (char *)this + 705;
  v31 = 1;
  if ( *v32 )
    return result;
LABEL_54:
  v44 = *((_QWORD *)this + 1);
  if ( !((v31 ^ 1) & 1 | (*(_QWORD *)(v44 + 200) == 0)) )
  {
    v45 = *((const char **)this + 84);
    if ( v45 )
    {
      *v43 = 1;
      if ( *(_BYTE *)(v44 + 187) )
        return dyld4::RuntimeState::log(
                 this,
                 "PrebuiltLoaderSet required for '%s' but not found at '%s'\n",
                 *(const char **)(v44 + 128),
                 v45);
    }
  }
  return result;
}
