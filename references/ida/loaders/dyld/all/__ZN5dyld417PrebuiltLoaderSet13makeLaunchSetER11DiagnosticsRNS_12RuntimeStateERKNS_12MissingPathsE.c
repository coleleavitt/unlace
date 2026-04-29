__int64 __fastcall dyld4::PrebuiltLoaderSet::makeLaunchSet(
        dyld4::PrebuiltLoaderSet *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        const dyld4::MissingPaths *a4)
{
  bool v5; // zf
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x20
  __int64 v15; // x0
  __int64 v16; // x8
  char *v17; // x26
  unsigned __int64 v18; // x8
  int v19; // w10
  unsigned __int64 v20; // x27
  __int64 *v21; // x9
  __int64 v22; // x11
  __int64 *v23; // x12
  __int64 v24; // x16
  __int16 v25; // w13
  _QWORD *v26; // x25
  __int64 v27; // t1
  int v28; // w6
  DyldSharedCache *v29; // x0
  _QWORD *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x23
  char *v33; // x21
  dyld4::BumpAllocator *v34; // x22
  __int64 v35; // t1
  __int64 v36; // x9
  __int64 v37; // x24
  const void *v38; // x23
  int v39; // w9
  __int64 v40; // x8
  char *v41; // x21
  dyld4::BumpAllocator *v42; // x22
  __int64 v43; // t1
  __int64 v44; // x9
  __int64 v45; // x24
  const void *v46; // x23
  int v47; // w9
  __int64 v48; // x8
  char *v49; // x21
  dyld4::BumpAllocator *v50; // x22
  __int64 v51; // t1
  __int64 v52; // x9
  __int64 v53; // x24
  const void *v54; // x23
  int v55; // w9
  __int64 v56; // x8
  dyld4::BumpAllocator *v57; // x1
  int v58; // t1
  int v59; // w9
  __int64 v60; // x8
  dyld4::BumpAllocator *v61; // x1
  int v62; // t1
  int v63; // w9
  __int64 v64; // x8
  dyld4::BumpAllocator *v65; // x1
  int v66; // t1
  int v67; // w9
  __int64 v68; // x8
  vm_address_t *v69; // x8
  vm_address_t v70; // x23
  dyld4::BumpAllocator *v71; // x21
  __int64 v72; // t1
  __int64 v73; // x10
  __int64 v74; // x24
  _OWORD *v75; // x22
  __int128 *v76; // x22
  __int64 v77; // x23
  _QWORD *v78; // x21
  __int64 v79; // x24
  __int128 v80; // t1
  _QWORD v81[2]; // [xsp+10h] [xbp-660h] BYREF
  _QWORD v82[7]; // [xsp+20h] [xbp-650h] BYREF
  _QWORD v83[6]; // [xsp+58h] [xbp-618h] BYREF
  vm_address_t v84; // [xsp+88h] [xbp-5E8h] BYREF
  vm_address_t *v85; // [xsp+90h] [xbp-5E0h]
  __int64 v86; // [xsp+98h] [xbp-5D8h]
  __int64 (__fastcall *v87)(); // [xsp+A0h] [xbp-5D0h]
  __int64 (__fastcall *v88)(); // [xsp+A8h] [xbp-5C8h]
  __n128 *v89; // [xsp+B0h] [xbp-5C0h]
  __int64 v90; // [xsp+B8h] [xbp-5B8h]
  __int64 v91; // [xsp+C0h] [xbp-5B0h]
  vm_address_t v92; // [xsp+C8h] [xbp-5A8h]
  vm_size_t v93; // [xsp+D0h] [xbp-5A0h]
  __int64 v94; // [xsp+D8h] [xbp-598h] BYREF
  __int64 *v95; // [xsp+E0h] [xbp-590h]
  __int64 v96; // [xsp+E8h] [xbp-588h]
  __int64 (__fastcall *v97)(); // [xsp+F0h] [xbp-580h]
  __int64 (__fastcall *v98)(); // [xsp+F8h] [xbp-578h]
  vm_address_t v99; // [xsp+100h] [xbp-570h] BYREF
  vm_size_t v100; // [xsp+108h] [xbp-568h]
  __int64 v101; // [xsp+110h] [xbp-560h]
  _QWORD v102[13]; // [xsp+118h] [xbp-558h] BYREF
  _QWORD v103[13]; // [xsp+180h] [xbp-4F0h] BYREF
  _QWORD v104[13]; // [xsp+1E8h] [xbp-488h] BYREF
  char v105; // [xsp+250h] [xbp-420h]
  _BYTE v106[496]; // [xsp+258h] [xbp-418h] BYREF
  const void *v107; // [xsp+448h] [xbp-228h]
  char *v108; // [xsp+458h] [xbp-218h]
  const void *v109; // [xsp+470h] [xbp-200h]
  char *v110; // [xsp+480h] [xbp-1F0h]
  const void *v111; // [xsp+498h] [xbp-1D8h]
  char *v112; // [xsp+4A8h] [xbp-1C8h]
  __int64 v113; // [xsp+4C0h] [xbp-1B0h]
  char v114; // [xsp+4C8h] [xbp-1A8h]
  __n128 v115[16]; // [xsp+4F8h] [xbp-178h] BYREF

  if ( *((_QWORD *)a2 + 18) )
    v5 = 0;
  else
    v5 = *((_QWORD *)a2 + 26) == 0;
  if ( !v5 || *((_QWORD *)a2 + 34) != 0 )
  {
    Diagnostics::error(this, "cannot make PrebuiltLoaderSet for program that uses interposing", a3, a4);
    return 0;
  }
  if ( dyld4::ProcessConfig::PathOverrides::dontUsePrebuiltForApp((dyld4::ProcessConfig::PathOverrides *)(*((_QWORD *)a2 + 1) + 344LL)) )
  {
    Diagnostics::error(this, "cannot make PrebuiltLoaderSet for program that uses DYLD_* env vars", v9, v10);
    return 0;
  }
  if ( dyld4::RuntimeState::hasMissingFlatLazySymbols(a2) )
  {
    Diagnostics::error(this, "cannot make PrebuiltLoaderSet for program that has missing flat lazy symbols", v11, v12);
    return 0;
  }
  v15 = __chkstk_darwin();
  v17 = (char *)v81 - ((v16 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *((_QWORD *)a2 + 6);
  if ( !v18 )
  {
    v20 = 0;
LABEL_26:
    v81[1] = v81;
    dyld4::PrebuiltObjC::PrebuiltObjC((dyld4::PrebuiltObjC *)v106);
    dyld4::PrebuiltSwift::PrebuiltSwift((dyld4::PrebuiltSwift *)v102);
    Diagnostics::Diagnostics((Diagnostics *)v115);
    dyld4::PrebuiltObjC::make((__int64)v106, (Diagnostics *)v115, a2);
    if ( !Diagnostics::hasError((Diagnostics *)v115) )
    {
      Diagnostics::Diagnostics((Diagnostics *)&v84);
      dyld4::PrebuiltSwift::make((dyld4::PrebuiltSwift *)v102, (Diagnostics *)&v84, (dyld4::PrebuiltObjC *)v106, a2);
      Diagnostics::~Diagnostics(&v84);
    }
    Diagnostics::~Diagnostics(v115[0].n128_u64);
    v94 = 0;
    v95 = &v94;
    v96 = 0x4002000000LL;
    v97 = __Block_byref_object_copy__76;
    v98 = __Block_byref_object_dispose__77;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)&v99, (char *)&stru_20.filesize);
    v27 = v95[5];
    v26 = v95 + 5;
    *(_QWORD *)v27 = 0x4D2B864773703464LL;
    *(_DWORD *)(v27 + 12) = v20;
    *(_OWORD *)(v27 + 16) = xmmword_7BFA0;
    *(_QWORD *)(v27 + 40) = 0;
    *(_DWORD *)(v27 + 48) = 0;
    *(_QWORD *)(v27 + 56) = 0;
    *(_QWORD *)(v27 + 64) = 0;
    *(_DWORD *)(v27 + 72) = 0;
    dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(4 * v20));
    v29 = *(DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL);
    if ( v29 )
    {
      *(_DWORD *)(*v26 + 28LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
      v115[0] = 0u;
      DyldSharedCache::getUUID(v29, v115);
      v30 = v95 + 5;
      v31 = v95[7] - v95[5];
      dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)&dword_10);
      *(__n128 *)(*v30 + v31) = v115[0];
    }
    v84 = 0;
    v85 = &v84;
    v86 = 0x5002000000LL;
    v87 = __Block_byref_object_copy__78;
    v88 = __Block_byref_object_dispose__79;
    v89 = v115;
    v90 = 16;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v83[0] = _NSConcreteStackBlock;
    v83[1] = 0x40000000;
    v83[2] = ___ZN5dyld417PrebuiltLoaderSet13makeLaunchSetER11DiagnosticsRNS_12RuntimeStateERKNS_12MissingPathsE_block_invoke;
    v83[3] = &unk_96440;
    v83[4] = &v84;
    v83[5] = this;
    if ( v20 )
    {
      v32 = 0;
      while ( 1 )
      {
        *(_DWORD *)(*v26 + *(unsigned int *)(*v26 + 16LL) + 4 * v32) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
        dyld4::PrebuiltLoader::serialize(
          this,
          a2,
          *(const dyld4::Loader **)&v17[8 * v32],
          v32 & 0x7FFF | 0x8000,
          (__int64)v83,
          (dyld4::PrebuiltObjC *)v106,
          v28,
          (dyld4::BumpAllocator *)(v95 + 5));
        if ( Diagnostics::hasError(this) )
          break;
        if ( v20 == ++v32 )
          goto LABEL_34;
      }
      v13 = 0;
    }
    else
    {
LABEL_34:
      if ( v106[488] )
      {
        v33 = v108;
        if ( v108 )
        {
          v35 = v95[5];
          v34 = (dyld4::BumpAllocator *)(v95 + 5);
          v36 = v95[7];
          v37 = v36 - v35;
          *(_DWORD *)(*v26 + 40LL) = v36 - v35;
          v38 = v107;
          dyld4::BumpAllocator::zeroFill(v34, v33);
          _platform_memmove((void *)(*(_QWORD *)v34 + v37), v38, (size_t)v33);
          LODWORD(v35) = *((_DWORD *)v95 + 10);
          v39 = *((_DWORD *)v95 + 14);
          v40 = ((_BYTE)v39 - (_BYTE)v35) & 7;
          if ( (((_BYTE)v39 - (_BYTE)v35) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v40));
        }
        v41 = v110;
        if ( v110 )
        {
          v43 = v95[5];
          v42 = (dyld4::BumpAllocator *)(v95 + 5);
          v44 = v95[7];
          v45 = v44 - v43;
          *(_DWORD *)(*v26 + 44LL) = v44 - v43;
          v46 = v109;
          dyld4::BumpAllocator::zeroFill(v42, v41);
          _platform_memmove((void *)(*(_QWORD *)v42 + v45), v46, (size_t)v41);
          LODWORD(v43) = *((_DWORD *)v95 + 10);
          v47 = *((_DWORD *)v95 + 14);
          v48 = ((_BYTE)v47 - (_BYTE)v43) & 7;
          if ( (((_BYTE)v47 - (_BYTE)v43) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v48));
        }
        v49 = v112;
        if ( v112 )
        {
          v51 = v95[5];
          v50 = (dyld4::BumpAllocator *)(v95 + 5);
          v52 = v95[7];
          v53 = v52 - v51;
          *(_DWORD *)(*v26 + 48LL) = v52 - v51;
          v54 = v111;
          dyld4::BumpAllocator::zeroFill(v50, v49);
          _platform_memmove((void *)(*(_QWORD *)v50 + v53), v54, (size_t)v49);
          LODWORD(v51) = *((_DWORD *)v95 + 10);
          v55 = *((_DWORD *)v95 + 14);
          v56 = ((_BYTE)v55 - (_BYTE)v51) & 7;
          if ( (((_BYTE)v55 - (_BYTE)v51) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v56));
        }
        if ( !v114 )
          std::__throw_bad_optional_access[abi:v15006]();
        *(_QWORD *)(*v26 + 56LL) = v113;
      }
      if ( v105 )
      {
        if ( v102[9] )
        {
          v57 = (dyld4::BumpAllocator *)(v95 + 5);
          *(_DWORD *)(*v26 + 64LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
          dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::serialize(
            (int)v102,
            v57);
          v58 = *((_DWORD *)v95 + 10);
          v59 = *((_DWORD *)v95 + 14);
          v60 = ((_BYTE)v59 - (_BYTE)v58) & 7;
          if ( (((_BYTE)v59 - (_BYTE)v58) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v60));
        }
        if ( v103[9] )
        {
          v61 = (dyld4::BumpAllocator *)(v95 + 5);
          *(_DWORD *)(*v26 + 68LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
          dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::serialize(
            (int)v103,
            v61);
          v62 = *((_DWORD *)v95 + 10);
          v63 = *((_DWORD *)v95 + 14);
          v64 = ((_BYTE)v63 - (_BYTE)v62) & 7;
          if ( (((_BYTE)v63 - (_BYTE)v62) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v64));
        }
        if ( v104[9] )
        {
          v65 = (dyld4::BumpAllocator *)(v95 + 5);
          *(_DWORD *)(*v26 + 72LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
          dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::serialize(
            (int)v104,
            v65);
          v66 = *((_DWORD *)v95 + 10);
          v67 = *((_DWORD *)v95 + 14);
          v68 = ((_BYTE)v67 - (_BYTE)v66) & 7;
          if ( (((_BYTE)v67 - (_BYTE)v66) & 7) != 0 )
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)(8 - v68));
        }
      }
      v69 = v85;
      v70 = v85[7];
      if ( v70 )
      {
        v72 = v95[5];
        v71 = (dyld4::BumpAllocator *)(v95 + 5);
        v73 = v95[7];
        v74 = v73 - v72;
        *(_DWORD *)(*v26 + 24LL) = v73 - v72;
        v75 = (_OWORD *)v69[5];
        dyld4::BumpAllocator::zeroFill(v71, (char *)&dword_10);
        *(_OWORD *)(*(_QWORD *)v71 + v74) = *v75;
        ++*(_DWORD *)(*v26 + 20LL);
        if ( v70 != 1 )
        {
          v76 = v75 + 1;
          v77 = 16 * v70 - 16;
          do
          {
            v78 = v95 + 5;
            v79 = v95[7] - v95[5];
            dyld4::BumpAllocator::zeroFill((dyld4::BumpAllocator *)(v95 + 5), (char *)&dword_10);
            v80 = *v76++;
            *(_OWORD *)(*v78 + v79) = v80;
            ++*(_DWORD *)(*v26 + 20LL);
            v77 -= 16;
          }
          while ( v77 );
        }
      }
      if ( *((_QWORD *)a3 + 2) != *(_QWORD *)a3 )
      {
        *(_DWORD *)(*v26 + 36LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
        v82[0] = _NSConcreteStackBlock;
        v82[1] = 0x40000000;
        v82[2] = ___ZN5dyld417PrebuiltLoaderSet13makeLaunchSetER11DiagnosticsRNS_12RuntimeStateERKNS_12MissingPathsE_block_invoke_2;
        v82[3] = &unk_96468;
        v82[4] = &v94;
        v82[5] = v26;
        v82[6] = 0;
        dyld4::MissingPaths::forEachPath(a3, v82);
      }
      *(_DWORD *)(*v26 + 8LL) = *((_DWORD *)v95 + 14) - *((_DWORD *)v95 + 10);
      v13 = dyld4::BumpAllocator::finalize((dyld4::BumpAllocator *)(v95 + 5));
    }
    _Block_object_dispose(&v84, 8);
    v91 = 0;
    if ( v92 )
      vm_deallocate(mach_task_self_, v92, v93);
    _Block_object_dispose(&v94, 8);
    if ( v99 )
      vm_deallocate(mach_task_self_, v99, v100);
    dyld4::PrebuiltSwift::~PrebuiltSwift((dyld4::PrebuiltSwift *)v102);
    dyld4::PrebuiltObjC::~PrebuiltObjC((dyld4::PrebuiltObjC *)v106);
    return v13;
  }
  v19 = 0;
  v20 = 0;
  v21 = *((__int64 **)a2 + 5);
  v22 = 8 * v18;
  v23 = v21;
  while ( 1 )
  {
    v24 = *v23;
    if ( (*(_WORD *)(*v23 + 4) & 1) == 0 )
    {
      if ( v24 )
        break;
    }
LABEL_23:
    ++v23;
    ++v21;
    v22 -= 8;
    if ( !v22 )
      goto LABEL_26;
  }
  if ( (*(_WORD *)(v24 + 4) & 2) != 0 )
  {
    dyld4::JustInTimeLoader::path((dyld4::JustInTimeLoader *)v24);
    Diagnostics::error(this, "cannot make PrebuiltLoader for dylib that is in dyld cache (%s)");
    return 0;
  }
  if ( (*(_BYTE *)(v24 + 18) & 0x40) == 0 )
  {
    if ( v20 >= v18 )
      dyld4::PrebuiltLoaderSet::makeLaunchSet(v15);
    *(_QWORD *)&v17[8 * v20++] = v24;
    v25 = v19++ | 0x8000;
    *(_WORD *)(v24 + 6) = v25;
    goto LABEL_23;
  }
  dyld4::JustInTimeLoader::path((dyld4::JustInTimeLoader *)v24);
  Diagnostics::error(this, "cannot make PrebuiltLoader for dylib that overrides dylib in dyld cache (%s)");
  return 0;
}
