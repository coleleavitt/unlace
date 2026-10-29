__int64 dyld3::preflightCacheFile()
{
  __int64 v0; // x0
  int v1; // w3
  int v2; // w21
  __int64 v3; // x2
  __int64 v4; // x20
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x22
  const char *v8; // x8
  off_t st_size; // x23
  __darwin_ino64_t st_ino; // x9
  __int64 v12; // x25
  int v13; // w8
  unsigned int v14; // w26
  char *v15; // x8
  int v16; // w9
  char *v17; // x27
  const char *v18; // x10
  int v19; // w10
  __int64 *v20; // x11
  unsigned int v21; // w12
  __int64 v22; // x13
  __int64 v23; // t1
  __int64 v24; // x14
  int v25; // w9
  void *v26; // x0
  void *v27; // x23
  __int64 v28; // x11
  unsigned int v29; // w8
  __int64 v30; // x9
  __int64 v31; // x10
  __int64 v32; // x11
  int v33; // w14
  int v34; // w16
  __int64 v35; // x15
  __int64 v36; // x17
  char *v37; // x16
  unsigned int v38; // w0
  __int64 v39; // x0
  __int64 v40; // x2
  int v41; // w1
  __int64 v42; // x15
  __int64 v43; // x8
  _DWORD *v44; // x9
  __int64 *v45; // x10
  __int64 v46; // x11
  _OWORD *v47; // x12
  __int128 v48; // q1
  __int64 v49; // x10
  __int64 v50; // x8
  bool v51; // w9
  stat v52; // [xsp+10h] [xbp-4F20h] BYREF
  _BYTE v53[24]; // [xsp+A0h] [xbp-4E90h] BYREF
  __int64 v54; // [xsp+B8h] [xbp-4E78h] BYREF
  _QWORD v55[7]; // [xsp+EA0h] [xbp-4090h] BYREF
  _QWORD __buf[2]; // [xsp+ED8h] [xbp-4058h] BYREF
  unsigned int v57; // [xsp+EE8h] [xbp-4048h]
  unsigned int v58; // [xsp+EECh] [xbp-4044h]
  _BYTE v59[16]; // [xsp+EF0h] [xbp-4040h]
  unsigned __int64 v60; // [xsp+F00h] [xbp-4030h]
  __int64 v61; // [xsp+F08h] [xbp-4028h]
  __int64 v62; // [xsp+F10h] [xbp-4020h]
  __int64 v63; // [xsp+F18h] [xbp-4018h]
  __int64 v64; // [xsp+F40h] [xbp-3FF0h]
  int v65; // [xsp+FB0h] [xbp-3F80h]
  char v66; // [xsp+FB5h] [xbp-3F7Bh]
  __int128 v67; // [xsp+FB8h] [xbp-3F78h]
  __int64 v68; // [xsp+FC8h] [xbp-3F68h]
  unsigned int v69; // [xsp+1010h] [xbp-3F20h]
  int v70; // [xsp+1048h] [xbp-3EE8h]
  unsigned int v71; // [xsp+1060h] [xbp-3ED0h]
  unsigned int v72; // [xsp+1064h] [xbp-3ECCh]
  int v73; // [xsp+10A0h] [xbp-3E90h]
  __int64 v74; // [xsp+10C8h] [xbp-3E68h]
  __int64 v75; // [xsp+10D0h] [xbp-3E60h]

  v0 = __chkstk_darwin();
  v2 = v1;
  v4 = v3;
  v6 = v5;
  v7 = v0;
  if ( fstat(v1, &v52) )
  {
    v8 = "shared cache file stat() failed";
LABEL_7:
    *(_QWORD *)(v6 + 16) = v8;
LABEL_8:
    close(v2);
    return 0;
  }
  st_size = v52.st_size;
  st_ino = v52.st_ino;
  *(_QWORD *)(v6 + 32) = v52.st_dev;
  *(_QWORD *)(v6 + 40) = st_ino;
  if ( pread(v2, __buf, 0x4000u, 0) != 0x4000 )
  {
    v8 = "shared cache file pread() failed";
    goto LABEL_7;
  }
  if ( __buf[0] ^ 0x2031765F646C7964LL | __buf[1] ^ 0x6534366D726120LL )
  {
    v8 = "shared cache file has wrong magic";
    goto LABEL_7;
  }
  v12 = v57;
  if ( v57 >= 0xE0 )
  {
    v13 = *(_DWORD *)(v7 + 12);
    if ( v65 == v13 )
    {
      if ( (v66 & 2) != 0 )
      {
LABEL_20:
        v8 = "shared cache file is for a different platform";
        goto LABEL_7;
      }
    }
    else if ( !v70 || v70 != v13 )
    {
      goto LABEL_20;
    }
  }
  v14 = v58;
  if ( v58 - 9 <= 0xFFFFFFF7 )
  {
    v8 = "shared cache file mappings are invalid";
    goto LABEL_7;
  }
  v15 = (char *)__buf + v57;
  if ( v58 < 2 )
  {
    v17 = nullptr;
    v16 = 0;
  }
  else
  {
    if ( *((_DWORD *)v15 + 14) == 3 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      if ( v58 >= 3 )
        *(_QWORD *)(v6 + 16) = "shared cache data mapping was expected";
    }
    v17 = &v15[32 * v14 - 32];
  }
  if ( *((_QWORD *)v15 + 2) )
  {
    v18 = "shared cache text file offset is invalid";
    goto LABEL_32;
  }
  if ( v61 + v60 != st_size )
  {
    v18 = "shared cache code signature size is invalid";
LABEL_32:
    *(_QWORD *)(v6 + 16) = v18;
    if ( v14 >= 2 )
    {
LABEL_33:
      v19 = *((_DWORD *)v15 + 6) | 4;
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if ( v14 >= 2 )
  {
    if ( *((_DWORD *)v17 + 6) != 1 )
      *(_QWORD *)(v6 + 16) = "shared cache linkedit permissions are invalid";
    goto LABEL_33;
  }
LABEL_34:
  v19 = *((_DWORD *)v15 + 6);
LABEL_35:
  if ( v19 != 5 )
    *(_QWORD *)(v6 + 16) = "shared cache text permissions are invalid";
  if ( *(_QWORD *)(v6 + 16) )
    goto LABEL_8;
  v20 = (_QWORD *)((char *)&__buf[2] + v12);
  v21 = 1;
  while ( v14 != v21 )
  {
    v22 = *(v20 - 1);
    if ( (unsigned __int64)(v22 + *(v20 - 2)) <= *(_QWORD *)&v15[32 * v21] )
    {
      v23 = *v20;
      v20 += 4;
      v24 = *(_QWORD *)&v15[32 * v21++ + 16];
      if ( v23 + v22 == v24 )
        continue;
    }
    v8 = "shared cache mappings overlap";
    goto LABEL_7;
  }
  if ( v16 && v14 != 2 )
  {
    v25 = 2;
    while ( *(_DWORD *)&v15[32 * (v25 - 1) + 24] == 3 )
    {
      if ( v14 == ++v25 )
        goto LABEL_48;
    }
    v8 = "shared cache data mappings have wrong permissions";
    goto LABEL_7;
  }
LABEL_48:
  v55[0] = 0;
  v55[1] = v60;
  v55[2] = v61;
  if ( fcntl(v2, 97, v55) == -1 )
  {
    v8 = "code signature registration for shared cache failed";
    goto LABEL_7;
  }
  if ( v55[0] < v60 )
  {
    v8 = "code signature does not cover entire shared cache file";
    goto LABEL_7;
  }
  v26 = mmap(nullptr, 0x4000u, 5, 2, v2, 0);
  if ( v26 == (void *)-1LL )
  {
    v8 = "first page of shared cache not mmap()able";
    goto LABEL_7;
  }
  v27 = v26;
  if ( _platform_memcmp(v26, __buf, 0x4000u) )
  {
    v8 = "first page of mmap()ed shared cache not valid";
    goto LABEL_7;
  }
  munmap(v27, 0x4000u);
  v28 = v58;
  v29 = v57;
  *(_DWORD *)(v4 + 384) = v58;
  if ( (_DWORD)v28 )
  {
    v30 = 0;
    v31 = 0;
    v32 = 48 * v28;
    do
    {
      v33 = *(_DWORD *)&v59[v12 + 4];
      if ( v29 > 0x138 )
      {
        v37 = (char *)__buf + v69 + v30;
        v35 = *((_QWORD *)v37 + 3);
        v36 = *((_QWORD *)v37 + 4);
        v38 = *((_DWORD *)v37 + 10);
        v34 = ~(v38 << 6) & 0x40;
        if ( ((*(_BYTE *)(v7 + 8) == 0) & (v38 >> 2)) != 0 )
          v33 |= 2u;
      }
      else if ( v31 == 48 )
      {
        v34 = 0;
        v35 = v62;
        v36 = v63;
      }
      else
      {
        v35 = 0;
        v36 = 0;
        v34 = 0;
      }
      *(_DWORD *)(v4 + 392) = v2;
      v39 = v4 + v31;
      *(_OWORD *)v39 = *(_OWORD *)((char *)__buf + v12);
      v40 = *(_QWORD *)((char *)&__buf[2] + v12);
      *(_QWORD *)(v39 + 24) = 0;
      *(_QWORD *)(v39 + 32) = 0;
      *(_QWORD *)(v39 + 16) = v40;
      v41 = *(_DWORD *)&v59[v12];
      *(_DWORD *)(v39 + 40) = v41;
      *(_DWORD *)(v39 + 44) = v33;
      if ( v36 )
      {
        if ( v14 <= 1 )
          std::__throw_bad_optional_access[abi:v15006]();
        v42 = v35 - *((_QWORD *)v17 + 2) + *(_QWORD *)v17;
        *(_QWORD *)(v39 + 24) = v36;
        *(_QWORD *)(v39 + 32) = v42;
        *(_DWORD *)(v39 + 40) = v41 | v34 | 0x20;
        *(_DWORD *)(v39 + 44) = v33 | v34 | 0x20;
      }
      v31 += 48;
      v12 += 32;
      v30 += 56;
    }
    while ( v32 != v31 );
  }
  *(_BYTE *)(v4 + 389) = v29 > 0x1C8;
  if ( v29 > 0x1C8 )
  {
    if ( pread(v2, v53, 0xE00u, v71) != 3584 )
    {
      v8 = "shared cache file pread() failed, could not read subcache entries";
      goto LABEL_7;
    }
    if ( v72 )
    {
      v43 = 0;
      v44 = (_DWORD *)(v4 + 428);
      v45 = &v54;
      v46 = 32LL * v72;
      do
      {
        *v44++ = v43;
        v47 = (_OWORD *)(v4 + (unsigned int)v43 + 684);
        v48 = *((_OWORD *)v45 + 1);
        *v47 = *(_OWORD *)v45;
        v47[1] = v48;
        v45 += 7;
        v43 += 32;
      }
      while ( v46 != v43 );
    }
  }
  *(_OWORD *)(v4 + 400) = v67;
  *(_QWORD *)(v4 + 416) = v68;
  *(_BYTE *)(v4 + 388) = *(_BYTE *)(v7 + 11);
  *(_DWORD *)(v4 + 424) = DyldSharedCache::numSubCaches((DyldSharedCache *)__buf) + 1;
  v49 = v75;
  v50 = v64;
  *(_QWORD *)(v4 + 2736) = v74 + v67;
  *(_QWORD *)(v4 + 2744) = v49;
  v51 = v50 == 2 && v73 == 0;
  *(_BYTE *)(v6 + 48) = v50 == 0 || v51;
  return 1;
}
