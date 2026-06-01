__int64 __fastcall dyld4::PrebuiltLoaderSet::isValid(dyld4::PrebuiltLoaderSet *this, dyld4::RuntimeState *a2)
{
  const char *v4; // x1
  __int64 v5; // x8
  __int128 v6; // q0
  __int64 v7; // x8
  DyldSharedCache *v8; // x0
  const char *v9; // x1
  double v10; // d0
  __int64 MustBeMissingPath; // x0
  __int64 v12; // x21
  unsigned int v13; // w8
  unsigned int v14; // w22
  char v15; // w21
  __int64 v16; // x9
  _BYTE *v17; // x10
  _QWORD v20[7]; // [xsp+8h] [xbp-98h] BYREF
  __n128 v21; // [xsp+40h] [xbp-60h] BYREF
  __int64 v22; // [xsp+50h] [xbp-50h]
  char v23; // [xsp+58h] [xbp-48h]
  __int128 v24; // [xsp+60h] [xbp-40h]

  if ( !(unsigned int)dyld4::PrebuiltLoaderSet::validHeader(this, a2) )
    return 0;
  v5 = *((unsigned int *)this + 7);
  if ( (_DWORD)v5 )
  {
    v6 = *(_OWORD *)((char *)this + v5);
    v24 = v6;
    v7 = *((_QWORD *)a2 + 1);
    v8 = *(DyldSharedCache **)(v7 + 200);
    if ( !v8 )
    {
      if ( *(_BYTE *)(v7 + 187) )
        dyld4::console(
          (dyld4 *)"not using PrebuiltLoaderSet %p because process does not have a dyld cache\n",
          v4,
          *(double *)&v6,
          this);
      return 0;
    }
    v21 = 0u;
    *(_QWORD *)&v10 = DyldSharedCache::getUUID(v8, &v21).n128_u64[0];
    if ( v24 != *(_OWORD *)&v21 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
        dyld4::console((dyld4 *)"not using PrebuiltLoaderSet %p because cache UUID does not match\n", v9, v10, this);
      return 0;
    }
  }
  v21.n128_u64[0] = 0;
  v21.n128_u64[1] = (unsigned __int64)&v21;
  v22 = 0x2000000000LL;
  v23 = 0;
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 0x40000000;
  v20[2] = ___ZNK5dyld417PrebuiltLoaderSet7isValidERNS_12RuntimeStateE_block_invoke;
  v20[3] = &unk_963C8;
  v20[5] = this;
  v20[6] = a2;
  v20[4] = &v21;
  MustBeMissingPath = dyld4::PrebuiltLoaderSet::forEachMustBeMissingPath(this, v20);
  v12 = 0;
  if ( !*(_BYTE *)(v21.n128_u64[1] + 24) )
  {
    v13 = *((_DWORD *)this + 3);
    if ( !v13 )
      goto LABEL_17;
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v13 <= (unsigned __int16)v14 )
        dyld4::PrebuiltLoaderSet::isValid(MustBeMissingPath);
      MustBeMissingPath = dyld4::PrebuiltLoader::isValid(
                            (dyld4::PrebuiltLoaderSet *)((char *)this
                                                       + *(unsigned int *)((char *)this
                                                                         + 4 * (unsigned __int16)v14
                                                                         + *((unsigned int *)this + 4))),
                            a2);
      v15 |= MustBeMissingPath ^ 1;
      ++v14;
      v13 = *((_DWORD *)this + 3);
    }
    while ( v14 < v13 );
    if ( (v15 & 1) != 0 )
    {
      v12 = 0;
    }
    else
    {
LABEL_17:
      v16 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 336LL);
      if ( (_DWORD)v16 )
      {
        v17 = *((_BYTE **)a2 + 83);
        do
        {
          if ( *v17++ )
            ++v13;
          --v16;
        }
        while ( v16 );
      }
      *((_DWORD *)a2 + 177) = v13;
      v12 = 1;
    }
  }
  _Block_object_dispose(&v21, 8);
  return v12;
}
