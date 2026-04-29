__int64 __fastcall dyld4::Atlas::SharedCache::SharedCache(
        __int64 a1,
        __int64 a2,
        dyld4::FileRecord *a3,
        __int64 a4,
        char *a5,
        char a6)
{
  __int128 *v10; // x26
  lsl::AllocationMetadata **v11; // x21
  lsl::AllocationMetadata *v12; // x0
  __int128 v13; // q0
  _DWORD *v14; // x8
  __int64 v15; // x24
  unsigned int v16; // w22
  vm_size_t v17; // x2
  __int128 v18; // q0
  _DWORD *v19; // x8
  __int64 v20; // x9
  unsigned int v21; // w8
  __int64 v22; // x8
  __int64 v23; // x10
  unsigned __int64 v24; // x25
  _QWORD *v25; // x11
  unsigned __int64 v26; // x26
  __int64 i; // x9
  __int64 v28; // x9
  __int64 v29; // x10
  __int64 v30; // x9
  _QWORD *v31; // x8
  char *v32; // x22
  _DWORD *v33; // x8
  vm_size_t v34; // x2
  __int128 v35; // q0
  _DWORD *v36; // x8
  __int64 v37; // x9
  _QWORD *v38; // x8
  __int128 v40; // [xsp+0h] [xbp-90h] BYREF
  _DWORD *v41; // [xsp+10h] [xbp-80h]
  char v42; // [xsp+18h] [xbp-78h]
  __int128 v43; // [xsp+20h] [xbp-70h] BYREF
  _DWORD *v44; // [xsp+30h] [xbp-60h]
  char v45; // [xsp+38h] [xbp-58h]

  *(_QWORD *)a1 = a2;
  dyld4::FileRecord::FileRecord(a1 + 8, a3);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  v10 = (__int128 *)(a1 + 112);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  v11 = (lsl::AllocationMetadata **)(a1 + 144);
  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(a1 + 144, a4);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = a5;
  *(_BYTE *)(a1 + 168) = a6;
  v12 = *(lsl::AllocationMetadata **)(a1 + 144);
  if ( !v12 )
    dyld4::Atlas::SharedCache::SharedCache();
  dyld4::Atlas::Mapper::map<dyld_cache_header>(v12, a5, vm_page_size, (__int64)&v43);
  if ( v10 != &v43 )
  {
    v13 = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a1 + 112) = v43;
    v43 = v13;
    v14 = *(_DWORD **)(a1 + 128);
    *(_QWORD *)(a1 + 128) = v44;
    v44 = v14;
    LOBYTE(v14) = *(_BYTE *)(a1 + 136);
    *(_BYTE *)(a1 + 136) = v45;
    v45 = (char)v14;
  }
  dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer((__int64)&v43);
  v15 = *(_QWORD *)(a1 + 128);
  v16 = *(_DWORD *)(v15 + 16);
  if ( v16 < 0x18C )
    v17 = *(unsigned int *)(v15 + 24) + 32LL * *(unsigned int *)(v15 + 28);
  else
    v17 = *(unsigned int *)(v15 + 392) + 56LL * *(unsigned int *)(v15 + 396);
  if ( v17 > vm_page_size )
  {
    dyld4::Atlas::Mapper::map<dyld_cache_header>(
      *(lsl::AllocationMetadata **)(a1 + 144),
      *(char **)(a1 + 160),
      v17,
      (__int64)&v43);
    if ( v10 != &v43 )
    {
      v18 = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a1 + 112) = v43;
      v43 = v18;
      v19 = *(_DWORD **)(a1 + 128);
      *(_QWORD *)(a1 + 128) = v44;
      v44 = v19;
      LOBYTE(v19) = *(_BYTE *)(a1 + 136);
      *(_BYTE *)(a1 + 136) = v45;
      v45 = (char)v19;
    }
    dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer((__int64)&v43);
    v15 = *(_QWORD *)(a1 + 128);
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(v15 + 88);
  v20 = *(_QWORD *)(v15 + 224);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 160) - v20;
  v21 = *(_DWORD *)(v15 + 16);
  if ( v21 < 0x18C )
  {
    v23 = *(unsigned int *)(v15 + 316);
    if ( (_DWORD)v23 )
    {
      v24 = 0;
      v25 = (_QWORD *)(*(unsigned int *)(v15 + 312) + v15 + 8);
      do
      {
        if ( v24 <= *v25 + *(v25 - 1) )
          v24 = *v25 + *(v25 - 1);
        v25 += 7;
        --v23;
      }
      while ( v23 );
    }
    else
    {
      v24 = 0;
    }
    if ( v16 >= 0x18C && *(_DWORD *)(v15 + 396) )
    {
      v26 = 0;
      for ( i = v15; ; v21 = *(_DWORD *)(i + 16) )
      {
        v28 = v15 + *(unsigned int *)(i + 392);
        v29 = v28 + 24 * v26 + 16;
        v30 = v28 + 56 * v26 + 16;
        if ( v21 >= 0x1C9 )
          v31 = (_QWORD *)v30;
        else
          v31 = (_QWORD *)v29;
        v32 = &a5[*v31];
        dyld4::Atlas::Mapper::map<dyld_cache_header>(*v11, v32, vm_page_size, (__int64)&v43);
        v33 = v44;
        if ( v44[4] < 0x18Cu )
          v34 = (unsigned int)v44[6] + 32LL * (unsigned int)v44[7];
        else
          v34 = (unsigned int)v44[98] + 56LL * (unsigned int)v44[99];
        if ( v34 > vm_page_size )
        {
          dyld4::Atlas::Mapper::map<dyld_cache_header>(*v11, v32, v34, (__int64)&v40);
          v35 = v43;
          v43 = v40;
          v40 = v35;
          v36 = v44;
          v44 = v41;
          v41 = v36;
          LOBYTE(v36) = v45;
          v45 = v42;
          v42 = (char)v36;
          dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer((__int64)&v40);
          v33 = v44;
        }
        v37 = (unsigned int)v33[79];
        if ( (_DWORD)v37 )
        {
          v38 = (_QWORD *)((char *)v33 + (unsigned int)v33[78] + 8);
          do
          {
            if ( v24 <= *v38 + *(v38 - 1) )
              v24 = *v38 + *(v38 - 1);
            v38 += 7;
            --v37;
          }
          while ( v37 );
        }
        dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer((__int64)&v43);
        ++v26;
        i = *(_QWORD *)(a1 + 128);
        if ( v26 >= *(unsigned int *)(i + 396) )
          break;
      }
      v20 = *(_QWORD *)(i + 224);
    }
    v22 = v24 - v20;
  }
  else
  {
    v22 = *(_QWORD *)(v15 + 232);
  }
  *(_QWORD *)(a1 + 104) = v22;
  return a1;
}
