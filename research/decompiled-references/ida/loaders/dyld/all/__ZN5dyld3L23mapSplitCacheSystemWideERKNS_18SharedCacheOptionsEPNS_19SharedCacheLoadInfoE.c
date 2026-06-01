__int64 dyld3::mapSplitCacheSystemWide()
{
  __int64 v0; // x0
  __int64 v1; // x1
  __int64 v2; // x20
  __int64 v3; // x21
  int v4; // w8
  __int64 result; // x0
  __int64 v6; // x24
  const char *v7; // x8
  __int64 i; // x8
  _BYTE *v9; // x10
  __int64 *v10; // x22
  _BYTE *v11; // x26
  __int64 v12; // x28
  vm_size_t v13; // x22
  vm_address_t v14; // x23
  __int64 v15; // x8
  _BYTE *v16; // x1
  __int64 v17; // x15
  __int64 v18; // x8
  int v19; // w23
  int v20; // w9
  _DWORD *v21; // x12
  int v22; // w13
  int v23; // w13
  __int64 v24; // x28
  _BYTE *v25; // x8
  __int64 v26; // x0
  const char *v27; // x1
  __int64 v28; // x2
  unsigned int v29; // w8
  _BYTE *v30; // x26
  const char *v31; // x25
  __int64 v32; // x22
  __int64 v33; // x8
  int v34; // w13
  _BYTE *v35; // x12
  __int64 v36; // x14
  _OWORD *v37; // x15
  _OWORD *v38; // x16
  __int128 v39; // q1
  vm_address_t v40; // x9
  _QWORD *v41; // x10
  int v42; // w23
  int *v43; // x22
  char v44; // w0
  const char *v45; // x1
  _BYTE v46[4]; // [xsp+0h] [xbp-2BC80h] BYREF
  unsigned int v47; // [xsp+4h] [xbp-2BC7Ch]
  vm_size_t v48; // [xsp+8h] [xbp-2BC78h]
  __int64 v49; // [xsp+10h] [xbp-2BC70h]
  vm_address_t v50[3]; // [xsp+18h] [xbp-2BC68h] BYREF
  char v51; // [xsp+30h] [xbp-2BC50h]
  __int64 v52; // [xsp+38h] [xbp-2BC48h]
  __int64 v53; // [xsp+40h] [xbp-2BC40h]
  char v54; // [xsp+48h] [xbp-2BC38h]
  _BYTE v55[392]; // [xsp+50h] [xbp-2BC30h] BYREF
  _DWORD v56[590]; // [xsp+1D8h] [xbp-2BAA8h] BYREF
  __int64 v57; // [xsp+B10h] [xbp-2B170h] BYREF
  char v58[264]; // [xsp+2B050h] [xbp-C30h] BYREF
  _BYTE v59[392]; // [xsp+2B158h] [xbp-B28h] BYREF
  int v60; // [xsp+2B2E0h] [xbp-9A0h]
  unsigned int v61; // [xsp+2B300h] [xbp-980h]
  _BYTE v62[2324]; // [xsp+2B304h] [xbp-97Ch] BYREF

  v0 = __chkstk_darwin();
  v2 = v1;
  v3 = v0;
  v59[389] = 0;
  v60 = 0;
  memset(v58, 0, 256);
  v4 = dyld3::preflightMainCacheFile();
  result = 0;
  if ( v4 )
  {
    v6 = v61;
    if ( v61 )
    {
      result = 0;
      v7 = "shared cache is too old, missing cache suffixes";
LABEL_12:
      *(_QWORD *)(v2 + 16) = v7;
      return result;
    }
    for ( i = 0; i != 176128; i += 2752 )
    {
      v9 = &v55[i];
      v9[389] = 0;
      *((_DWORD *)v9 + 98) = 0;
    }
    if ( (unsigned int)v6 < 2 )
    {
LABEL_10:
      v50[0] = 0;
      v13 = (vm_page_size + 31) & -(__int64)vm_page_size;
      if ( vm_allocate(mach_task_self_, v50, v13, 1) )
      {
        result = 0;
        v7 = "Could not vm_allocate fixed range for dynamic config data";
        goto LABEL_12;
      }
      v14 = v50[0];
      strlcpy((char *)v50[0], "dyld_data    v0", 0x10u);
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v2 + 32);
      _platform_memmove(v55, v59, 0xAC0u);
      __chkstk_darwin();
      v16 = &v46[-v15];
      v49 = v17;
      if ( (_DWORD)v6 )
      {
        v18 = 0;
        v19 = 0;
        v20 = v56[6];
        v21 = v16 + 8;
        do
        {
          v22 = *(_DWORD *)&v55[v18 + 384];
          *(v21 - 2) = *(_DWORD *)&v55[v18 + 392];
          *(v21 - 1) = v22;
          v19 += v22;
          if ( v18 )
            v23 = 0;
          else
            v23 = v20;
          *v21 = v23;
          v21 += 3;
          v18 += 2752;
        }
        while ( 2752 * v6 != v18 );
        v24 = v6;
      }
      else
      {
        v24 = 0;
        v19 = 0;
      }
      v25 = &v16[12 * v24];
      *(_QWORD *)v25 = 0x1FFFFFFFFLL;
      *((_DWORD *)v25 + 2) = 0;
      v26 = __chkstk_darwin();
      v30 = &v46[-((unsigned int)v28 * (unsigned __int64)v29)];
      if ( *(_BYTE *)(v3 + 6) )
      {
        v48 = v13;
        v47 = v26;
        v31 = v27;
        v32 = v28;
        dyld4::console((dyld4 *)"Mapping the shared cache system wide\n", v27);
        v28 = v32;
        v27 = v31;
        v26 = v47;
        v13 = v48;
      }
      if ( (_DWORD)v6 )
      {
        v33 = 0;
        v34 = 0;
        v35 = v55;
        do
        {
          v36 = *(unsigned int *)&v55[2752 * v33 + 384];
          v37 = v35;
          if ( (_DWORD)v36 )
          {
            do
            {
              v38 = &v30[48 * v34++];
              v39 = v37[1];
              *v38 = *v37;
              v38[1] = v39;
              v38[2] = v37[2];
              v37 += 3;
              --v36;
            }
            while ( v36 );
          }
          ++v33;
          v35 += 2752;
        }
        while ( v33 != v24 );
      }
      v40 = v50[0];
      v41 = &v30[48 * v19];
      *v41 = *(_QWORD *)&v62[2308];
      v41[1] = v13;
      v41[3] = 0;
      v41[4] = 0;
      v41[2] = v40;
      v41[5] = 0x100000001LL;
      v42 = __shared_region_map_and_slide_2_np(v26, v27, v28, v30);
      vm_deallocate(mach_task_self_, v50[0], v13);
      if ( (_DWORD)v6 )
      {
        v43 = v56;
        do
        {
          if ( *v43 != -1 )
            close(*v43);
          v43 += 688;
          --v24;
        }
        while ( v24 );
      }
      v44 = dyld3::reuseExistingCache(v3, v2);
      if ( v42 )
      {
        if ( (v44 & 1) != 0 )
        {
          return 1;
        }
        else
        {
          result = 0;
          if ( !*(_QWORD *)(v2 + 16) )
            *(_QWORD *)(v2 + 16) = "syscall to map cache into shared region failed";
        }
      }
      else
      {
        if ( !(v44 & 1 | (*(_BYTE *)(v3 + 6) == 0)) )
          dyld4::console((dyld4 *)"mapped dyld cache file system wide\n", v45);
        return 1;
      }
    }
    else
    {
      v10 = &v57;
      v11 = v62;
      v12 = v6 - 1;
      while ( 1 )
      {
        memset(v50, 0, sizeof(v50));
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        if ( (dyld3::preflightSubCacheFile(v3, (int)v50, (int)v10, v58) & 1) == 0 )
          return 0;
        LODWORD(v10) = (_DWORD)v10 + 2752;
        v11 += 4;
        if ( !--v12 )
          goto LABEL_10;
      }
    }
  }
  return result;
}
