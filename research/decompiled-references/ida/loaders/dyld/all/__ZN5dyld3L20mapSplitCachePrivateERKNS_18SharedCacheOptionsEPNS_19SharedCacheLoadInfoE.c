__int64 dyld3::mapSplitCachePrivate()
{
  __int64 v0; // x0
  __int64 v1; // x1
  __int64 v2; // x19
  __int64 v3; // x25
  int v4; // w21
  const char *v5; // x1
  const char *v6; // x8
  __int64 i; // x8
  char *v8; // x10
  __int64 *v9; // x22
  _BYTE *v10; // x24
  __int64 v11; // x26
  const char *v12; // x1
  dyld3 *v13; // x0
  __int64 v14; // x23
  __int64 *v15; // x25
  char *v16; // x26
  unsigned __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x27
  int v20; // w21
  unsigned __int64 v21; // x22
  __int64 *v22; // x24
  __int64 v23; // x9
  bool v24; // w28
  __int64 v25; // t1
  __int64 v26; // x20
  int *v27; // x21
  int *v28; // x20
  __int64 v29; // x21
  _OWORD *v30; // x21
  vm_size_t v31; // x22
  const DyldSharedCache *v32; // x1
  __int64 v33; // x20
  unsigned __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  unsigned __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x28
  __int64 v40; // x24
  char *v41; // x8
  __int64 v42; // x20
  __int64 v43; // x23
  __int64 v44; // x8
  __int64 v45; // x9
  int v46; // w10
  __int64 v47; // x11
  __int64 v48; // x12
  int v49; // w16
  __int64 v50; // x13
  unsigned __int64 v51; // x14
  char v52; // w17
  unsigned int v53; // w16
  __int64 v54; // x0
  __int64 v55; // x1
  bool v56; // zf
  unsigned __int64 v57; // x1
  __int64 v58; // x1
  unsigned __int16 v59; // w14
  unsigned __int64 v60; // x15
  __int64 v61; // x16
  char v62; // w0
  int v63; // w1
  __int64 v64; // x4
  unsigned __int64 v65; // x4
  unsigned int v66; // w8
  unsigned __int64 v67; // x25
  int v68; // w27
  unsigned int v69; // w9
  unsigned __int64 *v70; // x21
  __int64 v71; // x8
  unsigned __int64 v72; // x26
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v73; // x2
  int v74; // w8
  __int64 v76; // [xsp+18h] [xbp-2C7A8h]
  __int64 v77; // [xsp+18h] [xbp-2C7A8h]
  __int64 v78; // [xsp+20h] [xbp-2C7A0h]
  __int64 v79; // [xsp+28h] [xbp-2C798h]
  int v80; // [xsp+28h] [xbp-2C798h]
  __int64 v81; // [xsp+30h] [xbp-2C790h]
  _QWORD v82[5]; // [xsp+38h] [xbp-2C788h] BYREF
  _QWORD v83[5]; // [xsp+60h] [xbp-2C760h] BYREF
  _QWORD v84[3]; // [xsp+88h] [xbp-2C738h] BYREF
  char v85; // [xsp+A0h] [xbp-2C720h]
  fsid_t v86; // [xsp+A8h] [xbp-2C718h] BYREF
  uint64_t v87; // [xsp+B0h] [xbp-2C710h]
  char v88; // [xsp+B8h] [xbp-2C708h]
  char v89[384]; // [xsp+C0h] [xbp-2C700h] BYREF
  unsigned int v90; // [xsp+240h] [xbp-2C580h]
  char __dst[48]; // [xsp+B80h] [xbp-2BC40h] BYREF
  __int64 v92; // [xsp+BB0h] [xbp-2BC10h] BYREF
  _BYTE v93[2360]; // [xsp+D08h] [xbp-2BAB8h] BYREF
  __int64 v94; // [xsp+1640h] [xbp-2B180h] BYREF
  char v95[264]; // [xsp+2BB80h] [xbp-C40h] BYREF
  __int64 v96[48]; // [xsp+2BC88h] [xbp-B38h] BYREF
  char v97; // [xsp+2BE0Dh] [xbp-9B3h]
  int v98; // [xsp+2BE10h] [xbp-9B0h]
  unsigned int v99; // [xsp+2BE30h] [xbp-990h]
  _BYTE v100[2324]; // [xsp+2BE34h] [xbp-98Ch] BYREF

  v0 = __chkstk_darwin();
  v2 = v1;
  v3 = v0;
  v97 = 0;
  v98 = 0;
  memset(v95, 0, 256);
  LOBYTE(v4) = 0;
  if ( !(unsigned int)dyld3::preflightMainCacheFile() )
    return v4 & 1;
  if ( *(_BYTE *)(v3 + 6) && fsgetpath(__dst, 0x400u, (fsid_t *)(v2 + 32), *(_QWORD *)(v2 + 40)) >= 1 )
    dyld4::console((dyld4 *)"mapped dyld cache file private to process (%s):\n", v5, __dst);
  v81 = v99;
  if ( v99 && !v97 )
  {
    LOBYTE(v4) = 0;
    v6 = "shared cache is too old, missing cache suffixes";
LABEL_38:
    *(_QWORD *)(v2 + 16) = v6;
    return v4 & 1;
  }
  for ( i = 0; i != 176128; i += 2752 )
  {
    v8 = &__dst[i];
    v8[389] = 0;
    *((_DWORD *)v8 + 98) = 0;
  }
  if ( (unsigned int)v81 < 2 )
  {
LABEL_17:
    v13 = (dyld3 *)_platform_memmove(__dst, v96, 0xAC0u);
    v79 = v96[0];
    dyld3::deallocateExistingSharedCache(v13);
    *(_QWORD *)v2 = *(_QWORD *)__dst;
    *(_QWORD *)(v2 + 8) = 0;
    if ( (_DWORD)v81 )
    {
      v76 = v3;
      v14 = 0;
      v15 = &v92;
      do
      {
        v16 = &__dst[2752 * v14];
        v17 = *((unsigned int *)v16 + 96);
        if ( (_DWORD)v17 )
        {
          v18 = *(_QWORD *)v16;
          v19 = *(_QWORD *)v16 - v79 + 0x180000000LL;
          v20 = *((_DWORD *)v16 + 98);
          v21 = 1;
          v22 = v15;
          v23 = *(_QWORD *)v16;
          v24 = 1;
          while ( mmap(
                    (void *)(v19 + v23 - v18 + *(_QWORD *)(v2 + 8)),
                    *(v22 - 5),
                    *((_DWORD *)v22 - 1) & 7,
                    18,
                    v20,
                    *(v22 - 4)) != (void *)-1LL )
          {
            if ( v17 == v21 )
              goto LABEL_31;
            v24 = v21 < v17;
            v25 = *v22;
            v22 += 6;
            v23 = v25;
            v18 = *(_QWORD *)v16;
            ++v21;
          }
          if ( !*(_QWORD *)(v2 + 16) )
            *(_QWORD *)(v2 + 16) = "mmap() the shared cache region failed";
          v26 = v81;
          v27 = (int *)v93;
          do
          {
            if ( *v27 != -1 )
              close(*v27);
            v27 += 688;
            --v26;
          }
          while ( v26 );
          if ( v24 )
            goto LABEL_39;
        }
LABEL_31:
        ++v14;
        v15 += 344;
      }
      while ( v14 != v81 );
      v28 = (int *)v93;
      v29 = v81;
      v3 = v76;
      do
      {
        if ( *v28 != -1 )
          close(*v28);
        v28 += 688;
        --v29;
      }
      while ( v29 );
    }
    v30 = (_OWORD *)(*(_QWORD *)(v2 + 8) + *(_QWORD *)&v100[2308]);
    v31 = (vm_page_size + 31) & -(__int64)vm_page_size;
    if ( mmap(v30, v31, 3, 4114, -1, 0) != v30 )
    {
      mmap((void *)0x180000000LL, 0x100000000uLL, 0, 4114, 0, 0);
      LOBYTE(v4) = 0;
      *(_QWORD *)v2 = 0;
      v6 = "could not mmap() dynamic config memory";
      goto LABEL_38;
    }
    strlcpy((char *)v30, "dyld_data    v0", 0x10u);
    v30[1] = *(_OWORD *)(v2 + 32);
    __mprotect(v30, v31, 1);
    if ( *(_BYTE *)(v3 + 6) )
      dyld3::verboseSharedCacheMappings(*(dyld3 **)v2, v32);
    if ( !(_DWORD)v81 )
    {
      LOBYTE(v4) = 1;
      return v4 & 1;
    }
    v33 = 0;
    v4 = 1;
    v77 = v3;
    while ( 1 )
    {
      _platform_memmove(v89, &__dst[2752 * v33], 0xAC0u);
      if ( *(_BYTE *)(v3 + 8) )
      {
        v83[0] = _NSConcreteStackBlock;
        v83[1] = 0x40000000;
        v83[2] = ___ZN5dyld3L20mapSplitCachePrivateERKNS_18SharedCacheOptionsEPNS_19SharedCacheLoadInfoE_block_invoke;
        v83[3] = &__block_descriptor_tmp_8;
        v83[4] = v2;
        DyldSharedCache::forEachRegion(*(_QWORD *)v89, v83, v34, v35, v36, v37, v38);
      }
      v78 = v33;
      v39 = v90;
      if ( v90 )
        break;
LABEL_84:
      v3 = v77;
      if ( *(_BYTE *)(v77 + 8) )
      {
        v82[0] = _NSConcreteStackBlock;
        v82[1] = 0x40000000;
        v82[2] = ___ZN5dyld3L20mapSplitCachePrivateERKNS_18SharedCacheOptionsEPNS_19SharedCacheLoadInfoE_block_invoke_2;
        v82[3] = &__block_descriptor_tmp_5_0;
        v82[4] = v2;
        DyldSharedCache::forEachRegion(*(_QWORD *)v89, v82, v34, v35, v36, v37, v38);
      }
      v33 = v78 + 1;
      if ( v78 + 1 == v81 )
        return v4 & 1;
    }
    v40 = 0;
    while ( !*(_QWORD *)&v89[48 * v40 + 24] )
    {
LABEL_83:
      if ( ++v40 == v39 )
        goto LABEL_84;
    }
    v41 = &v89[48 * v40];
    v42 = *((_QWORD *)v41 + 4);
    if ( v42 )
    {
      v43 = *(_QWORD *)v41;
      if ( *(_DWORD *)v42 == 3 )
      {
        v66 = *(_DWORD *)(v42 + 8);
        if ( v66 )
        {
          v80 = v4;
          v67 = 0;
          v68 = *(_DWORD *)(v42 + 4);
          do
          {
            v69 = *(unsigned __int16 *)(v42 + 24 + 2 * v67);
            if ( v69 != 0xFFFF )
            {
              v70 = (unsigned __int64 *)(v43 + (unsigned int)(v68 * v67));
              v71 = v69 >> 3;
              do
              {
                v70 += v71;
                v72 = *v70;
                if ( (*v70 & 0x8000000000000000LL) != 0 )
                {
                  v73 = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)(*(_QWORD *)(v42 + 16)
                                                                    + (unsigned int)v72
                                                                    + *(_QWORD *)(v2 + 8));
                  v84[0] = *v70;
                  *v70 = mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
                           (mach_o::ChainedFixupPointerOnDisk::Arm64e *)v84,
                           v70,
                           v73);
                }
                else
                {
                  v84[0] = *v70;
                  *v70 = *(_QWORD *)(v2 + 8)
                       + mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget((mach_o::ChainedFixupPointerOnDisk::Arm64e *)v84);
                }
                v71 = (v72 >> 51) & 0x7FF;
              }
              while ( v71 );
              v66 = *(_DWORD *)(v42 + 8);
            }
            ++v67;
          }
          while ( v67 < v66 );
          v74 = 1;
          v4 = v80;
          goto LABEL_82;
        }
      }
      else
      {
        if ( *(_DWORD *)v42 != 2 )
        {
          v74 = 0;
          *(_QWORD *)(v2 + 16) = "invalid slide info in cache file";
          goto LABEL_82;
        }
        v44 = *(unsigned int *)(v42 + 12);
        if ( (_DWORD)v44 )
        {
          v45 = 0;
          v46 = *(_DWORD *)(v42 + 4);
          v47 = v42 + *(unsigned int *)(v42 + 8);
          v48 = v42 + *(unsigned int *)(v42 + 16);
          do
          {
            v49 = *(__int16 *)(v47 + 2 * v45);
            if ( v49 != 0x4000 )
            {
              v50 = v43 + (unsigned int)(v46 * v45);
              if ( v49 < 0 )
              {
                v59 = v49 & 0x3FFF;
                v60 = *(_QWORD *)(v42 + 24);
                v61 = *(_QWORD *)(v42 + 32);
                v62 = __clz(__rbit64(v60)) - 2;
                do
                {
                  v63 = *(__int16 *)(v48 + 2LL * v59);
                  LODWORD(v34) = 4 * (v63 & 0x3FFF);
                  v35 = *(_QWORD *)(v2 + 8) + v61;
                  do
                  {
                    v64 = *(_QWORD *)(v50 + (unsigned int)v34);
                    v37 = (v64 & v60) >> v62;
                    v65 = v64 & ~v60;
                    v56 = v65 == 0;
                    v36 = v35 + v65;
                    if ( v56 )
                      v36 = 0;
                    *(_QWORD *)(v50 + (unsigned int)v34) = v36;
                    v34 = (unsigned int)(v34 + v37);
                  }
                  while ( (_DWORD)v37 );
                  ++v59;
                }
                while ( (v63 & 0x80000000) == 0 );
              }
              else
              {
                v51 = *(_QWORD *)(v42 + 24);
                v52 = __clz(__rbit64(v51)) - 2;
                v53 = 4 * (v49 & 0x3FFF);
                v54 = *(_QWORD *)(v42 + 32) + *(_QWORD *)(v2 + 8);
                do
                {
                  v55 = *(_QWORD *)(v50 + v53);
                  v34 = (v55 & v51) >> v52;
                  v57 = v55 & ~v51;
                  v56 = v57 == 0;
                  v58 = v54 + v57;
                  if ( v56 )
                    v58 = 0;
                  *(_QWORD *)(v50 + v53) = v58;
                  v53 += v34;
                }
                while ( (_DWORD)v34 );
              }
            }
            ++v45;
          }
          while ( v45 != v44 );
        }
      }
    }
    v74 = 1;
LABEL_82:
    v4 &= v74;
    goto LABEL_83;
  }
  v9 = &v94;
  v10 = v100;
  v11 = v81 - 1;
  while ( 1 )
  {
    memset(v84, 0, sizeof(v84));
    v85 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    if ( !(unsigned int)dyld3::preflightSubCacheFile(v3, (int)v84, (int)v9, v95) )
      break;
    if ( *(_BYTE *)(v3 + 6) )
    {
      __bzero(v89, 0x400u);
      if ( fsgetpath(v89, 0x400u, &v86, v87) >= 1 )
        dyld4::console((dyld4 *)"mapped dyld cache file private to process (%s):\n", v12, v89);
    }
    LODWORD(v9) = (_DWORD)v9 + 2752;
    v10 += 4;
    if ( !--v11 )
      goto LABEL_17;
  }
LABEL_39:
  LOBYTE(v4) = 0;
  return v4 & 1;
}
