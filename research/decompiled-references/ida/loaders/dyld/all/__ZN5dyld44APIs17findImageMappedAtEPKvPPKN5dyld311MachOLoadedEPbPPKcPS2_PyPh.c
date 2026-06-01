__int64 __fastcall dyld4::APIs::findImageMappedAt(
        dyld4::APIs *this,
        DyldSharedCache *a2,
        const dyld3::MachOLoaded **a3,
        bool *a4,
        const char **a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned __int8 *a8)
{
  unsigned __int64 *v9; // x20
  char v16; // w28
  __int64 v17; // x8
  DyldSharedCache *v18; // x27
  bool v19; // cf
  DyldSharedCache *v20; // x20
  __int64 ImageMappedAt; // x19
  __int64 v23; // x10
  const void **v24; // x9
  __int64 v25; // x10
  unsigned __int64 *v26; // [xsp+0h] [xbp-1D0h]
  _QWORD v27[13]; // [xsp+8h] [xbp-1C8h] BYREF
  char v28; // [xsp+70h] [xbp-160h]
  unsigned __int8 v29; // [xsp+77h] [xbp-159h] BYREF
  unsigned __int64 v30; // [xsp+78h] [xbp-158h] BYREF
  void *v31; // [xsp+80h] [xbp-150h] BYREF
  unsigned __int8 v32; // [xsp+8Fh] [xbp-141h] BYREF
  _QWORD v33[13]; // [xsp+90h] [xbp-140h] BYREF
  _QWORD v34[6]; // [xsp+F8h] [xbp-D8h] BYREF
  dyld4::Loader *v35; // [xsp+128h] [xbp-A8h] BYREF
  dyld4::Loader **v36; // [xsp+130h] [xbp-A0h]
  __int64 v37; // [xsp+138h] [xbp-98h]
  int v38; // [xsp+140h] [xbp-90h]
  __int64 v39; // [xsp+148h] [xbp-88h] BYREF
  __int64 *v40; // [xsp+150h] [xbp-80h]
  __int64 v41; // [xsp+158h] [xbp-78h]
  char v42; // [xsp+160h] [xbp-70h]

  v9 = a7;
  v16 = 0;
  v39 = 0;
  v40 = &v39;
  v41 = 0x2000000000LL;
  v42 = 0;
  v17 = *((_QWORD *)this + 1);
  v18 = *(DyldSharedCache **)(v17 + 200);
  if ( v18 )
    v19 = v18 >= a2;
  else
    v19 = 1;
  if ( !v19 )
  {
    if ( (DyldSharedCache *)((char *)v18
                           + DyldSharedCache::mappedSize(
                               *(DyldSharedCache **)(v17 + 200),
                               (__int64)a2,
                               (__int64)a3,
                               (__int64)a4,
                               (__int64)a5,
                               (__int64)a6,
                               (__int64)a7)) <= a2 )
    {
      v16 = 0;
    }
    else
    {
      v26 = v9;
      v20 = (DyldSharedCache *)((char *)v18 - DyldSharedCache::unslidLoadAddress(v18));
      v35 = nullptr;
      v36 = &v35;
      v37 = 0x2000000000LL;
      v38 = 0;
      v34[0] = _NSConcreteStackBlock;
      v34[1] = 0x40000000;
      v34[2] = ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke;
      v34[3] = &unk_967F0;
      v34[4] = &v35;
      v34[5] = a2 - v20;
      DyldSharedCache::forEachRange(v18, v34, 0);
      if ( *((_DWORD *)v36 + 6) == 5 )
      {
        v33[0] = _NSConcreteStackBlock;
        v33[1] = 0x40000000;
        v33[2] = ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke_2;
        v33[3] = &unk_96818;
        v33[6] = a3;
        v33[7] = v20;
        v33[8] = a4;
        v33[9] = a5;
        v33[10] = a6;
        v33[11] = v26;
        v33[12] = a8;
        v33[4] = &v39;
        v33[5] = a2 - v20;
        DyldSharedCache::forEachImageTextSegment((__int64)v18, (__int64)v33);
        if ( *((_BYTE *)v40 + 24) )
        {
          _Block_object_dispose(&v35, 8);
LABEL_27:
          ImageMappedAt = 1;
          goto LABEL_30;
        }
      }
      _Block_object_dispose(&v35, 8);
      v16 = 1;
      v9 = v26;
    }
  }
  v35 = nullptr;
  v32 = 0;
  if ( (unsigned int)dyld4::RuntimeState::inPermanentRange(
                       (__int64)this,
                       (unsigned __int64)a2,
                       (unsigned __int64)a2 + 1,
                       &v32,
                       &v35) )
  {
    if ( a3 )
      *a3 = (const dyld3::MachOLoaded *)dyld4::Loader::loadAddress(v35, this);
    if ( a4 )
      *a4 = 1;
    if ( a5 )
      *a5 = (const char *)dyld4::Loader::path(v35);
    if ( a6 || v9 )
    {
      v30 = 0;
      v31 = nullptr;
      v29 = 0;
      if ( (unsigned int)dyld4::Loader::contains(v35, this, a2, (const void **)&v31, &v30, &v29) )
      {
        if ( a6 )
          *a6 = v31;
        if ( v9 )
          *v9 = v30;
      }
    }
    if ( a8 )
      *a8 = v32;
    goto LABEL_27;
  }
  v27[0] = _NSConcreteStackBlock;
  v27[1] = 0x40000000;
  v27[2] = ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke_3;
  v27[3] = &unk_96840;
  v28 = v16;
  v27[6] = a2;
  v27[7] = a3;
  v27[8] = a4;
  v27[9] = a5;
  v27[10] = a6;
  v27[11] = v9;
  v27[12] = a8;
  v27[4] = &v39;
  v27[5] = this;
  dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v27);
  if ( *((_BYTE *)v40 + 24) || (v23 = *((_QWORD *)this + 26)) == 0 )
  {
LABEL_29:
    ImageMappedAt = *((unsigned __int8 *)v40 + 24) != 0;
  }
  else
  {
    v24 = (const void **)(*((_QWORD *)this + 25) + 8LL);
    v25 = 16 * v23;
    while ( *(v24 - 1) != a2 )
    {
      v24 += 2;
      v25 -= 16;
      if ( !v25 )
        goto LABEL_29;
    }
    ImageMappedAt = dyld4::APIs::findImageMappedAt(this, *v24, a3, a4, a5, (const void **)a6, v9, a8);
  }
LABEL_30:
  _Block_object_dispose(&v39, 8);
  return ImageMappedAt;
}
