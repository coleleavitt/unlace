void __fastcall dyld4::writeClassOrProtocolHashTable(int a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 hasError; // x0
  unsigned __int64 v10; // x8
  __int64 v11; // x26
  unsigned __int64 v12; // x20
  __int64 v13; // x9
  __int64 v14; // x10
  __int64 *v15; // x10
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 *v18; // x27
  __int64 v19; // x22
  __int64 v20; // x8
  __int64 v21; // x9
  char v22; // w1
  const char *v23; // x8
  __int64 v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  unsigned __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x9
  const char *v30; // t1
  int v31; // w4
  int v32; // w5
  __int64 v33; // x8
  __int64 v34; // x10
  unsigned __int64 v35; // x21
  unsigned __int64 v36; // x8
  _QWORD *v38; // [xsp+8h] [xbp-5B8h]
  const char *v39; // [xsp+30h] [xbp-590h] BYREF
  __int128 v40; // [xsp+38h] [xbp-588h]
  __int128 v41; // [xsp+448h] [xbp-178h]
  __int128 v42; // [xsp+458h] [xbp-168h]
  vm_size_t size; // [xsp+468h] [xbp-158h]
  _QWORD v44[6]; // [xsp+470h] [xbp-150h] BYREF
  __int64 v45; // [xsp+4A0h] [xbp-120h] BYREF
  __int64 *v46; // [xsp+4A8h] [xbp-118h]
  __int64 v47; // [xsp+4B0h] [xbp-110h]
  int v48; // [xsp+4B8h] [xbp-108h]
  __int64 v49; // [xsp+4C0h] [xbp-100h] BYREF
  __int64 *v50; // [xsp+4C8h] [xbp-F8h]
  __int64 v51; // [xsp+4D0h] [xbp-F0h]
  int v52; // [xsp+4D8h] [xbp-E8h]
  __int128 v53; // [xsp+4E0h] [xbp-E0h] BYREF
  __int128 v54; // [xsp+4F0h] [xbp-D0h]
  vm_size_t v55; // [xsp+500h] [xbp-C0h]
  _BYTE v56[32]; // [xsp+508h] [xbp-B8h] BYREF
  __int64 v57; // [xsp+528h] [xbp-98h]
  vm_address_t v58; // [xsp+530h] [xbp-90h]
  vm_size_t v59; // [xsp+538h] [xbp-88h]
  _QWORD v60[3]; // [xsp+540h] [xbp-80h] BYREF
  vm_address_t v61; // [xsp+558h] [xbp-68h]
  vm_size_t v62; // [xsp+560h] [xbp-60h]

  hasError = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::Map((__int64)v56);
  v55 = 0;
  v53 = 0u;
  v54 = 0u;
  v10 = a2[2];
  if ( v10 )
  {
    v11 = 0;
    v38 = a2;
    v12 = a2[2];
    do
    {
      if ( v10 <= --v12 )
        dyld4::writeClassOrProtocolHashTable(hasError);
      hasError = Diagnostics::hasError((Diagnostics *)(*a2 + 568 * v12 + 32));
      if ( (hasError & 1) == 0 )
      {
        if ( v38[2] <= v12 )
          dyld4::writeClassOrProtocolHashTable();
        v13 = *v38;
        v14 = 80;
        if ( a1 )
          v14 = 40;
        v15 = (__int64 *)(v13 + 568 * v12 + v14);
        v16 = v15[2];
        if ( v16 )
        {
          v17 = *v15;
          v18 = (__int64 *)(v13 + 568 * v12);
          v19 = 40 * v16;
          do
          {
            if ( !*(_BYTE *)(v17 + 16) )
              goto LABEL_45;
            v20 = *v18;
            v21 = *(_QWORD *)(v17 + 8);
            v39 = *(const char **)v17;
            *(_QWORD *)&v40 = v20;
            *((_QWORD *)&v40 + 1) = v21;
            dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::insert(
              (__int64)v56,
              (__int128 *)&v39);
            if ( (v22 & 1) != 0 )
            {
              dyld3::OverflowSafeArray<char const*,4294967295ul>::verifySpace(&v53, 1);
              v23 = *(const char **)v17;
              v24 = v54;
              *(_QWORD *)&v54 = v54 + 1;
              *(_QWORD *)(v53 + 8 * v24) = v23;
              if ( (a1 & 1) != 0 )
              {
                v25 = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find(
                        a4,
                        (const char **)v17);
                if ( v25 != a4[7] + 24LL * a4[9] )
                {
                  v39 = *(const char **)v17;
                  v40 = *(_OWORD *)(v25 + 8);
                  dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert(
                    a5,
                    &v39);
                }
              }
              else
              {
                v26 = dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::find(
                        v18 + 32,
                        v17 + 24);
                if ( v26 == v18[39] + 24 * v18[41] )
                  dyld4::writeClassOrProtocolHashTable();
                v27 = *(unsigned int *)(v26 + 16);
                if ( v18[17] <= v27 )
                  dyld4::writeClassOrProtocolHashTable();
                *(_BYTE *)(v18[15] + v27) = 1;
              }
            }
            if ( !*(_BYTE *)(v17 + 32) )
LABEL_45:
              std::__throw_bad_optional_access[abi:v15006]();
            v28 = *v18;
            v29 = *(_QWORD *)(v17 + 24);
            v30 = *(const char **)v17;
            v17 += 40;
            v39 = v30;
            *(_QWORD *)&v40 = v28;
            *((_QWORD *)&v40 + 1) = v29;
            hasError = dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert(
                         a5,
                         &v39);
            v19 -= 40;
          }
          while ( v19 );
        }
      }
      ++v11;
      a2 = v38;
      v10 = v38[2];
    }
    while ( v11 != v10 );
  }
  v49 = 0;
  v50 = &v49;
  v51 = 0x2000000000LL;
  v52 = 0;
  v45 = 0;
  v46 = &v45;
  v47 = 0x2000000000LL;
  v48 = 0;
  v44[0] = _NSConcreteStackBlock;
  v44[1] = 0x40000000;
  v44[2] = ___ZN5dyld4L29writeClassOrProtocolHashTableERNS_12RuntimeStateEbRN5dyld35ArrayINS_12PrebuiltObjC18ObjCOptimizerImageEEERNS2_17OverflowSafeArrayIhLm4294967295EEERKNS2_3MapIPKcNS_6Loader10BindTargetENS2_11HashCStringENS2_12EqualCStringEEERNS2_8MultiMapISD_SF_NS2_16HashCStringMultiENS2_17EqualCStringMultiEEE_block_invoke;
  v44[3] = &unk_96C88;
  v44[4] = &v49;
  v44[5] = &v45;
  dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry(
    a5,
    v44);
  if ( (_QWORD)v54 )
  {
    size = 0;
    v41 = 0u;
    v42 = 0u;
    v40 = 0u;
    v39 = nullptr;
    objc::PerfectHash::make_perfect((__int64)&v53, (__int64)&v39);
    v31 = *((_DWORD *)v50 + 6);
    v32 = *((_DWORD *)v46 + 6);
    if ( (unsigned int)(DWORD1(v40) + 1) > 8 )
      v33 = (unsigned int)(DWORD1(v40) + 1);
    else
      v33 = 8;
    if ( (unsigned int)v39 <= 8 )
      v34 = 8;
    else
      v34 = (unsigned int)v39;
    v35 = (8LL * (unsigned int)v39
         + 8LL * (unsigned int)(v32 + v31)
         + ((v33 + v34 + 8LL * (unsigned int)v39 + 1063) & 0xFFFFFFFF8LL)
         + 11)
        & 0x3FFFFFFFF8LL;
    v36 = *(_QWORD *)(a3 + 16);
    if ( v36 != v35 )
    {
      if ( v36 <= v35 )
      {
        dyld3::OverflowSafeArray<unsigned char,4294967295ul>::reserve(a3, v35);
        v31 = *((_DWORD *)v50 + 6);
        v32 = *((_DWORD *)v46 + 6);
      }
      *(_QWORD *)(a3 + 16) = v35;
    }
    dyld4::ObjCClassOpt::write(*(unsigned int **)a3, (unsigned int *)&v39, v60, a5, v31, v32);
    *(_QWORD *)&v42 = 0;
    if ( *((_QWORD *)&v42 + 1) )
      vm_deallocate(mach_task_self_, *((vm_address_t *)&v42 + 1), size);
  }
  _Block_object_dispose(&v45, 8);
  _Block_object_dispose(&v49, 8);
  *(_QWORD *)&v54 = 0;
  if ( *((_QWORD *)&v54 + 1) )
    vm_deallocate(mach_task_self_, *((vm_address_t *)&v54 + 1), v55);
  v60[2] = 0;
  if ( v61 )
    vm_deallocate(mach_task_self_, v61, v62);
  v57 = 0;
  if ( v58 )
    vm_deallocate(mach_task_self_, v58, v59);
}
