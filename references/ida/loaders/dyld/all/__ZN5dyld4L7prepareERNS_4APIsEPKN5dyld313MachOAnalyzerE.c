__int64 (__fastcall *__fastcall dyld4::prepare(
        dyld4 *this,
        dyld4::APIs *a2,
        const dyld3::MachOAnalyzer *a3))(dyld4 *__hidden this, int, const char *const *, const char *const *, const char *const *)
{
  _DWORD *v5; // x8
  __int64 v6; // x9
  int v7; // w0
  unsigned __int64 v8; // x8
  __int64 v9; // x8
  const char **v10; // x9
  const char *v11; // x8
  const char **v12; // x21
  const char *v13; // t1
  __int64 v14; // x8
  const dyld4::Loader *LaunchLoader; // x23
  const mach_o::Layout *v16; // x5
  _BOOL4 v17; // w25
  const dyld_uuid_info *v18; // x2
  __int64 v19; // x9
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x11
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  _QWORD *v28; // x21
  __int64 v29; // x24
  __int64 v30; // x26
  size_t v31; // x24
  __int64 v32; // x8
  char *v33; // x25
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 *v36; // x21
  __int64 v37; // x25
  __int64 *v38; // x28
  __int64 v39; // t1
  __int64 v40; // x10
  __int64 v41; // x8
  char *v42; // x9
  unsigned __int64 v43; // x8
  unsigned __int64 v44; // x10
  __int64 *v45; // x9
  __int64 v46; // x11
  __int64 *v47; // x12
  __int64 v48; // x16
  __int64 v49; // x0
  size_t v50; // x24
  __int64 v51; // x8
  char *v52; // x25
  __int64 v53; // x9
  __int64 v54; // x8
  __int64 *v55; // x21
  __int64 v56; // x25
  __int64 *v57; // x26
  __int64 v58; // t1
  __int64 v59; // x10
  dyld4::DyldCacheDataConstLazyScopedWriter *v60; // x2
  __int64 v61; // x8
  dyld4::Loader **v62; // x25
  __int64 v63; // x27
  dyld4::Loader **v64; // x28
  dyld4::Loader *v65; // x24
  dyld4::RuntimeState *v66; // x1
  __int64 v67; // x0
  stat *v68; // x2
  int v69; // w0
  const mach_header *v70; // x6
  fsobj_id v71; // x4
  const unsigned __int8 *v72; // x3
  __int64 v73; // x8
  dyld4::Loader **v74; // x28
  __int64 v75; // x27
  dyld4::Loader **v76; // x25
  dyld4::Loader *v77; // x23
  fsid Address; // x22
  dyld3 *v79; // x0
  stat *v80; // x2
  unsigned int v81; // w21
  const unsigned __int8 *v82; // x24
  unsigned int v83; // w0
  const mach_header *v84; // x6
  __int64 v85; // x26
  const mach_header **v86; // x23
  __int64 v87; // x12
  char *v88; // x24
  __int64 v89; // x21
  __int64 v90; // x22
  __int64 v91; // x27
  dyld4::Loader *v92; // x25
  __int64 v93; // x0
  const char **v94; // x4
  const char *v95; // x1
  dyld4::Loader *v96; // x0
  dyld3::MachOLoaded *v97; // x23
  __int64 SectionContent; // x0
  const char *v99; // x1
  _BOOL4 v100; // w21
  __int64 v101; // x8
  const dyld4::MissingPaths *v102; // x3
  __int64 LaunchSet; // x0
  const dyld4::PrebuiltLoaderSet *v104; // x23
  const char *v105; // x1
  const char *v106; // x0
  dyld4 *v107; // x0
  unsigned int v108; // w1
  const char *v109; // x1
  __int64 v110; // x8
  __int64 (__fastcall *v111)(dyld4 *__hidden, int, const char *const *, const char *const *, const char *const *); // x23
  dyld4::BumpAllocator *v112; // x20
  __int64 (__fastcall *v114)(dyld4 *__hidden, int, const char *const *, const char *const *, const char *const *); // x17
  const char *v115; // x1
  __int64 v116; // x23
  size_t v117; // x21
  __int64 v118; // x8
  char *v119; // x22
  __int64 v120; // x8
  vm_address_t *v121; // x0
  __int64 v122; // x21
  __int64 v123; // x10
  dyld4 *v124; // x0
  const char *v125; // x1
  const char *v126; // x0
  __int64 v127; // [xsp+10h] [xbp-380h] BYREF
  unsigned __int64 v128; // [xsp+18h] [xbp-378h]
  dyld4::BumpAllocator *v129; // [xsp+20h] [xbp-370h]
  __int64 *v130; // [xsp+28h] [xbp-368h]
  _BOOL4 v131; // [xsp+34h] [xbp-35Ch]
  _QWORD v132[6]; // [xsp+38h] [xbp-358h] BYREF
  char *v133; // [xsp+68h] [xbp-328h] BYREF
  unsigned __int64 v134; // [xsp+70h] [xbp-320h]
  unsigned __int64 v135; // [xsp+78h] [xbp-318h]
  vm_address_t v136; // [xsp+80h] [xbp-310h] BYREF
  __int64 v137; // [xsp+88h] [xbp-308h]
  vm_address_t v138; // [xsp+90h] [xbp-300h] BYREF
  _QWORD v139[5]; // [xsp+98h] [xbp-2F8h] BYREF
  __int64 v140; // [xsp+C0h] [xbp-2D0h] BYREF
  __int64 *v141; // [xsp+C8h] [xbp-2C8h]
  __int64 v142; // [xsp+D0h] [xbp-2C0h]
  __int64 (__fastcall *v143)(); // [xsp+D8h] [xbp-2B8h]
  __int64 (__fastcall *v144)(); // [xsp+E0h] [xbp-2B0h]
  _BYTE v145[24]; // [xsp+E8h] [xbp-2A8h] BYREF
  _QWORD v146[6]; // [xsp+100h] [xbp-290h] BYREF
  __int128 v147; // [xsp+130h] [xbp-260h]
  __int128 v148; // [xsp+140h] [xbp-250h]
  __int64 v149; // [xsp+150h] [xbp-240h]
  __int128 v150; // [xsp+158h] [xbp-238h] BYREF
  _QWORD *v151; // [xsp+168h] [xbp-228h]
  __int64 v152; // [xsp+170h] [xbp-220h]
  _QWORD *v153; // [xsp+178h] [xbp-218h]
  _QWORD v154[2]; // [xsp+180h] [xbp-210h] BYREF
  __int64 v155; // [xsp+190h] [xbp-200h] BYREF
  __int64 *v156; // [xsp+198h] [xbp-1F8h]
  __int64 v157; // [xsp+1A0h] [xbp-1F0h]
  __int64 (__fastcall *v158)(); // [xsp+1A8h] [xbp-1E8h]
  __int64 (__fastcall *v159)(); // [xsp+1B0h] [xbp-1E0h]
  _QWORD v160[2]; // [xsp+1B8h] [xbp-1D8h] BYREF
  __int64 v161; // [xsp+1C8h] [xbp-1C8h]
  vm_address_t v162; // [xsp+1D0h] [xbp-1C0h]
  vm_size_t v163; // [xsp+1D8h] [xbp-1B8h]
  dyld4::APIs *v164; // [xsp+1E0h] [xbp-1B0h] BYREF
  __int128 v165; // [xsp+1E8h] [xbp-1A8h] BYREF
  __int128 v166; // [xsp+1F8h] [xbp-198h]
  __int128 v167; // [xsp+208h] [xbp-188h]
  __int128 v168; // [xsp+218h] [xbp-178h]
  __int128 v169; // [xsp+228h] [xbp-168h]
  __int128 v170; // [xsp+238h] [xbp-158h]
  __int64 v171; // [xsp+248h] [xbp-148h]
  dyld4::APIs **v172; // [xsp+270h] [xbp-120h] BYREF
  vm_address_t v173; // [xsp+278h] [xbp-118h]
  __int64 v174; // [xsp+280h] [xbp-110h]
  __int64 v175; // [xsp+288h] [xbp-108h]
  char v176; // [xsp+290h] [xbp-100h] BYREF

  v5 = gProcessInfo;
  *((_QWORD *)gProcessInfo + 8) = 0;
  v6 = *((_QWORD *)this + 1);
  v5[80] = *(_DWORD *)(v6 + 68);
  *((_QWORD *)v5 + 24) = *(_QWORD *)(v6 + 72);
  v7 = dyld3::kdebug_trace_dyld_enabled((dyld3 *)0x1F070004, (unsigned int)a2);
  v8 = 0;
  if ( v7 )
    v8 = dyld3::kdebug_trace_dyld_duration_start(520552452, *(_QWORD *)(*((_QWORD *)this + 1) + 8LL), 0, 0, 0, 0, 0);
  v128 = v8;
  v9 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v9 + 189) )
  {
    v10 = *(const char ***)(v9 + 112);
    v11 = *v10;
    if ( *v10 )
    {
      v12 = v10 + 1;
      do
      {
        dyld4::RuntimeState::log(this, "%s\n", v11);
        v13 = *v12++;
        v11 = v13;
      }
      while ( v13 );
    }
  }
  dyld4::RuntimeState::initializeClosureMode(this);
  v14 = *((_QWORD *)this + 85);
  if ( v14 )
  {
    if ( !*(_DWORD *)(v14 + 12) )
      __assert_rtn("atIndex", "PrebuiltLoader.h", 321, "loaderIndex < loadersArrayCount");
    LaunchLoader = (const dyld4::Loader *)(v14 + *(unsigned int *)(v14 + *(unsigned int *)(v14 + 16)));
    lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserve(
      (char *)this + 32,
      *((unsigned int *)this + 177));
  }
  else
  {
    if ( *((_QWORD *)this + 7) <= 0xFFFu )
      lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserveExact((char *)this + 32, 512);
    Diagnostics::Diagnostics((Diagnostics *)&v164);
    LaunchLoader = (const dyld4::Loader *)dyld4::JustInTimeLoader::makeLaunchLoader(
                                            (dyld4::JustInTimeLoader *)&v164,
                                            this,
                                            *(dyld4::RuntimeState **)(*((_QWORD *)this + 1) + 8LL),
                                            *(const dyld3::MachOAnalyzer **)(*((_QWORD *)this + 1) + 16LL),
                                            nullptr,
                                            v16);
    if ( Diagnostics::hasError((Diagnostics *)&v164) )
    {
      v126 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v164);
      dyld4::RuntimeState::log(this, "%s in %s\n", v126, *(const char **)(*((_QWORD *)this + 1) + 16LL));
      v121 = (vm_address_t *)&v164;
      goto LABEL_123;
    }
    Diagnostics::~Diagnostics((vm_address_t *)&v164);
  }
  dyld4::RuntimeState::setMainLoader(this, LaunchLoader);
  dyld4::RuntimeState::notifyDebuggerLoad(this, LaunchLoader);
  if ( (*((_WORD *)LaunchLoader + 2) & 1) != 0 )
  {
    v17 = 0;
  }
  else if ( *((_BYTE *)this + 704) )
  {
    v17 = 1;
  }
  else
  {
    v17 = *((_BYTE *)this + 705) != 0;
  }
  if ( (dyld3::MachOFile::inDyldCache(a2) & 1) == 0 )
  {
    v164 = a2;
    dyld3::MachOFile::getUuid(a2, (unsigned __int8 *)&v165);
    dyld4::addNonSharedCacheImageUUID(*((dyld4 **)this + 2), (lsl::Allocator *)&v164, v18);
  }
  v155 = 0;
  v156 = &v155;
  v157 = 0x5002000000LL;
  v158 = __Block_byref_object_copy__22;
  v159 = __Block_byref_object_dispose__23;
  v160[0] = &v176;
  v160[1] = 16;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  dyld3::OverflowSafeArray<dyld4::Loader *,4294967295ul>::verifySpace(v160, 1);
  v19 = v161++;
  *(_QWORD *)(v160[0] + 8 * v19) = LaunchLoader;
  v154[0] = 0;
  v154[1] = LaunchLoader;
  *(_QWORD *)&v150 = 0x101000000000101LL;
  DWORD2(v150) = 0;
  v152 = 0;
  v153 = nullptr;
  v151 = v154;
  v20 = *((_QWORD *)this + 1) + 344LL;
  v146[0] = _NSConcreteStackBlock;
  v146[1] = 0x40000000;
  v146[2] = ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke;
  v146[3] = &unk_94C48;
  v149 = 0;
  v147 = v150;
  v148 = (unsigned __int64)v154;
  v146[4] = &v155;
  v146[5] = this;
  dyld4::ProcessConfig::PathOverrides::forEachInsertedDylib(v20, v146);
  if ( v156[7] != 1 )
  {
    v21 = *((_QWORD *)this + 6);
    if ( v21 != 1 )
    {
      v22 = *((_QWORD *)this + 5);
      v23 = (_QWORD *)(v22 + 8);
      v24 = 8 * v21 - 8;
      do
      {
        *(v23 - 1) = *v23;
        *v23++ = 0;
        v22 += 8;
        v24 -= 8;
      }
      while ( v24 );
    }
    *((_QWORD *)this + 6) = v21 - 1;
    v164 = LaunchLoader;
    lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserve((char *)this + 32, v21);
    v25 = *((_QWORD *)this + 5);
    v26 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v26 + 1;
    *(_QWORD *)(v25 + 8 * v26) = v164;
  }
  v140 = 0;
  v141 = &v140;
  v142 = 0x4002000000LL;
  v143 = __Block_byref_object_copy__27;
  v144 = __Block_byref_object_dispose__28;
  memset(v145, 0, sizeof(v145));
  v139[0] = _NSConcreteStackBlock;
  v139[1] = 0x40000000;
  v139[2] = ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke_29;
  v139[3] = &unk_94C70;
  v139[4] = &v140;
  Diagnostics::Diagnostics((Diagnostics *)&v138);
  BYTE6(v150) = 0;
  if ( v17 )
    v153 = v139;
  v27 = v156[7];
  v131 = v17;
  if ( v27 )
  {
    v28 = (_QWORD *)v156[5];
    v29 = 8 * v27;
    while ( 1 )
    {
      dyld4::Loader::loadDependents(*v28, &v138, this, &v150);
      if ( Diagnostics::hasError((Diagnostics *)&v138) )
        break;
      ++v28;
      v29 -= 8;
      if ( !v29 )
      {
        v30 = v156[7];
        goto LABEL_34;
      }
    }
    v116 = v156[7];
    v117 = 8LL * *((_QWORD *)this + 6) - v116 + 136;
    __chkstk_darwin();
    v119 = (char *)&v127 - v118;
    __bzero((char *)&v127 - v118, v117);
    lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)&v164, v119, v117);
    v172 = &v164;
    v173 = 0;
    v175 = 0;
    v174 = 0;
    lsl::Vector<dyld4::Loader const*>::reserveExact(&v172, *((_QWORD *)this + 6) - v116);
    if ( v116 == *((_QWORD *)this + 6) )
    {
      v120 = v174;
    }
    else
    {
      v120 = v174;
      do
      {
        v122 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v116);
        lsl::Vector<dyld4::Loader const*>::reserve(&v172, v120 + 1);
        v123 = v174;
        v120 = ++v174;
        *(_QWORD *)(v173 + 8 * v123) = v122;
        ++v116;
      }
      while ( v116 != *((_QWORD *)this + 6) );
    }
    v133 = (char *)v173;
    v134 = v120;
    dyld4::RuntimeState::notifyDebuggerLoad(this, &v133);
    *((_QWORD *)gProcessInfo + 8) = 1;
    v121 = &v138;
LABEL_123:
    v124 = (dyld4 *)Diagnostics::errorMessage((Diagnostics *)v121);
    dyld4::halt(v124, v125);
  }
  v30 = 0;
LABEL_34:
  v31 = 8LL * *((_QWORD *)this + 6) + 136;
  __chkstk_darwin();
  v33 = (char *)&v127 - ((v32 + 151) & 0xFFFFFFFFFFFFFFF0LL);
  __bzero(v33, v31);
  lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)&v164, v33, v31);
  v172 = &v164;
  v173 = 0;
  v175 = 0;
  v174 = 0;
  lsl::Vector<dyld4::Loader const*>::reserveExact(&v172, *((_QWORD *)this + 6));
  v34 = *((_QWORD *)this + 6);
  v35 = v174;
  if ( v34 )
  {
    v36 = *((__int64 **)this + 5);
    v37 = 8 * v34;
    v38 = v36;
    do
    {
      v39 = *v38++;
      lsl::Vector<dyld4::Loader const*>::reserve(&v172, v35 + 1);
      v40 = v174;
      v35 = ++v174;
      *(_QWORD *)(v173 + 8 * v40) = v39;
      ++v36;
      v37 -= 8;
    }
    while ( v37 );
  }
  v133 = (char *)(v173 + 8 * v30);
  v134 = v35 - v30;
  dyld4::RuntimeState::notifyDebuggerLoad(this, &v133);
  v136 = v173;
  v137 = v174;
  dyld4::RuntimeState::notifyDtrace(this, &v136);
  if ( v173 )
    lsl::Vector<dyld4::Loader const*>::resize(&v172, 0);
  lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)&v164);
  *((_QWORD *)gProcessInfo + 14) = *((_QWORD *)this + 6);
  __chkstk_darwin();
  v42 = (char *)&v127 - ((v41 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v43 = *((_QWORD *)this + 6);
  v133 = v42;
  v134 = v43;
  v135 = 0;
  if ( v43 )
  {
    v44 = 0;
    v45 = *((__int64 **)this + 5);
    v46 = 8 * v43;
    v47 = v45;
    do
    {
      v48 = *v47;
      if ( (*(_WORD *)(*v47 + 4) & 2) == 0 )
      {
        if ( v44 >= v43 )
LABEL_114:
          __assert_rtn("push_back", "Array.h", 62, "_usedCount < _allocCount");
        v135 = v44 + 1;
        *(_QWORD *)&v133[8 * v44++] = v48;
      }
      ++v47;
      ++v45;
      v46 -= 8;
    }
    while ( v46 );
  }
  dyld4::RuntimeState::addPermanentRanges(this, &v133);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 160LL) )
  {
    v49 = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), 0x60u);
    *((_QWORD *)this + 38) = dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::Map(v49);
    v50 = 8LL * *((_QWORD *)this + 6) + 136;
    __chkstk_darwin();
    v52 = (char *)&v127 - ((v51 + 151) & 0xFFFFFFFFFFFFFFF0LL);
    __bzero(v52, v50);
    lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)&v164, v52, v50);
    v172 = &v164;
    v173 = 0;
    v175 = 0;
    v174 = 0;
    lsl::Vector<dyld4::Loader const*>::reserveExact(&v172, *((_QWORD *)this + 6));
    v53 = *((_QWORD *)this + 6);
    v54 = v174;
    if ( v53 )
    {
      v55 = *((__int64 **)this + 5);
      v56 = 8 * v53;
      v57 = v55;
      do
      {
        v58 = *v57++;
        lsl::Vector<dyld4::Loader const*>::reserve(&v172, v54 + 1);
        v59 = v174;
        v54 = ++v174;
        *(_QWORD *)(v173 + 8 * v59) = v58;
        ++v55;
        v56 -= 8;
      }
      while ( v56 );
    }
    v136 = v173;
    v137 = v54;
    dyld4::Loader::addWeakDefsToMap(this);
    if ( v173 )
      lsl::Vector<dyld4::Loader const*>::resize(&v172, 0);
    lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)&v164);
  }
  v130 = &v127;
  dyld4::RuntimeState::buildInterposingTables(this);
  LODWORD(v164) = 520552460;
  v165 = 0u;
  v166 = 0u;
  v167 = 0u;
  v168 = 0u;
  v169 = 0u;
  v170 = 0u;
  v171 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v164);
  dyld4::DyldCacheDataConstLazyScopedWriter::DyldCacheDataConstLazyScopedWriter(
    (dyld4::DyldCacheDataConstLazyScopedWriter *)&v172,
    this);
  if ( (*((_WORD *)LaunchLoader + 2) & 1) == 0 )
    dyld4::JustInTimeLoader::handleStrongWeakDefOverrides(this, (dyld4::RuntimeState *)&v172, v60);
  v61 = *((_QWORD *)this + 6);
  if ( v61 )
  {
    v62 = *((dyld4::Loader ***)this + 5);
    v63 = 8 * v61;
    v64 = v62;
    while ( 1 )
    {
      v65 = *v64;
      Diagnostics::Diagnostics((Diagnostics *)&v136);
      dyld4::Loader::applyFixups(v65, (Diagnostics *)&v136, this, (dyld4::DyldCacheDataConstLazyScopedWriter *)&v172, 1);
      if ( Diagnostics::hasError((Diagnostics *)&v136) )
        break;
      dyld4::Loader::applyCachePatches(v65, this, (dyld4::DyldCacheDataConstLazyScopedWriter *)&v172);
      Diagnostics::~Diagnostics(&v136);
      ++v64;
      ++v62;
      v63 -= 8;
      if ( !v63 )
        goto LABEL_58;
    }
    v121 = &v136;
    goto LABEL_123;
  }
LABEL_58:
  dyld4::RuntimeState::doSingletonPatching(this);
  dyld4::DyldCacheDataConstLazyScopedWriter::~DyldCacheDataConstLazyScopedWriter((dyld4::DyldCacheDataConstLazyScopedWriter *)&v172);
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v164);
  if ( *((_QWORD *)this + 18) )
    dyld4::Loader::applyInterposingToDyldCache(this, v66);
  if ( (*((_WORD *)LaunchLoader + 2) & 1) != 0 )
  {
    dyld4::DyldCacheDataConstLazyScopedWriter::DyldCacheDataConstLazyScopedWriter(
      (dyld4::DyldCacheDataConstLazyScopedWriter *)&v164,
      this);
    v67 = *((_QWORD *)this + 85);
    v132[0] = _NSConcreteStackBlock;
    v132[1] = 0x40000000;
    v132[2] = ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke_2;
    v132[3] = &__block_descriptor_tmp_36;
    v132[4] = this;
    v132[5] = &v164;
    dyld4::PrebuiltLoaderSet::forEachCachePatch(v67, v132);
    dyld4::DyldCacheDataConstLazyScopedWriter::~DyldCacheDataConstLazyScopedWriter((dyld4::DyldCacheDataConstLazyScopedWriter *)&v164);
  }
  if ( kdebug_is_enabled(0x1F050000u) )
  {
    if ( (dyld3::MachOFile::inDyldCache(a2) & 1) == 0 )
    {
      v173 = 0;
      v172 = nullptr;
      dyld3::MachOFile::getUuid(a2, (unsigned __int8 *)&v172);
      v69 = dyld3::stat(*(dyld3 **)(*((_QWORD *)this + 1) + 72LL), (const char *)&v164, v68);
      if ( v69 )
        v71 = 0;
      else
        v71 = (fsobj_id)(unsigned int)v164;
      if ( v69 )
        v72 = nullptr;
      else
        v72 = (const unsigned __int8 *)v165;
      dyld3::kdebug_trace_dyld_image(
        nullptr,
        *(_QWORD *)(*((_QWORD *)this + 1) + 72LL),
        (const char *)&v172,
        (const unsigned __int8 (*)[16])v72,
        v71,
        (fsid)a2,
        v70);
    }
    v73 = *((_QWORD *)this + 6);
    if ( !v73 )
LABEL_115:
      __assert_rtn("operator[]", "Array.h", 54, "idx < _usedCount");
    v74 = *((dyld4::Loader ***)this + 5);
    v75 = 8 * v73;
    v76 = v74;
    do
    {
      v77 = *v76;
      Address = (fsid)dyld4::Loader::loadAddress(*v76, this);
      if ( (*((_WORD *)v77 + 2) & 2) != 0
        || (v79 = (dyld3 *)dyld4::Loader::path(v77), (unsigned int)dyld3::stat(v79, (const char *)&v164, v80)) )
      {
        v81 = 0;
        v82 = nullptr;
      }
      else
      {
        v82 = (const unsigned __int8 *)v165;
        v81 = (unsigned int)v164;
      }
      v173 = 0;
      v172 = nullptr;
      dyld3::MachOFile::getUuid(*(dyld3::MachOFile **)&Address, (unsigned __int8 *)&v172);
      v83 = dyld4::Loader::path(v77);
      dyld3::kdebug_trace_dyld_image(
        nullptr,
        v83,
        (const char *)&v172,
        (const unsigned __int8 (*)[16])v82,
        (fsobj_id)v81,
        Address,
        v84);
      ++v76;
      ++v74;
      v75 -= 8;
    }
    while ( v75 );
  }
  v85 = *((_QWORD *)this + 6);
  __chkstk_darwin();
  v86 = (const mach_header **)((char *)&v127 - ((8 * v85 + 23) & 0xFFFFFFFFFFFFFFF0LL));
  __chkstk_darwin();
  v88 = (char *)&v127 - v87;
  if ( !v85 )
    goto LABEL_115;
  v89 = 0;
  v129 = (dyld4::BumpAllocator *)v145;
  v90 = *((_QWORD *)this + 5);
  v91 = v85;
  do
  {
    v92 = *(dyld4::Loader **)(v90 + v89 * 8);
    v93 = dyld4::Loader::path(v92);
    if ( !v91 )
      goto LABEL_114;
    v86[v89] = (const mach_header *)v93;
    *(_QWORD *)&v88[v89 * 8] = dyld4::Loader::loadAddress(v92, this);
    ++v89;
    --v91;
  }
  while ( v85 != v89 );
  dyld4::notifyMonitoringDyld(nullptr, *((_DWORD *)this + 12), (unsigned int)v88, v86, v94);
  v96 = *((dyld4::Loader **)this + 9);
  if ( !v96 )
    dyld4::halt((dyld4 *)"libdyld.dylib not found", v95);
  v97 = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(v96, this);
  v164 = nullptr;
  SectionContent = dyld3::MachOLoaded::findSectionContent(v97, "__DATA", "__dyld4", (unsigned __int64 *)&v164, 1);
  v100 = v131;
  if ( !SectionContent )
  {
    SectionContent = dyld3::MachOLoaded::findSectionContent(v97, "__AUTH", "__dyld4", (unsigned __int64 *)&v164, 1);
    if ( !SectionContent )
      dyld4::halt((dyld4 *)"compatible libdyld.dylib not found", v99);
  }
  *(_QWORD *)SectionContent = this;
  *(_QWORD *)(SectionContent + 8) = gProcessInfo;
  v101 = *((_QWORD *)this + 1);
  *(_QWORD *)(SectionContent + 16) = *(_QWORD *)(v101 + 8);
  *((_QWORD *)this + 14) = SectionContent + 16;
  **(_DWORD **)(SectionContent + 24) = *(_DWORD *)(v101 + 96);
  **(_QWORD **)(SectionContent + 32) = *(_QWORD *)(v101 + 104);
  **(_QWORD **)(*((_QWORD *)this + 14) + 24LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 112LL);
  **(_QWORD **)(*((_QWORD *)this + 14) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 128LL);
  if ( !*((_QWORD *)this + 8) )
    dyld4::halt((dyld4 *)"program does not link with libSystem.B.dylib", v99);
  if ( v100 )
  {
    LODWORD(v164) = 520552468;
    v165 = 0u;
    v166 = 0u;
    v167 = 0u;
    v168 = 0u;
    v169 = 0u;
    v170 = 0u;
    v171 = 0;
    dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v164);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      dyld4::RuntimeState::log(this, "building PrebuiltLoaderSet for main executable\n");
    Diagnostics::Diagnostics((Diagnostics *)&v172);
    LaunchSet = dyld4::PrebuiltLoaderSet::makeLaunchSet(
                  (dyld4::PrebuiltLoaderSet *)&v172,
                  this,
                  (dyld4::RuntimeState *)(v141 + 5),
                  v102);
    if ( LaunchSet && (v104 = (const dyld4::PrebuiltLoaderSet *)LaunchSet, Diagnostics::noError((Diagnostics *)&v172)) )
    {
      if ( *((_BYTE *)this + 705) )
        dyld4::halt((dyld4 *)"dyld: PrebuiltLoaderSet expected but not found", v105);
      if ( (unsigned int)dyld4::RuntimeState::saveAppPrebuiltLoaderSet(this, v104) )
        *((_BYTE *)this + 823) = 1;
      dyld4::PrebuiltLoaderSet::deallocate((vm_address_t)v104);
      v168 = xmmword_7BB60;
    }
    else if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
    {
      v106 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v172);
      dyld4::RuntimeState::log(this, "could not build PrebuiltLoaderSet: %s\n", v106);
    }
    Diagnostics::~Diagnostics((vm_address_t *)&v172);
    dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v164);
  }
  if ( dyld4::ProcessConfig::Process::environ(
         (dyld4::ProcessConfig::Process *)(*((_QWORD *)this + 1) + 8LL),
         "DYLD_JUST_BUILD_CLOSURE") )
  {
    goto LABEL_103;
  }
  dyld4::notifyMonitoringDyldBeforeInitializers(nullptr);
  v107 = (dyld4 *)(*(__int64 (__fastcall **)(dyld4 *))(*(_QWORD *)this + 856LL))(this);
  dyld4::notifyMonitoringDyldMain(v107);
  if ( (unsigned int)dyld3::kdebug_trace_dyld_enabled((dyld3 *)0x1F070004, v108) )
    dyld3::kdebug_trace_dyld_duration_end(v128, 520552452, 0, 0, 0, 0, 4, 0);
  v110 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v110 + 177) )
  {
LABEL_103:
    v111 = dyld4::fake_main;
  }
  else
  {
    if ( *(_DWORD *)(v110 + 68) == 10 )
    {
      v114 = *((__int64 (__fastcall **)(dyld4 *__hidden, int, const char *const *, const char *const *, const char *const *))this
             + 90);
      if ( !v114 )
        dyld4::halt((dyld4 *)"DriverKit main entry point not set", v109);
    }
    else
    {
      v164 = nullptr;
      LOBYTE(v172) = 0;
      if ( (dyld3::MachOFile::getEntry(*(dyld3::MachOFile **)(v110 + 8), (unsigned __int64 *)&v164, (bool *)&v172) & 1) == 0 )
        dyld4::halt((dyld4 *)"main executable has no entry point", v115);
      if ( (_BYTE)v172 )
        dyld4::halt((dyld4 *)"main executable is missing LC_MAIN", v115);
      v114 = (__int64 (__fastcall *)(dyld4 *__hidden, int, const char *const *, const char *const *, const char *const *))((char *)v164 + *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
    }
    v111 = v114;
  }
  v112 = v129;
  Diagnostics::~Diagnostics(&v138);
  _Block_object_dispose(&v140, 8);
  dyld4::BumpAllocator::~BumpAllocator(v112);
  _Block_object_dispose(&v155, 8);
  v161 = 0;
  if ( v162 )
    vm_deallocate(mach_task_self_, v162, v163);
  return v111;
}
