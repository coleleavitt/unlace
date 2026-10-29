__int64 __fastcall dyld4::ObjCClassOpt::forEachClass(
        unsigned int *a1,
        const char *a2,
        dyld4::RuntimeState *a3,
        __int64 a4)
{
  unsigned int Index; // w0
  unsigned __int64 v9; // x1
  unsigned int v10; // w22
  __int64 Absolute; // x0
  __int64 v12; // x8
  const char *v13; // x0
  __int64 result; // x0
  __int64 v15; // x24
  __int64 v16; // x26
  __int64 v17; // x28
  __int64 v18; // x8
  unsigned __int64 *v19; // x23
  _QWORD *v20; // x23
  unsigned __int64 v21; // x27
  unsigned __int64 v22; // t1
  dyld4::PrebuiltLoader::BindTargetRef *v23; // x0
  __int64 v24; // x25
  unsigned __int64 v25; // x0
  unsigned __int64 v26; // x22
  unsigned __int64 v27; // x25
  __int64 v28; // x27
  dyld4::PrebuiltLoader::BindTargetRef *v29; // x21
  __int64 v30; // x0
  bool v31; // zf
  char v32; // [xsp+Fh] [xbp-61h] BYREF
  __int64 v33; // [xsp+10h] [xbp-60h] BYREF
  char v34; // [xsp+1Fh] [xbp-51h] BYREF

  Index = dyld4::ObjCStringTable::getIndex((dyld4::ObjCStringTable *)a1, a2);
  if ( Index == -1 )
    return 0;
  v10 = Index;
  Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(nullptr, v9);
  if ( *a1 <= v10 )
    dyld4::ObjCClassOpt::forEachClass(Absolute);
  v12 = (__int64)&a1[2 * v10] + a1[4] + a1[5];
  if ( *(_QWORD *)(v12 + 1056) == Absolute )
    return 0;
  v13 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value(
                        (dyld4::PrebuiltLoader::BindTargetRef *)(v12 + 1056),
                        a3);
  if ( _platform_strcmp(a2, v13) )
    return 0;
  v15 = *a1;
  if ( (unsigned int)v15 <= v10 )
    dyld4::ObjCClassOpt::forEachClass();
  v16 = a1[4];
  v17 = a1[5];
  v18 = (__int64)&a1[2 * v15 + 264] + v16 + v17;
  v19 = (unsigned __int64 *)(v18 + 8 * v15);
  v22 = *v19;
  v20 = v19 + 1;
  v21 = v22;
  v23 = (dyld4::PrebuiltLoader::BindTargetRef *)(v18 + 8LL * v10);
  v24 = *(_QWORD *)v23;
  v25 = dyld4::PrebuiltLoader::BindTargetRef::value(v23, a3);
  v26 = v25;
  if ( v24 < 0 )
  {
    if ( v21 <= v25 )
      dyld4::ObjCClassOpt::forEachClass();
    v33 = v20[v25];
    if ( (v33 & 0x8000000000000000LL) == 0 )
      dyld4::ObjCClassOpt::forEachClass();
    result = dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)&v33, a3);
    if ( result )
    {
      v27 = v21 + ~v26;
      v28 = result - 1;
      v29 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)&a1[4 * v15 + 268 + 2 * v26] + v17 + v16);
      do
      {
        if ( !v27 )
          dyld4::ObjCClassOpt::forEachClass();
        v30 = dyld4::PrebuiltLoader::BindTargetRef::value(v29, a3);
        v32 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, char *))(a4 + 16))(a4, v30, 1, &v32);
        result = v32 != 0;
        --v27;
        if ( v32 )
          v31 = 1;
        else
          v31 = v28 == 0;
        --v28;
        v29 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)v29 + 8);
      }
      while ( !v31 );
    }
  }
  else
  {
    v34 = 0;
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64, char *))(a4 + 16))(a4, v25, 1, &v34);
    return v34 != 0;
  }
  return result;
}
