void __fastcall dyld4::PrebuiltLoader::serialize(
        Diagnostics *a1,
        dyld4::RuntimeState *a2,
        const dyld4::Loader *a3,
        __int16 a4,
        __int64 a5,
        dyld4::PrebuiltObjC *a6,
        int a7,
        dyld4::BumpAllocator *this)
{
  __int64 v13; // x25
  __int64 v14; // x23
  dyld3::MachOFile *v15; // x24
  __int16 FixupsLoadCommandFileOffset; // w0
  __int64 v17; // x8
  __int64 v18; // x9
  const char *v19; // x27
  unsigned __int64 v20; // x22
  __int64 v21; // x23
  char *v22; // x22
  __int64 v23; // x24
  unsigned __int64 v24; // x23
  __int16 v25; // w8
  unsigned int v26; // w22
  __int64 v27; // x8
  __int64 v28; // x9
  unsigned __int16 v29; // w24
  unsigned __int64 v30; // x28
  __int64 v31; // x8
  char *v32; // x23
  __int64 v33; // x22
  char v34; // w27
  __int64 v35; // x25
  __int64 v36; // x0
  bool v37; // w8
  __int64 v38; // x8
  __int64 v39; // x9
  unsigned __int16 v40; // w22
  dyld3::MachOFile *v41; // x23
  __int64 v42; // x9
  __int64 v43; // x22
  _OWORD *v44; // x8
  __int128 v45; // q0
  __int128 v46; // q1
  __int128 v47; // q3
  __int64 v48; // x0
  int v49; // w8
  __int16 v51; // w8
  int v52; // w22
  __int16 v53; // w8
  __int64 v54; // x28
  __int64 v55; // x8
  __int64 v56; // x8
  dyld4::Loader **v57; // x23
  __int64 v58; // x25
  dyld4::Loader **v59; // x26
  dyld4::Loader *v60; // x22
  __int64 v61; // x8
  const char *v62; // x22
  dyld4::Loader **v63; // x25
  __int64 v64; // x26
  dyld4::Loader **v65; // x27
  dyld4::Loader *v66; // x23
  __int64 v67; // x9
  __int64 v68; // x22
  __int64 v69; // x8
  __int64 v70; // x9
  Diagnostics *v71; // x23
  unsigned __int64 v72; // x10
  __int64 hasError; // x0
  __int64 v74; // x8
  __int64 v75; // x25
  __int64 v76; // x8
  __int64 v77; // x9
  const void *v78; // x22
  size_t v79; // x23
  int v80; // w0
  int v81; // w8
  __int64 v82; // x9
  __int64 *v83; // x21
  __int64 v84; // x23
  __int64 *v85; // x8
  unsigned __int64 v86; // x22
  __int64 v87; // t1
  __int64 v88; // [xsp+0h] [xbp-5D0h] BYREF
  __int64 v89; // [xsp+8h] [xbp-5C8h]
  __int64 v90; // [xsp+10h] [xbp-5C0h]
  const char *v91; // [xsp+18h] [xbp-5B8h]
  dyld4::PrebuiltObjC *v92; // [xsp+20h] [xbp-5B0h]
  Diagnostics *v93; // [xsp+28h] [xbp-5A8h]
  dyld3::MachOFile *v94; // [xsp+30h] [xbp-5A0h]
  dyld4::RuntimeState *v95; // [xsp+38h] [xbp-598h]
  __int16 v96; // [xsp+46h] [xbp-58Ah] BYREF
  _QWORD v97[15]; // [xsp+48h] [xbp-588h] BYREF
  __int64 v98; // [xsp+C0h] [xbp-510h] BYREF
  __int64 *v99; // [xsp+C8h] [xbp-508h]
  __int64 v100; // [xsp+D0h] [xbp-500h]
  __int64 (__fastcall *v101)(); // [xsp+D8h] [xbp-4F8h]
  __int64 (__fastcall *v102)(); // [xsp+E0h] [xbp-4F0h]
  __int128 *v103; // [xsp+E8h] [xbp-4E8h]
  __int64 v104; // [xsp+F0h] [xbp-4E0h]
  __int64 v105; // [xsp+F8h] [xbp-4D8h]
  vm_address_t v106; // [xsp+100h] [xbp-4D0h]
  vm_size_t v107; // [xsp+108h] [xbp-4C8h]
  _QWORD v108[8]; // [xsp+110h] [xbp-4C0h] BYREF
  __int128 v109; // [xsp+150h] [xbp-480h] BYREF
  __int128 v110; // [xsp+160h] [xbp-470h]
  __int128 v111; // [xsp+170h] [xbp-460h]
  __int128 v112; // [xsp+180h] [xbp-450h]

  v92 = a6;
  v90 = a5;
  v13 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  dyld4::BumpAllocator::zeroFill(this, 0x50u);
  v14 = *(_QWORD *)this + v13;
  dyld4::Loader::InitialOptions::InitialOptions((dyld4::Loader::InitialOptions *)&v109, a3);
  dyld4::Loader::Loader(v14, (const dyld4::Loader::InitialOptions *)&v109, 1, 0, 0);
  *(_WORD *)(*(_QWORD *)this + v13 + 6) = a4;
  v95 = a2;
  v15 = (dyld3::MachOFile *)dyld4::JustInTimeLoader::mf(a3, a2);
  FixupsLoadCommandFileOffset = dyld3::MachOFile::getFixupsLoadCommandFileOffset(v15);
  v17 = *(_QWORD *)this;
  v18 = *(_QWORD *)this + v13;
  *(_WORD *)(v18 + 14) = FixupsLoadCommandFileOffset;
  *(_WORD *)(v18 + 8) = *((_DWORD *)this + 4) - (v13 + v17);
  v19 = (const char *)dyld4::JustInTimeLoader::path(a3);
  v20 = _platform_strlen(v19) + 1;
  v21 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  dyld4::BumpAllocator::zeroFill(this, v20);
  _platform_memmove((void *)(*(_QWORD *)this + v21), v19, v20);
  *(_WORD *)(*(_QWORD *)this + v13 + 16) = 0;
  v22 = dyld3::MachOFile::installName(v15);
  v94 = v15;
  if ( dyld3::MachOFile::isDylib(v15) && _platform_strcmp(v22, v19) )
  {
    v23 = *((_QWORD *)this + 2) - *(_QWORD *)this;
    *(_WORD *)(*(_QWORD *)this + v13 + 16) = v23 - v13;
    v24 = _platform_strlen(v22) + 1;
    dyld4::BumpAllocator::zeroFill(this, v24);
    _platform_memmove((void *)(*(_QWORD *)this + v23), v22, v24);
  }
  if ( (*((_WORD *)a3 + 2) & 2) != 0 )
  {
    if ( dyld4::ProcessConfig::DyldCache::isOverridablePath(
           (dyld4::ProcessConfig::DyldCache *)(*((_QWORD *)v95 + 1) + 200LL),
           v19) )
    {
      v25 = 2;
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    v25 = 0;
  }
  *(_WORD *)(*(_QWORD *)this + v13 + 20) = *(_WORD *)(*(_QWORD *)this + v13 + 20) & 0xFFFD | v25;
  v26 = dyld4::JustInTimeLoader::dependentCount(a3);
  v27 = *(_QWORD *)this;
  *(_WORD *)(*(_QWORD *)this + v13 + 24) = v26;
  v28 = *((_QWORD *)this + 2);
  v91 = v19;
  if ( (((_BYTE)v28 - (_BYTE)v27) & 1) != 0 )
  {
    dyld4::BumpAllocator::zeroFill(this, 2LL - (((_BYTE)v28 - (_BYTE)v27) & 1));
    v28 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)this;
  }
  v29 = v28 - (v13 + v27);
  *(_WORD *)(v27 + v13 + 10) = v29;
  v30 = v26;
  dyld4::BumpAllocator::zeroFill(this, 2LL * v26);
  __chkstk_darwin();
  v32 = (char *)&v88 - ((v31 + 15) & 0x1FFFFFFF0LL);
  v93 = a1;
  if ( v26 )
  {
    v33 = 0;
    v34 = 0;
    v89 = v13;
    v35 = v13 + v29;
    do
    {
      v36 = dyld4::JustInTimeLoader::dependent(a3, (int)v95, v33, &v32[v33]);
      v37 = v32[v33] != 0;
      if ( v36 )
      {
        *(_WORD *)(*(_QWORD *)this + v35 + 2 * v33) = *(_WORD *)(v36 + 6);
      }
      else
      {
        if ( v32[v33] != 1 )
          dyld4::PrebuiltLoader::serialize();
        *(_WORD *)(*(_QWORD *)this + v35 + 2 * v33) = 0x7FFF;
      }
      v34 |= v37;
      ++v33;
    }
    while ( v30 != v33 );
    v38 = *(_QWORD *)this;
    v13 = v89;
    v39 = *(_QWORD *)this + v89;
    *(_WORD *)(v39 + 12) = 0;
    a1 = v93;
    if ( (v34 & 1) != 0 )
    {
      v40 = *((_QWORD *)this + 2) - (v13 + v38);
      *(_WORD *)(v39 + 12) = v40;
      dyld4::BumpAllocator::zeroFill(this, v30);
      _platform_memmove((void *)(*(_QWORD *)this + v13 + v40), v32, v30);
      v38 = *(_QWORD *)this;
    }
  }
  else
  {
    v38 = *(_QWORD *)this;
    *(_WORD *)(*(_QWORD *)this + v13 + 12) = 0;
  }
  dyld4::JustInTimeLoader::getExportsTrie(a3, (unsigned __int64 *)(v38 + v13 + 40), (unsigned int *)(v38 + v13 + 48));
  v41 = v94;
  *(_WORD *)(*(_QWORD *)this + v13 + 20) = *(_WORD *)(*(_QWORD *)this + v13 + 20) & 0xFFFE
                                         | dyld3::MachOFile::hasInitializer(v94, a1);
  if ( !Diagnostics::hasError(a1) )
  {
    *(_QWORD *)(*(_QWORD *)this + v13 + 56) = 0;
    if ( (*((_BYTE *)a3 + 4) & 2) == 0 )
    {
      LODWORD(v109) = 0;
      LODWORD(v98) = 0;
      if ( (unsigned int)dyld3::MachOFile::hasCodeSignature(v41, (unsigned int *)&v109, (unsigned int *)&v98) )
      {
        v42 = *(_QWORD *)this + v13;
        *(_DWORD *)(v42 + 56) = v109;
        *(_DWORD *)(v42 + 60) = v98;
      }
      if ( (*((_WORD *)a3 + 2) & 2) == 0 )
        goto LABEL_27;
    }
    if ( *(_BYTE *)(*((_QWORD *)v95 + 1) + 341LL) )
    {
LABEL_27:
      if ( (((unsigned __int8)*((_DWORD *)this + 4) - (unsigned __int8)*(_DWORD *)this) & 7) != 0 )
        dyld4::BumpAllocator::zeroFill(
          this,
          8LL - (((unsigned __int8)*((_DWORD *)this + 4) - (unsigned __int8)*(_DWORD *)this) & 7));
      v111 = 0u;
      v112 = 0u;
      v109 = 0u;
      v110 = 0u;
      dyld4::JustInTimeLoader::getFileValidationInfo(a3, (dyld4::RuntimeState *)((char *)v95 + 336), &v109);
      v43 = *((_QWORD *)this + 2) - *(_QWORD *)this;
      *(_WORD *)(*(_QWORD *)this + v13 + 18) = v43 - v13;
      if ( (unsigned __int64)(v43 - v13) >= 0x10000 )
        dyld4::PrebuiltLoader::serialize();
      dyld4::BumpAllocator::zeroFill(this, 0x40u);
      v44 = (_OWORD *)(*(_QWORD *)this + v43);
      v45 = v109;
      v46 = v110;
      v47 = v112;
      v44[2] = v111;
      v44[3] = v47;
      *v44 = v45;
      v44[1] = v46;
    }
    *(_DWORD *)(*(_QWORD *)this + v13 + 52) = dyld3::MachOFile::mappedSize(v41);
    v108[0] = _NSConcreteStackBlock;
    v108[1] = 0x40000000;
    v108[2] = &___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke;
    v108[3] = &__block_descriptor_tmp_46;
    v108[4] = this;
    v108[5] = v13;
    v108[6] = this;
    v108[7] = v13;
    dyld4::JustInTimeLoader::withRegions(v41, (__int64)v108);
    v49 = *(_DWORD *)(*((_QWORD *)v95 + 1) + 64LL);
    v51 = v49 == 1 || v49 == 6;
    v52 = *(_DWORD *)&v51 & (*((unsigned __int16 *)a3 + 2) >> 1);
    if ( v52 == 1 )
    {
      v48 = dyld3::MachOFile::builtForPlatform(v41, 6, 0);
      if ( (_DWORD)v48 )
        v53 = 4;
      else
        v53 = 0;
    }
    else
    {
      v53 = 0;
    }
    *(_WORD *)(*(_QWORD *)this + v13 + 20) = *(_WORD *)(*(_QWORD *)this + v13 + 20) & 0xFFFB | v53;
    *(_WORD *)(*(_QWORD *)this + v13 + 20) &= ~8u;
    v54 = v13;
    v55 = *(_QWORD *)this + v13;
    *(_DWORD *)(v55 + 36) = 0xFFFF;
    if ( v52 )
    {
      if ( (*(_WORD *)(v55 + 20) & 4) != 0 )
      {
        v48 = _platform_strncmp(v91, "/System/iOSSupport/", 0x13u);
        if ( !(_DWORD)v48 )
        {
          v61 = *((_QWORD *)v95 + 6);
          if ( v61 )
          {
            v62 = v91 + 18;
            v63 = *((dyld4::Loader ***)v95 + 5);
            v64 = 8 * v61;
            v65 = v63;
            while ( 1 )
            {
              v66 = *v65;
              v48 = dyld4::Loader::matchesPath(*v65, v62);
              if ( (_DWORD)v48 )
                break;
              ++v65;
              ++v63;
              v64 -= 8;
              if ( !v64 )
                goto LABEL_57;
            }
            v67 = *(_QWORD *)this + v54;
            *(_WORD *)(v67 + 36) = *((_WORD *)v66 + 3) & 0x7FFF;
            *(_WORD *)(v67 + 20) |= 8u;
          }
        }
      }
      else
      {
        strlcpy((char *)&v109, "/System/iOSSupport", 0x400u);
        v48 = strlcat((char *)&v109, v91, 0x400u);
        v56 = *((_QWORD *)v95 + 6);
        if ( v56 )
        {
          v57 = *((dyld4::Loader ***)v95 + 5);
          v58 = 8 * v56;
          v59 = v57;
          while ( 1 )
          {
            v60 = *v59;
            v48 = dyld4::Loader::matchesPath(*v59, (const char *)&v109);
            if ( (_DWORD)v48 )
              break;
            ++v59;
            ++v57;
            v58 -= 8;
            if ( !v58 )
              goto LABEL_57;
          }
          *(_WORD *)(*(_QWORD *)this + v54 + 36) = *((_WORD *)v60 + 3) & 0x7FFF;
        }
      }
    }
LABEL_57:
    v98 = 0;
    v99 = &v98;
    v100 = 0x5002000000LL;
    v101 = __Block_byref_object_copy__5;
    v102 = __Block_byref_object_dispose__5;
    v103 = &v109;
    v104 = 16;
    v105 = 0;
    v106 = 0;
    v107 = 0;
    v68 = v54;
    if ( (*((_BYTE *)a3 + 4) & 2) == 0 )
    {
      v69 = *((_QWORD *)this + 2);
      v70 = *(_QWORD *)this;
      if ( (((_BYTE)v69 - (unsigned __int8)*(_QWORD *)this) & 7) != 0 )
      {
        v48 = dyld4::BumpAllocator::zeroFill(this, 8LL - (((_BYTE)v69 - (unsigned __int8)*(_QWORD *)this) & 7));
        v69 = *((_QWORD *)this + 2);
        v70 = *(_QWORD *)this;
      }
      v71 = v93;
      v72 = v69 - (v54 + v70);
      *(_WORD *)(v70 + v54 + 26) = v72;
      if ( v72 >= 0x10000 )
        dyld4::PrebuiltLoader::serialize(v48);
      *(_DWORD *)(v70 + v54 + 28) = 0;
      v97[7] = _NSConcreteStackBlock;
      v97[8] = 0x40000000;
      v97[9] = ___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke_51;
      v97[10] = &__block_descriptor_tmp_55_0;
      v97[11] = v71;
      v97[12] = this;
      v97[13] = this;
      v97[14] = v54;
      v97[1] = _NSConcreteStackBlock;
      v97[2] = 0x40000000;
      v97[3] = ___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke_2;
      v97[4] = &unk_963A0;
      v97[5] = &v98;
      v97[6] = v71;
      dyld4::JustInTimeLoader::forEachBindTarget((__int64)a3);
      hasError = Diagnostics::hasError(v71);
      if ( (hasError & 1) != 0 )
        goto LABEL_77;
      if ( v99[7] )
      {
        v74 = *(_QWORD *)this;
        v75 = *((_QWORD *)this + 2) - *(_QWORD *)this;
        if ( (v75 & 7) != 0 )
        {
          hasError = dyld4::BumpAllocator::zeroFill(this, 8 - (v75 & 7));
          v74 = *(_QWORD *)this;
          v75 = *((_QWORD *)this + 2) - *(_QWORD *)this;
        }
        v76 = v74 + v54;
        *(_DWORD *)(v76 + 68) = v75 - v54;
        *(_DWORD *)(v76 + 72) = v99[7];
        v77 = v99[7];
        if ( !v77 )
          dyld4::PrebuiltLoader::serialize(hasError);
        v78 = (const void *)v99[5];
        v79 = 8 * v77;
        dyld4::BumpAllocator::zeroFill(this, 8 * v77);
        _platform_memmove((void *)(*(_QWORD *)this + v75), v78, v79);
        v68 = v54;
      }
    }
    v80 = dyld4::PrebuiltObjC::serializeFixups(v92, a3, this);
    v81 = v80 - v68;
    if ( !v80 )
      v81 = 0;
    v82 = *(_QWORD *)this + v68;
    *(_DWORD *)(v82 + 32) = v81;
    *(_DWORD *)(v82 + 64) = 0;
    v97[0] = 0;
    v96 = 0;
    if ( (unsigned int)dyld4::JustInTimeLoader::overridesDylibInCache((__int64)a3, v97, &v96) )
    {
      v83 = (__int64 *)v97[0];
      if ( v97[0] )
      {
        v84 = *((_QWORD *)this + 2) - *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)this + v68 + 64) = v84 - v68;
        if ( *v83 == -1 )
        {
          v86 = 8;
        }
        else
        {
          v85 = v83 + 1;
          LODWORD(v86) = 8;
          do
          {
            v86 = (unsigned int)(v86 + 8);
            v87 = *v85++;
          }
          while ( v87 != -1 );
        }
        dyld4::BumpAllocator::zeroFill(this, v86);
        _platform_memmove((void *)(*(_QWORD *)this + v84), v83, v86);
      }
    }
LABEL_77:
    _Block_object_dispose(&v98, 8);
    v105 = 0;
    if ( v106 )
      vm_deallocate(mach_task_self_, v106, v107);
  }
}
