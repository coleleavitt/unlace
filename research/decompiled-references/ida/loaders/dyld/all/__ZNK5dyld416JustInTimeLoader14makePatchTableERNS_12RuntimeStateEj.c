__int64 __fastcall dyld4::JustInTimeLoader::makePatchTable(
        dyld3::MachOFile **this,
        dyld4::RuntimeState *a2,
        __int64 a3)
{
  __int64 v3; // x8
  __int64 v7; // x22
  int v8; // w0
  __int64 v9; // x19
  __int64 IndexedImageEntry; // x24
  char *IndexedImagePath; // x0
  char *v12; // x25
  __int64 (__fastcall *v13)(); // x25
  __int64 *v14; // x26
  dyld3::MachOFile *v16; // x25
  __int64 *v17; // x27
  __int64 *v18; // x26
  unsigned int v19; // w0
  unsigned __int64 v20; // x27
  __int64 v21; // x27
  mach_o::ChainedFixupPointerOnDisk *v22; // x25
  mach_o::ChainedFixupPointerOnDisk *v23; // x9
  __int64 v24; // x27
  mach_o::ChainedFixupPointerOnDisk *v25; // x25
  mach_o::ChainedFixupPointerOnDisk *v26; // x9
  mach_o::ChainedFixupPointerOnDisk *v27; // [xsp+0h] [xbp-370h]
  mach_o::ChainedFixupPointerOnDisk *v28; // [xsp+0h] [xbp-370h]
  mach_o::ChainedFixupPointerOnDisk *v29; // [xsp+0h] [xbp-370h]
  _QWORD *v30; // [xsp+8h] [xbp-368h]
  unsigned __int64 v31; // [xsp+18h] [xbp-358h]
  unsigned __int16 v32; // [xsp+24h] [xbp-34Ch]
  __int64 v33; // [xsp+28h] [xbp-348h]
  _QWORD v34[12]; // [xsp+30h] [xbp-340h] BYREF
  __int64 v35; // [xsp+90h] [xbp-2E0h] BYREF
  __int64 *v36; // [xsp+98h] [xbp-2D8h]
  __int64 v37; // [xsp+A0h] [xbp-2D0h]
  __int64 (__fastcall *v38)(); // [xsp+A8h] [xbp-2C8h]
  __int64 (__fastcall *v39)(); // [xsp+B0h] [xbp-2C0h]
  _QWORD v40[5]; // [xsp+B8h] [xbp-2B8h] BYREF
  vm_address_t v41; // [xsp+E0h] [xbp-290h]
  vm_size_t v42; // [xsp+E8h] [xbp-288h]
  __int64 v43; // [xsp+100h] [xbp-270h]
  vm_address_t v44; // [xsp+108h] [xbp-268h]
  vm_size_t v45; // [xsp+110h] [xbp-260h]
  __int64 v46; // [xsp+118h] [xbp-258h] BYREF
  __int64 *v47; // [xsp+120h] [xbp-250h]
  __int64 v48; // [xsp+128h] [xbp-248h]
  int v49; // [xsp+130h] [xbp-240h]
  __int64 v50; // [xsp+138h] [xbp-238h] BYREF
  char v51; // [xsp+140h] [xbp-230h]
  __int64 v52; // [xsp+148h] [xbp-228h] BYREF
  unsigned int v53; // [xsp+154h] [xbp-21Ch] BYREF
  unsigned __int64 v54; // [xsp+158h] [xbp-218h] BYREF
  unsigned __int64 v55; // [xsp+160h] [xbp-210h] BYREF
  vm_address_t v56[5]; // [xsp+168h] [xbp-208h] BYREF
  vm_address_t v57[2]; // [xsp+190h] [xbp-1E0h] BYREF
  void **v58; // [xsp+1A0h] [xbp-1D0h] BYREF
  __int64 v59; // [xsp+1A8h] [xbp-1C8h]
  __int64 v60; // [xsp+1B0h] [xbp-1C0h]
  __int64 (__fastcall *v61)(); // [xsp+1B8h] [xbp-1B8h]
  __int64 (__fastcall *v62)(); // [xsp+1C0h] [xbp-1B0h]
  __int64 *v63; // [xsp+1C8h] [xbp-1A8h]
  __int64 v64; // [xsp+1D0h] [xbp-1A0h]
  __int64 v65; // [xsp+1D8h] [xbp-198h]
  vm_address_t v66; // [xsp+1E0h] [xbp-190h]
  vm_size_t v67; // [xsp+1E8h] [xbp-188h]
  vm_address_t v68; // [xsp+1F0h] [xbp-180h] BYREF
  __int64 v69; // [xsp+1F8h] [xbp-178h] BYREF
  __int64 *v70; // [xsp+200h] [xbp-170h]
  __int64 v71; // [xsp+208h] [xbp-168h]
  __int64 (__fastcall *v72)(); // [xsp+210h] [xbp-160h]
  __int64 (__fastcall *v73)(); // [xsp+218h] [xbp-158h]
  _QWORD v74[5]; // [xsp+220h] [xbp-150h] BYREF
  vm_address_t v75; // [xsp+248h] [xbp-128h]
  vm_size_t v76; // [xsp+250h] [xbp-120h]
  __int64 v77; // [xsp+268h] [xbp-108h]
  vm_address_t address; // [xsp+270h] [xbp-100h]
  vm_size_t size; // [xsp+278h] [xbp-F8h]

  v3 = *((_QWORD *)a2 + 1);
  if ( !*(_QWORD *)(v3 + 312) )
    dyld4::JustInTimeLoader::makePatchTable(this);
  v7 = v3 + 312;
  v8 = PatchTable::patchableExportCount((PatchTable *)(v3 + 312), a3);
  if ( !v8 )
    return 0;
  v9 = lsl::Allocator::malloc(*((lsl::Allocator **)a2 + 2), 8LL * (unsigned int)(v8 + 1));
  v46 = 0;
  v47 = &v46;
  v48 = 0x2000000000LL;
  v49 = 0;
  v33 = (__int64)*(this + 1);
  IndexedImageEntry = DyldSharedCache::getIndexedImageEntry(*(DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL), a3);
  v35 = 0;
  v36 = &v35;
  v37 = 0x8802000000LL;
  v38 = __Block_byref_object_copy__4;
  v39 = __Block_byref_object_dispose__4;
  dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::Map(v40);
  IndexedImagePath = (char *)DyldSharedCache::getIndexedImagePath(
                               *(DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL),
                               a3);
  if ( IndexedImagePath )
  {
    v12 = IndexedImagePath;
    if ( !strstr(IndexedImagePath, "libdispatch.dylib") && !strstr(v12, "libxpc.dylib") )
    {
      if ( _platform_strcmp(v12, "/usr/lib/libodmodule.dylib") )
      {
        if ( _platform_strcmp(v12, "/usr/lib/log/liblog_odtypes.dylib") )
        {
          v16 = *(this + 1);
          v17 = v36;
          if ( (unsigned int)dyld3::MachOFile::hasChainedFixups(v16) )
          {
            Diagnostics::Diagnostics((Diagnostics *)&v68);
            v58 = nullptr;
            v59 = (__int64)&v58;
            v60 = 0x5002000000LL;
            v61 = __Block_byref_object_copy__23_0;
            v62 = __Block_byref_object_dispose__24_0;
            v63 = &v69;
            v64 = 32;
            v65 = 0;
            v66 = 0;
            v67 = 0;
            v56[0] = (vm_address_t)_NSConcreteStackBlock;
            v56[1] = 1174405120;
            v56[2] = (vm_address_t)___ZN5dyld4L19getObjCPatchClassesEPKN5dyld313MachOAnalyzerERNS0_3MapIPKvbNS_11HashPointerENS_12EqualPointerEEE_block_invoke;
            v56[3] = (vm_address_t)&unk_961A8;
            v57[0] = v68;
            v57[1] = (vm_address_t)v16;
            v56[4] = (vm_address_t)&v58;
            dyld3::MachOAnalyzer::forEachBindTarget(v16, &v68, 0, v56, &__block_literal_global_0);
            if ( !Diagnostics::hasError((Diagnostics *)&v68) )
            {
              v54 = 0;
              v55 = 0;
              if ( (unsigned int)dyld3::MachOFile::findObjCDataSection(v16, "__objc_classlist", &v55, &v54) )
              {
                v18 = v17;
                v19 = dyld3::MachOFile::pointerSize(v16);
                v20 = v19;
                if ( v54 % v19 )
                {
                  Diagnostics::error((Diagnostics *)&v68, "Invalid objc class section size");
                }
                else
                {
                  v31 = v54 / v19;
                  v27 = (mach_o::ChainedFixupPointerOnDisk *)v54;
                  v30 = v18 + 5;
                  v32 = dyld3::MachOAnalyzer::chainedPointerFormat(v16);
                  if ( (_DWORD)v20 == 8 )
                  {
                    if ( (unsigned __int64)v27 >= v20 )
                    {
                      v21 = 0;
                      v22 = (dyld3::MachOFile *)((char *)v16 + v55);
                      do
                      {
                        v53 = 0;
                        v52 = 0;
                        if ( (unsigned int)mach_o::ChainedFixupPointerOnDisk::isBind(v22, v32, &v53, &v52) )
                        {
                          if ( *(_QWORD *)(v59 + 56) > (unsigned __int64)v53 )
                          {
                            v23 = *(mach_o::ChainedFixupPointerOnDisk **)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                            if ( v23 )
                            {
                              v50 = *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                              v51 = 1;
                              v28 = v23;
                              dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v30, &v50);
                              v53 = 0;
                              v52 = 0;
                              if ( (unsigned int)mach_o::ChainedFixupPointerOnDisk::isBind(v28, v32, &v53, &v52) )
                              {
                                if ( *(_QWORD *)(v59 + 56) > (unsigned __int64)v53
                                  && *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53) )
                                {
                                  v50 = *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                                  v51 = 1;
                                  dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v30, &v50);
                                }
                              }
                            }
                          }
                        }
                        ++v21;
                        v22 = (mach_o::ChainedFixupPointerOnDisk *)((char *)v22 + 8);
                      }
                      while ( v21 != v31 );
                    }
                  }
                  else if ( (unsigned __int64)v27 >= v20 )
                  {
                    v24 = 0;
                    v25 = (dyld3::MachOFile *)((char *)v16 + v55);
                    do
                    {
                      v53 = 0;
                      v52 = 0;
                      if ( (unsigned int)mach_o::ChainedFixupPointerOnDisk::isBind(v25, v32, &v53, &v52) )
                      {
                        if ( *(_QWORD *)(v59 + 56) > (unsigned __int64)v53 )
                        {
                          v26 = *(mach_o::ChainedFixupPointerOnDisk **)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                          if ( v26 )
                          {
                            v50 = *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                            v51 = 1;
                            v29 = v26;
                            dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v30, &v50);
                            v53 = 0;
                            v52 = 0;
                            if ( (unsigned int)mach_o::ChainedFixupPointerOnDisk::isBind(v29, v32, &v53, &v52) )
                            {
                              if ( *(_QWORD *)(v59 + 56) > (unsigned __int64)v53
                                && *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53) )
                              {
                                v50 = *(_QWORD *)(*(_QWORD *)(v59 + 40) + 8LL * v53);
                                v51 = 1;
                                dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v30, &v50);
                              }
                            }
                          }
                        }
                      }
                      ++v24;
                      v25 = (mach_o::ChainedFixupPointerOnDisk *)((char *)v25 + 4);
                    }
                    while ( v24 != v31 );
                  }
                }
              }
            }
            Diagnostics::~Diagnostics(v57);
            _Block_object_dispose(&v58, 8);
            v65 = 0;
            if ( v66 )
              vm_deallocate(mach_task_self_, v66, v67);
            Diagnostics::~Diagnostics(&v68);
          }
        }
      }
    }
  }
  v69 = 0;
  v70 = &v69;
  v71 = 0x8802000000LL;
  v72 = __Block_byref_object_copy__4;
  v73 = __Block_byref_object_dispose__4;
  dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::Map(v74);
  v13 = (__int64 (__fastcall *)())*(this + 1);
  v14 = v70 + 5;
  Diagnostics::Diagnostics((Diagnostics *)v56);
  v58 = _NSConcreteStackBlock;
  v59 = 0x40000000;
  v60 = (__int64)___ZN5dyld4L19getSingletonPatchesEPKN5dyld313MachOAnalyzerERNS0_3MapIPKvbNS_11HashPointerENS_12EqualPointerEEE_block_invoke;
  v61 = (__int64 (__fastcall *)())&__block_descriptor_tmp_83_0;
  v62 = v13;
  v63 = v14;
  dyld3::MachOFile::forEachSingletonPatch(v13, v56, &v58);
  Diagnostics::~Diagnostics(v56);
  v34[0] = _NSConcreteStackBlock;
  v34[1] = 0x40000000;
  v34[2] = ___ZNK5dyld416JustInTimeLoader14makePatchTableERNS_12RuntimeStateEj_block_invoke;
  v34[3] = &unk_95F48;
  v34[8] = a2;
  v34[9] = IndexedImageEntry;
  v34[4] = &v69;
  v34[5] = &v35;
  v34[6] = &v46;
  v34[7] = this;
  v34[10] = v9;
  v34[11] = v33;
  PatchTable::forEachPatchableExport(v7, a3, v34);
  *(_QWORD *)(v9 + 8LL * *((unsigned int *)v47 + 6)) = -1;
  _Block_object_dispose(&v69, 8);
  v77 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
  v74[4] = 0;
  if ( v75 )
    vm_deallocate(mach_task_self_, v75, v76);
  _Block_object_dispose(&v35, 8);
  v43 = 0;
  if ( v44 )
    vm_deallocate(mach_task_self_, v44, v45);
  v40[4] = 0;
  if ( v41 )
    vm_deallocate(mach_task_self_, v41, v42);
  _Block_object_dispose(&v46, 8);
  return v9;
}
