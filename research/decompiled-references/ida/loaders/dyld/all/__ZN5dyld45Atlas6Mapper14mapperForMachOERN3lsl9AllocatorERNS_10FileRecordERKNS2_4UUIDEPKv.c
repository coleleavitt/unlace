void __usercall dyld4::Atlas::Mapper::mapperForMachO(
        dyld4::Atlas::Mapper *this@<X0>,
        lsl::Allocator *a2@<X1>,
        dyld4::FileRecord *a3@<X2>,
        const UUID *a4@<X3>,
        _QWORD *a5@<X8>)
{
  dyld3 *Path; // x0
  int v11; // w0
  int v12; // w22
  dyld3::FatFile *v13; // x0
  const void *v14; // x1
  dyld3::MachOFile *v15; // x23
  __int64 isFatFile; // x0
  const void *v17; // x1
  __int64 v18; // x25
  off_t st_size; // x26
  dyld3::MachOFile *isMachO; // x0
  dyld3::MachOFile *v21; // x25
  __int64 v22; // x8
  int v23; // w10
  int v24; // w11
  _DWORD *v26; // x0
  _QWORD v27[8]; // [xsp+8h] [xbp-238h] BYREF
  int v28; // [xsp+48h] [xbp-1F8h]
  _QWORD v29[8]; // [xsp+50h] [xbp-1F0h] BYREF
  _QWORD v30[4]; // [xsp+90h] [xbp-1B0h] BYREF
  __int64 v31; // [xsp+B0h] [xbp-190h] BYREF
  __int64 *v32; // [xsp+B8h] [xbp-188h]
  __int64 v33; // [xsp+C0h] [xbp-180h]
  __int64 v34; // [xsp+C8h] [xbp-178h]
  stat v35; // [xsp+D0h] [xbp-170h] BYREF
  __int128 v36; // [xsp+160h] [xbp-E0h] BYREF
  __int64 v37; // [xsp+170h] [xbp-D0h]
  __int64 v38; // [xsp+178h] [xbp-C8h]
  __int128 v39; // [xsp+180h] [xbp-C0h] BYREF
  __int64 v40; // [xsp+190h] [xbp-B0h]
  __int64 (__fastcall *v41)(); // [xsp+198h] [xbp-A8h]
  __int64 (__fastcall *v42)(); // [xsp+1A0h] [xbp-A0h]
  dyld4::Atlas::Mapper *v43; // [xsp+1A8h] [xbp-98h] BYREF
  __int64 v44; // [xsp+1B0h] [xbp-90h]
  __int64 v45; // [xsp+1B8h] [xbp-88h]
  __int64 v46; // [xsp+1C0h] [xbp-80h]

  Path = (dyld3 *)dyld4::FileRecord::getPath(a2);
  v11 = dyld3::open(Path, nullptr, 0);
  if ( v11 == -1 )
    goto LABEL_20;
  v12 = v11;
  if ( fstat(v11, &v35) == -1
    || (v13 = (dyld3::FatFile *)mmap(nullptr, v35.st_size, 1, 2, v12, 0), v13 == (dyld3::FatFile *)-1LL) )
  {
    v11 = v12;
LABEL_20:
    close(v11);
    *a5 = 0;
    return;
  }
  v15 = v13;
  v31 = 0;
  v32 = &v31;
  v33 = 0x2000000000LL;
  v34 = 0;
  isFatFile = dyld3::FatFile::isFatFile(v13, v14);
  v30[0] = 0;
  v30[1] = v30;
  v30[2] = 0x2000000000LL;
  v30[3] = 0;
  if ( isFatFile )
  {
    v18 = isFatFile;
    st_size = v35.st_size;
    Diagnostics::Diagnostics((Diagnostics *)&v39);
    v29[0] = _NSConcreteStackBlock;
    v29[1] = 0x40000000;
    v29[2] = ___ZN5dyld45Atlas6Mapper14mapperForMachOERN3lsl9AllocatorERNS_10FileRecordERKNS2_4UUIDEPKv_block_invoke;
    v29[3] = &unk_96E60;
    v29[4] = &v31;
    v29[5] = v30;
    v29[6] = a3;
    v29[7] = v18;
    dyld3::FatFile::forEachSlice(v18, &v39, st_size, v29);
    Diagnostics::clearError((vm_address_t *)&v39);
    Diagnostics::~Diagnostics((vm_address_t *)&v39);
  }
  if ( !v32[3] )
  {
    isMachO = (dyld3::MachOFile *)dyld3::MachOFile::isMachO(v15, v17);
    if ( isMachO )
    {
      v21 = isMachO;
      v39 = 0u;
      dyld3::MachOFile::getUuid(isMachO, (unsigned __int8 *)&v39);
      v22 = 0;
      v36 = v39;
      do
      {
        v23 = *((unsigned __int8 *)a3 + v22);
        v24 = *((unsigned __int8 *)&v36 + v22);
      }
      while ( v23 == v24 && v22++ != 15 );
      if ( v23 == v24 )
        v32[3] = (__int64)v21;
    }
  }
  if ( v32[3] )
  {
    *(_QWORD *)&v39 = 0;
    *((_QWORD *)&v39 + 1) = &v39;
    v40 = 0x4802000000LL;
    v41 = __Block_byref_object_copy__9;
    v42 = __Block_byref_object_dispose__9;
    v43 = this;
    v45 = 0;
    v46 = 0;
    v44 = 0;
    *(_QWORD *)&v36 = 0;
    *((_QWORD *)&v36 + 1) = &v36;
    v37 = 0x2000000000LL;
    v38 = 0;
    v26 = (_DWORD *)v32[3];
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 0x40000000;
    v27[2] = ___ZN5dyld45Atlas6Mapper14mapperForMachOERN3lsl9AllocatorERNS_10FileRecordERKNS2_4UUIDEPKv_block_invoke_3;
    v27[3] = &unk_96E88;
    v27[4] = &v36;
    v27[5] = &v39;
    v27[6] = v30;
    v27[7] = a4;
    v28 = v12;
    dyld3::MachOFile::forEachSegment(v26, (__int64)v27);
    munmap(v15, v35.st_size);
    lsl::Allocator::makeShared<dyld4::Atlas::Mapper,lsl::Allocator&,lsl::Vector<dyld4::Atlas::Mapper::Mapping> &>(
      this,
      (__int64)this,
      *((_QWORD *)&v39 + 1) + 40LL,
      (int)a5);
    _Block_object_dispose(&v36, 8);
    _Block_object_dispose(&v39, 8);
    if ( v44 )
      lsl::Vector<dyld4::Atlas::Mapper::Mapping>::resize(&v43, 0);
  }
  else
  {
    munmap(v15, v35.st_size);
    close(v12);
    *a5 = 0;
  }
  _Block_object_dispose(v30, 8);
  _Block_object_dispose(&v31, 8);
}
