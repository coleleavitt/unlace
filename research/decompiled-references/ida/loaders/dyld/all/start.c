void __fastcall __noreturn start(
        dyld4::KernelArgs *a1,
        dyld3::MachOLoaded *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 Slide; // x21
  __int64 Apple; // x0
  __int64 v12; // x0
  fsid v13; // x21
  char v14; // w25
  void *v15; // x22
  int v16; // w8
  void (__fastcall *v17)(__int64, __int64, __int128 *); // x8
  int Envp; // w0
  DyldSharedCache *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  int v24; // w0
  const char *v25; // x0
  const unsigned __int8 *v26; // x4
  void *v27; // x3
  void (__fastcall *v28)(__int64, __int64, __int128 *); // x8
  stat *v29; // x2
  int v30; // w0
  const mach_header *v31; // x6
  const unsigned __int8 *v32; // x3
  fsobj_id v33; // x4
  const char **v34; // x4
  const char **v35; // x4
  const mach_header *v36; // x6
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x20
  __int64 v40; // x21
  void *v41; // x0
  size_t v42; // x1
  int v43; // w0
  __int64 v44; // x8
  unsigned __int64 StatusReg; // x9
  __int64 v46; // x8
  lsl::Allocator *v47; // x20
  dyld4::ProcessConfig *v48; // x21
  __int64 v49; // x0
  _QWORD *v50; // x0
  const dyld3::MachOAnalyzer *v51; // x2
  __int64 (__fastcall *v52)(_QWORD, _QWORD, _QWORD, _QWORD); // x19
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x9
  __int64 v56; // x0
  __int64 v57; // x8
  unsigned __int64 v58; // x9
  _QWORD v59[5]; // [xsp+18h] [xbp-258h] BYREF
  _QWORD v60[7]; // [xsp+40h] [xbp-230h] BYREF
  dyld3::MachOFile *v61; // [xsp+78h] [xbp-1F8h] BYREF
  void *v62; // [xsp+80h] [xbp-1F0h] BYREF
  __int64 v63; // [xsp+88h] [xbp-1E8h] BYREF
  DyldSharedCache *v64[2]; // [xsp+90h] [xbp-1E0h] BYREF
  __int128 v65; // [xsp+A0h] [xbp-1D0h]
  __int128 *v66; // [xsp+B0h] [xbp-1C0h]
  __int64 v67; // [xsp+B8h] [xbp-1B8h]
  char v68; // [xsp+C0h] [xbp-1B0h]
  __int128 v69; // [xsp+D0h] [xbp-1A0h] BYREF
  __int128 v70; // [xsp+E0h] [xbp-190h]
  __int64 (__fastcall *v71)(); // [xsp+F0h] [xbp-180h]
  __int128 *v72; // [xsp+F8h] [xbp-178h]
  __int128 v73; // [xsp+100h] [xbp-170h]
  __int128 v74; // [xsp+110h] [xbp-160h] BYREF
  __int64 v75; // [xsp+120h] [xbp-150h]
  __int64 (__fastcall *v76)(); // [xsp+128h] [xbp-148h]
  unsigned __int64 *v77; // [xsp+130h] [xbp-140h]
  vm_address_t v78[28]; // [xsp+138h] [xbp-138h] BYREF
  unsigned __int64 v79; // [xsp+218h] [xbp-58h] BYREF

  dyld3::kdebug_trace_dyld_marker(520552500, 0, 0, 0, 0, 0, 0, a8, 0, 0);
  v61 = (dyld3::MachOFile *)&dword_0;
  Slide = dyld3::MachOLoaded::getSlide((dyld3::MachOLoaded *)&dword_0);
  if ( (dyld3::MachOFile::inDyldCache((dyld3::MachOFile *)&dword_0) & 1) == 0 )
  {
    if ( (dyld3::MachOFile::hasChainedFixups((dyld3::MachOFile *)&dword_0) & 1) == 0 )
      goto LABEL_74;
    *(_QWORD *)&v74 = 0;
    *((_QWORD *)&v74 + 1) = &v74;
    v75 = 0x3002000000LL;
    v76 = __Block_byref_object_copy_;
    v77 = (unsigned __int64 *)__Block_byref_object_dispose_;
    Diagnostics::Diagnostics((Diagnostics *)v78);
    v60[0] = _NSConcreteStackBlock;
    v60[1] = 0x40000000;
    v60[2] = ___start_block_invoke;
    v60[3] = &unk_94BB8;
    v60[4] = &v74;
    v60[5] = v61;
    v60[6] = Slide;
    dyld3::MachOAnalyzer::withChainStarts(v61, (Diagnostics *)(*((_QWORD *)&v74 + 1) + 40LL), 0, (__int64)v60);
    Diagnostics::assertNoError((Diagnostics *)(*((_QWORD *)&v74 + 1) + 40LL));
    v59[0] = _NSConcreteStackBlock;
    v59[1] = 0x40000000;
    v59[2] = ___start_block_invoke_2;
    v59[3] = &__block_descriptor_tmp_4;
    v59[4] = Slide;
    dyld3::MachOFile::forEachSegment(v61, (__int64)v59);
    _Block_object_dispose(&v74, 8);
    Diagnostics::~Diagnostics(v78);
  }
  mach_init();
  Apple = dyld4::KernelArgs::findApple(a1);
  __guard_setup(Apple);
  v12 = dyld4::KernelArgs::findApple(a1);
  _subsystem_init(v12);
  v13 = (fsid)v61;
  if ( (unsigned int)dyld3::MachOFile::inDyldCache(v61) )
  {
    mach_port_mod_refs(mach_task_self_, mach_task_self_, 0, -1);
    v62 = nullptr;
    v79 = 0;
    v14 = 0;
    if ( (unsigned int)dyld4::SyscallDelegate::kernelDyldImageInfoAddress(
                         (dyld4::SyscallDelegate *)&dyld4::sSyscallDelegate,
                         &v62,
                         &v79) )
    {
      v15 = v62;
      if ( (unsigned int)proc_set_dyld_all_image_info(gProcessInfo, 368) )
      {
        gProcessInfo = v15;
        v28 = *((void (__fastcall **)(__int64, __int64, __int128 *))v15 + 2);
        *((fsid *)v15 + 4) = v13;
        *((_QWORD *)v15 + 24) = "/usr/lib/dyld";
        *((_QWORD *)v15 + 2) = lldb_image_notifier;
        *((_QWORD *)v15 + 6) = "cache";
        *(fsid *)&v74 = v13;
        *((_QWORD *)&v74 + 1) = "/usr/lib/dyld";
        v75 = 0;
        v28(3, 1, &v74);
        v14 = 0;
      }
      else
      {
        v16 = *((_DWORD *)v15 + 50);
        if ( v16 )
          *(_DWORD *)&stru_B8.segname[(_QWORD)gProcessInfo] = v16;
        v17 = *((void (__fastcall **)(__int64, __int64, __int128 *))v15 + 2);
        *(fsid *)&v74 = v13;
        *((_QWORD *)&v74 + 1) = "/usr/lib/dyld";
        v75 = 0;
        v14 = 1;
        v17(3, 1, &v74);
      }
    }
    if ( kdebug_is_enabled(0x1F050014u) )
    {
      v69 = 0u;
      dyld3::MachOFile::getUuid(*(dyld3::MachOFile **)&v13, (unsigned __int8 *)&v69);
      v30 = dyld3::stat((dyld3 *)"/usr/lib/dyld", (const char *)&v74, v29);
      if ( v30 )
        v32 = nullptr;
      else
        v32 = *((const unsigned __int8 **)&v74 + 1);
      if ( v30 )
        v33 = 0;
      else
        v33 = (fsobj_id)(unsigned int)v74;
      dyld3::kdebug_trace_dyld_image(
        (dyld3 *)((char *)&dword_4 + 1),
        (unsigned int)"/usr/lib/dyld",
        (const char *)&v69,
        (const unsigned __int8 (*)[16])v32,
        v33,
        (fsid)a2,
        v31);
    }
    atomic_store(mach_absolute_time(), (unsigned __int64 *)gProcessInfo + 23);
    *(_QWORD *)&v74 = "/usr/lib/dyld";
    *(_QWORD *)&v69 = a2;
    dyld4::notifyMonitoringDyld((dyld4 *)((char *)&dword_0 + 1), 1, (unsigned int)&v69, (const mach_header **)&v74, v34);
    if ( kdebug_is_enabled(0x1F050000u) )
    {
      v74 = 0u;
      dyld3::MachOFile::getUuid(*(dyld3::MachOFile **)&v13, (unsigned __int8 *)&v74);
      dyld3::kdebug_trace_dyld_image(nullptr, (unsigned int)"/usr/lib/dyld", (const char *)&v74, nullptr, 0, v13, v36);
    }
    *(_QWORD *)&v74 = "/usr/lib/dyld";
    *(fsid *)&v69 = v13;
    dyld4::notifyMonitoringDyld(nullptr, 1, (unsigned int)&v69, (const mach_header **)&v74, v35);
    *(_QWORD *)&v69 = 0;
    *((_QWORD *)&v69 + 1) = &v69;
    *(_QWORD *)&v70 = 0x4002000000LL;
    *((_QWORD *)&v70 + 1) = __Block_byref_object_copy__8;
    v71 = __Block_byref_object_dispose__9;
    v72 = &v74;
    v73 = xmmword_7BB50;
    v37 = dyld3::MachOLoaded::getSlide(a2);
    v64[0] = (DyldSharedCache *)_NSConcreteStackBlock;
    v64[1] = (DyldSharedCache *)0x40000000;
    *(_QWORD *)&v65 = ___ZN5dyld4L17handleDyldInCacheEPKN5dyld39MachOFileEPKNS_10KernelArgsES3__block_invoke;
    *((_QWORD *)&v65 + 1) = &unk_94C00;
    v68 = v14;
    v66 = &v69;
    v67 = v37;
    dyld3::MachOFile::forEachSegment(a2, (__int64)v64);
    v38 = *(_QWORD *)(*((_QWORD *)&v69 + 1) + 56LL);
    if ( v38 )
    {
      v39 = *(_QWORD *)(*((_QWORD *)&v69 + 1) + 40LL);
      v40 = v39 + 16 * v38;
      do
      {
        v41 = *(void **)v39;
        v42 = *(_QWORD *)(v39 + 8);
        v39 += 16;
        munmap(v41, v42);
      }
      while ( v39 != v40 );
    }
    _Block_object_dispose(&v69, 8);
  }
  else
  {
    Envp = dyld4::KernelArgs::findEnvp(a1);
    if ( !_simple_getenv(Envp, "DYLD_SHARED_REGION") )
    {
      v74 = 0u;
      if ( dyld3::MachOFile::getUuid(*(dyld3::MachOFile **)&v13, (unsigned __int8 *)&v74) )
      {
        v64[0] = nullptr;
        v62 = nullptr;
        v79 = 0;
        if ( (unsigned int)dyld4::SyscallDelegate::hasExistingDyldCache(
                             (dyld4::SyscallDelegate *)&dyld4::sSyscallDelegate,
                             (unsigned __int64 *)v64,
                             (unsigned __int64 *)&v62,
                             &v79) )
        {
          v19 = v64[0];
          v20 = DyldSharedCache::slide(v64[0]);
          v21 = *((_QWORD *)v19 + 15);
          if ( v21 )
          {
            v22 = v20;
            v23 = v21 + v20;
            v69 = 0u;
            if ( dyld3::MachOFile::getUuid((dyld3::MachOFile *)(v21 + v20), (unsigned __int8 *)&v69) && v74 == v69 )
            {
              v24 = dyld4::KernelArgs::findEnvp(a1);
              v25 = (const char *)_simple_getenv(v24, "DYLD_IN_CACHE");
              if ( !v25 || _platform_strcmp(v25, "0") )
              {
                *(_QWORD *)((char *)&stru_20.cmd + (_QWORD)gProcessInfo) = v23;
                dyld3::kdebug_trace_dyld_cache(
                  (dyld3 *)v79,
                  v62,
                  (unsigned __int64)v64[0],
                  (unsigned __int64)v19 + 88,
                  v26);
                dyld4::restartWithDyldInCache(
                  a1,
                  *(const dyld4::KernelArgs **)&v13,
                  (const dyld3::MachOFile *)(*((_QWORD *)v19 + 16) + v22),
                  v27);
              }
            }
          }
        }
      }
    }
  }
  v71 = nullptr;
  v69 = 0u;
  v70 = 0u;
  v79 = 0;
  v43 = dyld4::KernelArgs::findApple(a1);
  *(_OWORD *)v64 = 0u;
  v65 = 0u;
  LOWORD(v66) = 0;
  if ( _simple_getenv(v43, "dyld_hw_tpro") )
  {
    BYTE1(v66) = 1;
  }
  else if ( !BYTE1(v66) )
  {
    if ( !(_BYTE)v66 )
    {
      v62 = &v63;
      v63 = 1;
      lsl::MemoryManager::lockGuard((__int64 *)&v74, (lsl::MemoryManager *)v64);
      v44 = *((_QWORD *)&v65 + 1);
      if ( !*((_QWORD *)&v65 + 1) )
      {
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v64, 0);
        v44 = *((_QWORD *)&v65 + 1);
      }
      *((_QWORD *)&v65 + 1) = v44 + 1;
      lsl::Lock::unlock((lsl::Lock *)v74);
    }
    goto LABEL_47;
  }
  if ( !MEMORY[0xFFFFFC10C]
    || (MEMORY[0xFFFFFC10C] & 0xFE) != 2
    || (StatusReg = _ReadStatusReg(SPRR_UPERM_EL0),
        v62 = &v63,
        v63 = (StatusReg >> 36) & 1,
        (StatusReg & 0x1000000000LL) == 0)
    && (!MEMORY[0xFFFFFC10C]
     || (MEMORY[0xFFFFFC10C] & 0xFE) != 2
     || (_WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]),
         __isb(0xFu),
         v46 = MEMORY[0xFFFFFC0D0],
         v46 != _ReadStatusReg(SPRR_UPERM_EL0))) )
  {
LABEL_73:
    __break(1u);
LABEL_74:
    __assert_rtn("start", "dyldMain.cpp", 1065, "dyldMA->hasChainedFixups()");
  }
LABEL_47:
  v47 = (lsl::Allocator *)lsl::Allocator::persistentAllocator(v64);
  v48 = (dyld4::ProcessConfig *)lsl::Allocator::aligned_alloc(v47, 8u, 0x1E8u);
  dyld4::ProcessConfig::ProcessConfig(v48, a1, (dyld4::SyscallDelegate *)&dyld4::sSyscallDelegate, v47);
  v49 = lsl::Allocator::aligned_alloc(v47, 8u, 0x350u);
  v50 = (_QWORD *)dyld4::RuntimeState::RuntimeState(v49, v48, v47, &v69);
  *v50 = &off_941F0;
  v79 = (unsigned __int64)v50;
  *(_QWORD *)&v74 = _NSConcreteStackBlock;
  *((_QWORD *)&v74 + 1) = 0x40000000;
  v75 = (__int64)___ZZN5dyld45startEPKNS_10KernelArgsEPvENK3__0clEv_block_invoke;
  v76 = (__int64 (__fastcall *)())&__block_descriptor_tmp_19;
  v77 = &v79;
  v78[0] = (vm_address_t)v48;
  v78[1] = (vm_address_t)&v61;
  dyld4::RuntimeState::withCurrentProcessSnapshot();
  v52 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))dyld4::prepare((dyld4 *)v79, v61, v51);
  if ( !BYTE1(v66) )
  {
    if ( (_BYTE)v66 )
    {
      while ( 1 )
      {
LABEL_64:
        v56 = v52(
                *(unsigned int *)(*(_QWORD *)(v79 + 8) + 96LL),
                *(_QWORD *)(*(_QWORD *)(v79 + 8) + 104LL),
                *(_QWORD *)(*(_QWORD *)(v79 + 8) + 112LL),
                *(_QWORD *)(*(_QWORD *)(v79 + 8) + 120LL));
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v79 + 120) + 120LL))(*(_QWORD *)(v79 + 120), v56);
LABEL_65:
        if ( v55 )
        {
          if ( !*(_BYTE *)v54 || (*(_BYTE *)v54 & 0xFE) != 2 )
            goto LABEL_73;
          _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
          __isb(0xFu);
          v57 = MEMORY[0xFFFFFC0D0];
          v58 = _ReadStatusReg(SPRR_UPERM_EL0);
        }
        else
        {
          if ( !*(_BYTE *)v54 || (*(_BYTE *)v54 & 0xFE) != 2 )
            goto LABEL_73;
          _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
          __isb(0xFu);
          v57 = MEMORY[0xFFFFFC0D8];
          v58 = _ReadStatusReg(SPRR_UPERM_EL0);
        }
        if ( v57 != v58 )
          goto LABEL_73;
      }
    }
    if ( v62 == &v63 )
    {
      lsl::MemoryManager::lockGuard((__int64 *)&v74, (lsl::MemoryManager *)v64);
      if ( v63 == 1 )
      {
        if ( !--*((_QWORD *)&v65 + 1) )
          lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v64, 1);
      }
      else if ( v63 == -1 )
      {
        v53 = *((_QWORD *)&v65 + 1);
        if ( !*((_QWORD *)&v65 + 1) )
        {
          lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v64, 0);
          v53 = *((_QWORD *)&v65 + 1);
        }
        *((_QWORD *)&v65 + 1) = v53 + 1;
      }
      lsl::Lock::unlock((lsl::Lock *)v74);
      goto LABEL_64;
    }
LABEL_60:
    abort();
  }
  if ( v62 != &v63 )
    goto LABEL_60;
  v54 = 0xFFFFFC10CLL;
  if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
  {
    v55 = v63;
    if ( v63 != ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      goto LABEL_65;
    goto LABEL_64;
  }
  goto LABEL_73;
}
