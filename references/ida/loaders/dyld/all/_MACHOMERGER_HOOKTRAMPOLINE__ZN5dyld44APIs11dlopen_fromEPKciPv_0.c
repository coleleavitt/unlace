__int64 __fastcall MACHOMERGER_HOOKTRAMPOLINE__ZN5dyld44APIs11dlopen_fromEPKciPv_0(
        dyld4::RuntimeState *a1,
        dyld4::Loader *a2,
        int a3,
        void *a4)
{
  char v8; // w24
  __int64 v9; // x21
  dyld4::APIs *v10; // x0
  const char *v11; // x1
  int v12; // w2
  void *v13; // x3
  dyld4 *v14; // x21
  bool v15; // w2
  const char *v16; // x1
  __int64 v17; // x23
  const char *v18; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  __int64 ImageContaining; // x0
  __int64 v22; // x23
  unsigned __int64 StatusReg; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x9
  __int64 v29; // x8
  bool v30; // w2
  __int64 v31; // x0
  const char *v32; // x1
  __int64 v34; // x8
  _BYTE v35[384]; // [xsp+10h] [xbp-320h] BYREF
  __int64 v36; // [xsp+190h] [xbp-1A0h]
  _QWORD v37[8]; // [xsp+1A0h] [xbp-190h] BYREF
  unsigned int *v38; // [xsp+1E0h] [xbp-150h] BYREF
  __int64 *v39; // [xsp+1E8h] [xbp-148h]
  __int64 v40; // [xsp+1F0h] [xbp-140h]
  __int64 v41; // [xsp+1F8h] [xbp-138h]
  unsigned int v42[12]; // [xsp+200h] [xbp-130h] BYREF
  dyld4::Loader *v43; // [xsp+230h] [xbp-100h] BYREF
  __int64 v44; // [xsp+238h] [xbp-F8h] BYREF
  __int64 v45; // [xsp+240h] [xbp-F0h] BYREF
  unsigned __int8 v46; // [xsp+24Fh] [xbp-E1h] BYREF
  int v47; // [xsp+250h] [xbp-E0h] BYREF
  __int64 v48; // [xsp+258h] [xbp-D8h]
  dyld4::Loader *v49; // [xsp+260h] [xbp-D0h]
  __int64 v50; // [xsp+268h] [xbp-C8h]
  __int128 v51; // [xsp+270h] [xbp-C0h]
  __int128 v52; // [xsp+280h] [xbp-B0h]
  __int128 v53; // [xsp+290h] [xbp-A0h]
  __int128 v54; // [xsp+2A0h] [xbp-90h]
  __int128 v55; // [xsp+2B0h] [xbp-80h]
  int v56; // [xsp+2C4h] [xbp-6Ch] BYREF
  dyld4::Loader *v57; // [xsp+2C8h] [xbp-68h] BYREF
  __int64 *v58; // [xsp+2D0h] [xbp-60h] BYREF
  __int64 v59; // [xsp+2D8h] [xbp-58h] BYREF
  lsl::Lock *v60; // [xsp+2E0h] [xbp-50h] BYREF

  v57 = a2;
  v56 = a3;
  v47 = 520617984;
  v48 = 0;
  v49 = a2;
  v50 = a3;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v47);
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 184LL) )
    dyld4::RuntimeState::log(a1, "dlopen(\"%s\", 0x%08X)\n", (const char *)a2, a3);
  dyld4::APIs::clearErrorString(a1);
  v8 = v56;
  v46 = BYTE1(v56) & 1;
  if ( !v57 )
  {
    if ( (v56 & 0x100) != 0 )
      v17 = -5;
    else
      v17 = -2;
    goto LABEL_66;
  }
  v9 = *((_QWORD *)a1 + 82);
  if ( v9 )
  {
    v42[0] = 0;
    v10 = dyld4::ProcessConfig::DyldCache::indexOfPath(
            (DyldSharedCache **)(*((_QWORD *)a1 + 1) + 200LL),
            (const char *)v57,
            v42);
    if ( (_DWORD)v10 )
    {
      if ( *(_DWORD *)(v9 + 12) <= (unsigned int)LOWORD(v42[0]) )
        dyld4::APIs::dlopen_from(v10, v11, v12, v13);
      v14 = (dyld4 *)(v9 + *(unsigned int *)(v9 + *(unsigned int *)(v9 + 16) + 4LL * LOWORD(v42[0])));
      if ( (unsigned int)dyld4::PrebuiltLoader::isInitialized(v14, a1) )
      {
        v17 = dyld4::handleFromLoader(v14, (const dyld4::Loader *)v46, v15);
        if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 184LL) )
        {
          v18 = (const char *)dyld4::Loader::leafName(v57, v16);
          dyld4::RuntimeState::log(a1, "      dlopen(%s) => %p\n", v18, (const void *)v17);
        }
        *((_QWORD *)&v52 + 1) = v17;
        *(_QWORD *)&v53 = 0;
        goto LABEL_66;
      }
    }
    v8 = v56;
  }
  v19 = *((_QWORD *)a1 + 15);
  v20 = *((_QWORD *)a1 + 13) + 24LL;
  if ( v19 && (v8 & 0x10) == 0 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v19 + 104LL))(*((_QWORD *)a1 + 15), v20, 0);
  v45 = 0;
  ImageContaining = dyld4::APIs::findImageContaining(a1, a4);
  v44 = 0;
  v45 = ImageContaining;
  v43 = nullptr;
  __chkstk_darwin();
  v36 = 0;
  memset(v35, 0, sizeof(v35));
  lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v42, v35, 0x188u);
  v38 = v42;
  v39 = nullptr;
  v40 = 0;
  v41 = 0;
  lsl::Vector<dyld4::Loader const*>::reserveExact(&v38, 32);
  v37[0] = a1;
  v37[1] = &v45;
  v37[2] = &v56;
  v37[3] = &v43;
  v37[4] = &v57;
  v37[5] = &v44;
  v37[6] = &v46;
  v37[7] = &v38;
  v22 = *((_QWORD *)a1 + 12);
  if ( *(_BYTE *)(v22 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_71;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_71;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v58 = &v59;
    v59 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_71;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_71;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v24 = MEMORY[0xFFFFFC0D0];
      if ( v24 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_71;
    }
  }
  else if ( !*(_BYTE *)(v22 + 32) )
  {
    v58 = &v59;
    v59 = 1;
    lsl::MemoryManager::lockGuard((__int64 *)&v60, (lsl::MemoryManager *)v22);
    v25 = *(_QWORD *)(v22 + 24);
    if ( !v25 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v22, 0);
      v25 = *(_QWORD *)(v22 + 24);
    }
    *(_QWORD *)(v22 + 24) = v25 + 1;
    lsl::Lock::unlock(v60);
  }
  v26 = *((_QWORD *)a1 + 15);
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 104LL))(v26, *((_QWORD *)a1 + 13), 0);
    dyld4::APIs::dlopen_from(char const*,int,void *)::$_1::operator()(v37);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 15) + 112LL))(
      *((_QWORD *)a1 + 15),
      *((_QWORD *)a1 + 13));
  }
  else
  {
    dyld4::APIs::dlopen_from(char const*,int,void *)::$_1::operator()(v37);
  }
  if ( !*(_BYTE *)(v22 + 33) )
  {
    if ( *(_BYTE *)(v22 + 32) )
      goto LABEL_53;
    if ( v58 == &v59 )
    {
      lsl::MemoryManager::lockGuard((__int64 *)&v60, (lsl::MemoryManager *)v22);
      if ( v59 == 1 )
      {
        v34 = *(_QWORD *)(v22 + 24) - 1LL;
        *(_QWORD *)(v22 + 24) = v34;
        if ( !v34 )
          lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v22, 1);
      }
      else if ( v59 == -1 )
      {
        v29 = *(_QWORD *)(v22 + 24);
        if ( !v29 )
        {
          lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v22, 0);
          v29 = *(_QWORD *)(v22 + 24);
        }
        *(_QWORD *)(v22 + 24) = v29 + 1;
      }
      lsl::Lock::unlock(v60);
      goto LABEL_53;
    }
LABEL_72:
    abort();
  }
  if ( v58 != &v59 )
    goto LABEL_72;
  if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
    goto LABEL_71;
  if ( v59 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
    goto LABEL_53;
  if ( v59 )
  {
    if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v27 = MEMORY[0xFFFFFC0D0];
      v28 = _ReadStatusReg(SPRR_UPERM_EL0);
      goto LABEL_52;
    }
LABEL_71:
    __break(1u);
  }
  if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
    goto LABEL_71;
  _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
  __isb(0xFu);
  v27 = MEMORY[0xFFFFFC0D8];
  v28 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_52:
  if ( v27 != v28 )
    goto LABEL_71;
LABEL_53:
  if ( v43 && (v56 & 0x10) == 0 )
  {
    v58 = v39;
    v59 = v40;
    dyld4::RuntimeState::notifyLoad(a1, &v58);
    dyld4::Loader::runInitializersBottomUpPlusUpwardLinks(v43, a1);
    v44 = dyld4::handleFromLoader(v43, (const dyld4::Loader *)v46, v30);
  }
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 184LL) )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 15) + 64LL))(
            *((_QWORD *)a1 + 15),
            *((_QWORD *)a1 + 101));
    if ( v31 && *(_BYTE *)(v31 + 8) )
    {
      dyld4::Loader::leafName(v57, v32);
      dyld4::RuntimeState::log(a1, "      dlopen(%s) => NULL, '%s'\n");
    }
    else
    {
      dyld4::Loader::leafName(v57, v32);
      dyld4::RuntimeState::log(a1, "      dlopen(%s) => %p\n");
    }
  }
  v17 = v44;
  *((_QWORD *)&v52 + 1) = v44;
  *(_QWORD *)&v53 = 0;
  if ( v39 )
    lsl::Vector<dyld4::Loader const*>::resize(&v38, 0);
  lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v42);
  if ( v19 && (v8 & 0x10) == 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 112LL))(v19, v20);
LABEL_66:
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v47);
  return v17;
}
