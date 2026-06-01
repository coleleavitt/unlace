__int64 __fastcall dyld4::PrebuiltLoader::applyFixups(
        dyld4::PrebuiltLoader *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        dyld4::DyldCacheDataConstLazyScopedWriter *a4)
{
  __int64 result; // x0
  __int64 v5; // x2
  dyld4::DyldCacheDataConstLazyScopedWriter *v6; // x3
  __int64 *v7; // x19
  Diagnostics *v8; // x1
  Diagnostics *v9; // x25
  __int64 v10; // x20
  int v11; // w8
  __int64 v12; // x8
  dyld4::DyldCacheDataConstLazyScopedWriter *v13; // x22
  dyld4::Loader **v14; // x21
  __int64 v15; // x23
  dyld4::Loader **v16; // x24
  dyld4::Loader *v17; // t1
  int v18; // w9
  __int64 *v19; // x10
  __int64 v20; // x10
  __int64 v21; // x27
  dyld4::PrebuiltLoader::BindTargetRef *v22; // x22
  unsigned __int64 v23; // x25
  __int64 v24; // x21
  dyld4::Loader *v25; // x0
  __int64 v26; // x9
  __int64 v27; // x24
  dyld4::PrebuiltLoader::BindTargetRef *v28; // x22
  const char *v29; // x0
  __int64 v30; // x9
  unsigned __int64 v31; // x26
  __int64 v32; // x23
  dyld4::Loader *v33; // x0
  __int64 v34; // x9
  __int64 v35; // x8
  dyld4::RuntimeState *v36; // x1
  const char *v37; // x3
  const dyld3::MachOAnalyzer *v38; // x2
  __int64 v39; // [xsp+30h] [xbp-11F0h]
  __int64 v40; // [xsp+38h] [xbp-11E8h]
  Diagnostics *v41; // [xsp+40h] [xbp-11E0h]
  _QWORD v42[3]; // [xsp+48h] [xbp-11D8h] BYREF
  _QWORD v43[2]; // [xsp+60h] [xbp-11C0h] BYREF
  __int64 v44; // [xsp+70h] [xbp-11B0h]
  vm_address_t address; // [xsp+78h] [xbp-11A8h]
  vm_size_t size; // [xsp+80h] [xbp-11A0h]
  _QWORD v47[2]; // [xsp+88h] [xbp-1198h] BYREF
  __int64 v48; // [xsp+98h] [xbp-1188h]
  vm_address_t v49; // [xsp+A0h] [xbp-1180h]
  vm_size_t v50; // [xsp+A8h] [xbp-1178h]
  _WORD v51[132]; // [xsp+B0h] [xbp-1170h] BYREF
  char v52; // [xsp+1B8h] [xbp-1068h] BYREF

  result = __chkstk_darwin();
  v7 = (__int64 *)v5;
  v9 = v8;
  v10 = result;
  v11 = *(_WORD *)(result + 4) & 2;
  if ( v11 && *(_BYTE *)(v5 + 822) )
  {
    v12 = *(_QWORD *)(v5 + 48);
    if ( v12 )
    {
      v13 = v6;
      v14 = *(dyld4::Loader ***)(v5 + 40);
      v15 = 8 * v12;
      v16 = v14;
      do
      {
        v17 = *v16++;
        result = dyld4::Loader::applyCachePatchesTo(v17, (dyld4::RuntimeState *)v7, (const dyld4::Loader *)v10, v13);
        ++v14;
        v15 -= 8;
      }
      while ( v15 );
      v11 = *(_WORD *)(v10 + 4) & 2;
    }
    else
    {
      v11 = 1;
    }
  }
  v18 = *(__int16 *)(v10 + 6);
  v19 = v7 + 86;
  if ( v18 >= 0 )
    v19 = v7 + 83;
  v20 = *v19;
  if ( !v11 || v18 < 0 )
  {
    v39 = *(_WORD *)(v10 + 6) & 0x7FFF;
    v40 = v20;
    v41 = v9;
    v47[0] = &v52;
    v47[1] = 512;
    v49 = 0;
    v50 = 0;
    v48 = 0;
    v21 = 8LL * *(unsigned int *)(v10 + 28);
    if ( v21 )
    {
      v22 = (dyld4::PrebuiltLoader::BindTargetRef *)(v10 + *(unsigned __int16 *)(v10 + 26));
      do
      {
        v23 = dyld4::PrebuiltLoader::BindTargetRef::value(v22, (dyld4::RuntimeState *)v7);
        if ( *(_BYTE *)(v7[1] + 182) )
        {
          v24 = *(_QWORD *)v22;
          dyld4::Loader::leafName((dyld4::Loader *)v10);
          if ( v24 < 0 )
          {
            dyld4::RuntimeState::log((dyld4::RuntimeState *)v7, "<%s/bind#%lu> -> %p\n");
          }
          else
          {
            if ( (*(_QWORD *)v22 & 0x8000000000000000LL) != 0 )
              dyld4::PrebuiltLoader::applyFixups();
            v51[0] = *(_QWORD *)v22;
            v25 = (dyld4::Loader *)dyld4::Loader::LoaderRef::loader(
                                     (dyld4::Loader::LoaderRef *)v51,
                                     (const dyld4::RuntimeState *)v7);
            dyld4::Loader::leafName(v25);
            dyld4::RuntimeState::log((dyld4::RuntimeState *)v7, "<%s/bind#%lu> -> %p (%s+0x%08llX)\n");
          }
        }
        dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace(v47, 1);
        v26 = v48++;
        *(_QWORD *)(v47[0] + 8 * v26) = v23;
        v22 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)v22 + 8);
        v21 -= 8;
      }
      while ( v21 );
    }
    result = Diagnostics::hasError(v41);
    if ( (result & 1) == 0 )
    {
      v43[0] = v51;
      v43[1] = 32;
      address = 0;
      size = 0;
      v44 = 0;
      v27 = 8LL * *(unsigned int *)(v10 + 72);
      if ( v27 )
      {
        v28 = (dyld4::PrebuiltLoader::BindTargetRef *)(v10 + *(unsigned int *)(v10 + 68));
        do
        {
          if ( (*(_QWORD *)v28 & 0x8000000000000000LL) != 0 || (unsigned __int16)*(_QWORD *)v28 != 0x7FFF )
          {
            v31 = dyld4::PrebuiltLoader::BindTargetRef::value(v28, (dyld4::RuntimeState *)v7);
            if ( *(_BYTE *)(v7[1] + 182) )
            {
              v32 = *(_QWORD *)v28;
              dyld4::Loader::leafName((dyld4::Loader *)v10);
              if ( v32 < 0 )
              {
                dyld4::RuntimeState::log((dyld4::RuntimeState *)v7, "<%s/bind#%lu> -> %p\n");
              }
              else
              {
                if ( (*(_QWORD *)v28 & 0x8000000000000000LL) != 0 )
                  dyld4::PrebuiltLoader::applyFixups();
                LOWORD(v42[0]) = *(_QWORD *)v28;
                v33 = (dyld4::Loader *)dyld4::Loader::LoaderRef::loader(
                                         (dyld4::Loader::LoaderRef *)v42,
                                         (const dyld4::RuntimeState *)v7);
                dyld4::Loader::leafName(v33);
                dyld4::RuntimeState::log((dyld4::RuntimeState *)v7, "<%s/bind#%lu> -> %p (%s+0x%08llX)\n");
              }
            }
            dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace(v43, 1);
            v34 = v44++;
            *(_QWORD *)(v43[0] + 8 * v34) = v31;
          }
          else
          {
            if ( *(_BYTE *)(v7[1] + 182) )
            {
              v29 = (const char *)dyld4::Loader::leafName((dyld4::Loader *)v10);
              dyld4::RuntimeState::log((dyld4::RuntimeState *)v7, "<%s/bind#%lu> -> missing-weak-bind\n", v29, v44);
            }
            dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace(v43, 1);
            v30 = v44++;
            *(_QWORD *)(v43[0] + 8 * v30) = -1;
          }
          v28 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)v28 + 8);
          v27 -= 8;
        }
        while ( v27 );
      }
      result = Diagnostics::hasError(v41);
      if ( (result & 1) == 0 )
      {
        if ( !v10
          || !*(_WORD *)(v10 + 18)
          || (v35 = v10 + *(unsigned __int16 *)(v10 + 18), !*(_BYTE *)(v35 + 60))
          || *(_QWORD *)v35 == -1 )
        {
          v36 = (dyld4::RuntimeState *)dyld4::Loader::analyzer((dyld4::Loader *)v10, (dyld4::RuntimeState *)v7);
          if ( *(_WORD *)(v10 + 8) )
            v38 = (const dyld3::MachOAnalyzer *)(v10 + *(unsigned __int16 *)(v10 + 8));
          else
            v38 = nullptr;
          dyld4::Loader::getOnDiskBinarySliceOffset((dyld4::Loader *)v7, v36, v38, v37);
        }
        memset(v42, 0, sizeof(v42));
        dyld4::Loader::applyFixupsGeneric(v10, (int)v41, (dyld4::RuntimeState *)v7);
        dyld4::PrebuiltLoader::applyObjCFixups((dyld4::PrebuiltLoader *)v10, (dyld4::RuntimeState *)v7);
        result = dyld4::Loader::hasConstantSegmentsToProtect((dyld4::Loader *)v10);
        if ( (_DWORD)result )
          result = dyld4::Loader::makeSegmentsReadOnly((dyld4::Loader *)v10, (dyld4::RuntimeState *)v7);
        *(_BYTE *)(v40 + v39) = 6;
      }
      v44 = 0;
      if ( address )
        result = vm_deallocate(mach_task_self_, address, size);
    }
    v48 = 0;
    if ( v49 )
      return vm_deallocate(mach_task_self_, v49, v50);
  }
  else
  {
    *(_BYTE *)(v20 + (*(_WORD *)(v10 + 6) & 0x7FFF)) = 6;
  }
  return result;
}
