void __fastcall dyld4::APIs::dlopen_from(char const*,int,void *)::$_1::operator()(__int64 a1)
{
  dyld4::RuntimeState *v2; // x20
  unsigned __int64 v3; // x25
  unsigned __int64 v4; // x24
  unsigned __int64 v5; // x23
  __int64 v6; // x8
  _QWORD *v7; // x8
  _QWORD *v8; // x9
  _DWORD *v9; // x10
  __int64 v10; // x9
  dyld4::Loader *v11; // x0
  _DWORD *v12; // x8
  __int64 v13; // x9
  __int64 *v14; // x9
  __int64 v15; // x8
  char *v16; // x22
  size_t v17; // x1
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x26
  __int64 v20; // x22
  unsigned __int64 v21; // x10
  dyld4::Loader **v22; // x26
  __int64 v23; // x27
  dyld4::Loader *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x8
  char *v27; // x9
  unsigned __int64 v28; // x8
  __int64 v29; // x17
  unsigned __int64 v30; // x9
  __int64 v31; // x10
  __int64 v32; // x11
  __int64 v33; // x13
  dyld4::Loader **v34; // x27
  __int64 v35; // x28
  const dyld3::MachOAnalyzer *v36; // x22
  unsigned __int64 v37; // x1
  const char *v38; // x22
  int v39; // w21
  const char *v40; // x0
  bool v41; // w2
  __int64 *v42; // x27
  __int64 v43; // x28
  __int64 v44; // t1
  __int64 v45; // x22
  __int64 v46; // x8
  __int64 v47; // x9
  const char *v48; // x22
  int v49; // w26
  const char *v50; // x0
  const dyld4::Loader **v51; // x22
  __int64 v52; // x26
  const dyld4::Loader *v53; // t1
  dyld4::Loader **v54; // x22
  __int64 v55; // x26
  dyld4::Loader *v56; // t1
  _QWORD v57[2]; // [xsp+20h] [xbp-1D0h] BYREF
  __int64 v58; // [xsp+30h] [xbp-1C0h] BYREF
  unsigned __int64 v59; // [xsp+38h] [xbp-1B8h]
  char *v60; // [xsp+40h] [xbp-1B0h] BYREF
  __int128 v61; // [xsp+48h] [xbp-1A8h]
  __int128 v62; // [xsp+58h] [xbp-198h]
  __int128 v63; // [xsp+68h] [xbp-188h]
  __int128 v64; // [xsp+78h] [xbp-178h]
  __int128 v65; // [xsp+88h] [xbp-168h]
  __int128 v66; // [xsp+98h] [xbp-158h]
  __int64 v67; // [xsp+A8h] [xbp-148h]
  _BYTE *v68; // [xsp+B0h] [xbp-140h] BYREF
  __int64 v69; // [xsp+B8h] [xbp-138h]
  unsigned __int64 v70; // [xsp+C0h] [xbp-130h]
  __int64 v71; // [xsp+C8h] [xbp-128h]
  _BYTE v72[56]; // [xsp+D0h] [xbp-120h] BYREF
  __int128 v73; // [xsp+108h] [xbp-E8h] BYREF
  _QWORD *v74; // [xsp+118h] [xbp-D8h]
  __int64 v75; // [xsp+120h] [xbp-D0h]
  __int64 v76; // [xsp+128h] [xbp-C8h]
  _QWORD *v77; // [xsp+130h] [xbp-C0h] BYREF
  __int64 v78; // [xsp+138h] [xbp-B8h]
  __int64 v79; // [xsp+140h] [xbp-B0h] BYREF
  char v80; // [xsp+148h] [xbp-A8h]
  bool v81; // [xsp+149h] [xbp-A7h]
  bool v82; // [xsp+14Ah] [xbp-A6h]
  char v83; // [xsp+14Bh] [xbp-A5h]
  _QWORD *v84; // [xsp+150h] [xbp-A0h]
  __int64 v85; // [xsp+158h] [xbp-98h]
  __int64 v86; // [xsp+160h] [xbp-90h]
  _QWORD v87[2]; // [xsp+168h] [xbp-88h] BYREF
  _QWORD v88[2]; // [xsp+178h] [xbp-78h] BYREF
  vm_address_t v89; // [xsp+188h] [xbp-68h] BYREF

  v2 = *(dyld4::RuntimeState **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 272LL);
  Diagnostics::Diagnostics((Diagnostics *)&v89);
  v6 = *((_QWORD *)v2 + 3);
  v88[0] = 0;
  v88[1] = v6;
  v7 = v88;
  v87[0] = v88;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_DWORD **)(a1 + 16);
  v87[1] = *v8;
  v86 = 0;
  v79 = 0;
  LODWORD(v9) = *v9;
  *(_DWORD *)((char *)&v79 + 3) = ((unsigned __int8)v9 & 4) != 0;
  WORD2(v79) = ((unsigned __int8)v9 & 0x80) != 0;
  BYTE5(v79) = ((unsigned __int8)v9 & 0x10) != 0;
  HIBYTE(v79) = 1;
  v80 = 1;
  v81 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 68LL) == 1;
  v82 = (int)v9 < 0;
  v10 = *v8;
  if ( v10 )
  {
    LODWORD(v10) = HIBYTE(*(unsigned __int16 *)(v10 + 4)) & 1;
    v7 = v87;
  }
  v83 = v10;
  v84 = v7;
  v85 = 0;
  **(_QWORD **)(a1 + 24) = dyld4::Loader::getLoader((Diagnostics *)&v89, (__int64)v2, **(const char ***)(a1 + 32), &v79);
  v11 = **(dyld4::Loader ***)(a1 + 24);
  if ( v11 )
  {
    if ( (**(_BYTE **)(a1 + 16) & 4) == 0 && (unsigned int)dyld4::Loader::hiddenFromFlat(v11, 0) )
      dyld4::Loader::hiddenFromFlat(**(dyld4::Loader ***)(a1 + 24), 1);
    v12 = *(_DWORD **)(a1 + 16);
    if ( (*v12 & 0x10) != 0 )
    {
      dyld4::RuntimeState::incDlRefCount((__int64)v2, **(const dyld4::Loader ***)(a1 + 24));
      **(_QWORD **)(a1 + 40) = dyld4::handleFromLoader(
                                 **(dyld4 ***)(a1 + 24),
                                 (const dyld4::Loader *)**(unsigned __int8 **)(a1 + 48),
                                 v41);
    }
    else
    {
      if ( (*v12 & 0x80) != 0 )
      {
        v13 = **(_QWORD **)(a1 + 24);
        if ( (*(_WORD *)(v13 + 4) & 0x63) == 0 )
        {
          *(_QWORD *)(v13 + 16) |= 0x200000uLL;
          v12 = *(_DWORD **)(a1 + 16);
        }
      }
      v77 = v84;
      v78 = 0;
      v14 = *(__int64 **)(a1 + 24);
      v78 = *v14;
      *(_QWORD *)&v73 = 256;
      DWORD2(v73) = 0;
      v75 = 0;
      v76 = 0;
      v74 = nullptr;
      BYTE4(v73) = *(_BYTE *)v12 >> 7;
      BYTE7(v73) = 1;
      BYTE11(v73) = *(_BYTE *)(*v14 + 5) & 1;
      v74 = &v77;
      dyld4::Loader::loadDependents(*v14, (Diagnostics *)&v89, v2, &v73);
      __chkstk_darwin();
      v16 = (char *)v57 - v15;
      __bzero((char *)v57 - v15, v17);
      lsl::EphemeralAllocator::EphemeralAllocator(
        (lsl::EphemeralAllocator *)v72,
        v16,
        136 - v3 + 8LL * *((_QWORD *)v2 + 6));
      v68 = v72;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      lsl::Vector<dyld4::Loader const*>::reserveExact((__int64)&v68, *((_QWORD *)v2 + 6) - v3);
      if ( v3 != *((_QWORD *)v2 + 6) )
      {
        v18 = v70;
        v19 = v3;
        do
        {
          v20 = *(_QWORD *)(*((_QWORD *)v2 + 5) + 8 * v19);
          lsl::Vector<dyld4::Loader const*>::reserve((__int64)&v68, v18 + 1);
          v21 = v70;
          v18 = ++v70;
          *(_QWORD *)(v69 + 8 * v21) = v20;
          ++v19;
        }
        while ( v19 != *((_QWORD *)v2 + 6) );
      }
      if ( Diagnostics::noError((Diagnostics *)&v89) && v70 )
      {
        v60 = (char *)v69;
        *(_QWORD *)&v61 = v70;
        dyld4::RuntimeState::notifyDebuggerLoad((__int64)v2, (__int64)&v60);
        if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 160LL) )
        {
          v60 = (char *)v69;
          *(_QWORD *)&v61 = v70;
          dyld4::Loader::addWeakDefsToMap(v2, (__int64)&v60);
        }
        LODWORD(v60) = 520552460;
        v61 = 0u;
        v62 = 0u;
        v63 = 0u;
        v64 = 0u;
        v65 = 0u;
        v66 = 0u;
        v67 = 0;
        dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v60);
        dyld4::DyldCacheDataConstLazyScopedWriter::DyldCacheDataConstLazyScopedWriter((__int64)&v58, v2);
        if ( v70 )
        {
          v22 = (dyld4::Loader **)v69;
          v23 = 8 * v70;
          do
          {
            v24 = *v22;
            dyld4::Loader::applyFixups(*v22, (Diagnostics *)&v89, v2, (dyld4::DyldCacheDataConstLazyScopedWriter *)&v58);
            if ( Diagnostics::hasError((Diagnostics *)&v89) )
              break;
            dyld4::Loader::applyCachePatches(v24, v2, (dyld4::DyldCacheDataConstLazyScopedWriter *)&v58);
            ++v22;
            v23 -= 8;
          }
          while ( v23 );
        }
        dyld4::DyldCacheDataConstLazyScopedWriter::~DyldCacheDataConstLazyScopedWriter((dyld4::DyldCacheDataConstLazyScopedWriter *)&v58);
        dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v60);
        if ( Diagnostics::noError((Diagnostics *)&v89) )
        {
          v25 = __chkstk_darwin();
          v27 = (char *)v57 - ((v26 + 23) & 0xFFFFFFFFFFFFFFF0LL);
          v28 = v70;
          v60 = v27;
          v61 = v70;
          v57[1] = v29;
          if ( v70 )
          {
            v30 = 0;
            v31 = v69;
            v32 = 8 * v70;
            do
            {
              v33 = *(_QWORD *)v31;
              if ( (*(_WORD *)(*(_QWORD *)v31 + 4LL) & 0x22) == 0x20 )
              {
                if ( v30 >= v28 )
                  dyld4::APIs::dlopen_from(char const*,int,void *)::$_1::operator()(v25);
                *((_QWORD *)&v61 + 1) = v30 + 1;
                *(_QWORD *)&v60[8 * v30++] = v33;
              }
              v31 += 8;
              v32 -= 8;
            }
            while ( v32 );
            if ( v30 )
            {
              dyld4::RuntimeState::addPermanentRanges((__int64)v2);
              v28 = v70;
            }
          }
          v58 = v69;
          v59 = v28;
          dyld4::RuntimeState::notifyDtrace((__int64)v2, (__int64)&v58);
          v58 = v69;
          v59 = v70;
          dyld4::RuntimeState::rebindMissingFlatLazySymbols((__int64)v2, (__int64)&v58);
          if ( v70 )
          {
            v34 = (dyld4::Loader **)v69;
            v35 = 8 * v70;
            do
            {
              v36 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(*v34, v2);
              if ( (unsigned int)dyld3::MachOFile::hasThreadLocalVariables(v36) )
                dyld4::RuntimeState::setUpTLVs(v2, v36);
              ++v34;
              v35 -= 8;
            }
            while ( v35 );
            v37 = v70;
          }
          else
          {
            v37 = 0;
          }
          lsl::Vector<dyld4::Loader const*>::reserve(*(_QWORD *)(a1 + 56), v37);
          if ( v70 )
          {
            v42 = (__int64 *)v69;
            v43 = 8 * v70;
            do
            {
              v44 = *v42++;
              v45 = *(_QWORD *)(a1 + 56);
              lsl::Vector<dyld4::Loader const*>::reserve(v45, *(_QWORD *)(v45 + 16) + 1LL);
              v46 = *(_QWORD *)(v45 + 8);
              v47 = *(_QWORD *)(v45 + 16);
              *(_QWORD *)(v45 + 16) = v47 + 1;
              *(_QWORD *)(v46 + 8 * v47) = v44;
              v43 -= 8;
            }
            while ( v43 );
          }
        }
      }
      if ( Diagnostics::noError((Diagnostics *)&v89) )
        dyld4::RuntimeState::incDlRefCount((__int64)v2, **(const dyld4::Loader ***)(a1 + 24));
      if ( Diagnostics::hasError((Diagnostics *)&v89) )
      {
        v48 = **(const char ***)(a1 + 32);
        v49 = **(_DWORD **)(a1 + 16);
        v50 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v89);
        dyld4::APIs::setErrorString((__int64)v2, "dlopen(%s, 0x%04X): %s", v48, v49, v50);
        v60 = (char *)v69;
        *(_QWORD *)&v61 = v70;
        dyld4::RuntimeState::removeMissingFlatLazySymbols((__int64)v2, (__int64)&v60);
        if ( *((_QWORD *)v2 + 38) && v70 )
        {
          v51 = (const dyld4::Loader **)v69;
          v52 = 8 * v70;
          do
          {
            v53 = *v51++;
            dyld4::RuntimeState::removeDynamicDependencies(v2, v53);
            v52 -= 8;
          }
          while ( v52 );
        }
        v60 = (char *)v69;
        *(_QWORD *)&v61 = v70;
        dyld4::RuntimeState::notifyDebuggerUnload(v2, (__int64 *)&v60);
        if ( v70 )
        {
          v54 = (dyld4::Loader **)v69;
          v55 = 8 * v70;
          do
          {
            v56 = *v54++;
            dyld4::Loader::unmap(v56, v2, 1);
            v55 -= 8;
          }
          while ( v55 );
        }
        if ( *((_QWORD *)v2 + 6) > v3 )
          *((_QWORD *)v2 + 6) = v3;
        **(_QWORD **)(a1 + 40) = 0;
        **(_QWORD **)(a1 + 24) = 0;
        *((_QWORD *)v2 + 30) = 0;
        if ( *((_QWORD *)v2 + 26) > v4 )
          *((_QWORD *)v2 + 26) = v4;
        if ( *((_QWORD *)v2 + 34) > v5 )
          *((_QWORD *)v2 + 34) = v5;
      }
      if ( **(_QWORD **)(a1 + 24) && (**(_BYTE **)(a1 + 16) & 0x10) == 0 && Diagnostics::noError((Diagnostics *)&v89) )
      {
        dyld4::RuntimeState::doSingletonPatching(v2);
        dyld4::RuntimeState::notifyObjCPatching(v2);
      }
      if ( v69 )
        lsl::Vector<dyld4::Loader const*>::resize(&v68, 0);
      lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v72);
    }
  }
  else
  {
    v38 = **(const char ***)(a1 + 32);
    v39 = **(_DWORD **)(a1 + 16);
    v40 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v89);
    dyld4::APIs::setErrorString((__int64)v2, "dlopen(%s, 0x%04X): %s", v38, v39, v40);
  }
  Diagnostics::~Diagnostics(&v89);
}
