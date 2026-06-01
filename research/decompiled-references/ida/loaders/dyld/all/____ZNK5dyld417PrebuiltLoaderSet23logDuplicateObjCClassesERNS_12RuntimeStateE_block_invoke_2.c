unsigned __int64 __fastcall ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2(
        unsigned __int64 result,
        dyld4::PrebuiltLoader::BindTargetRef *this,
        __int64 a3)
{
  __int64 v4; // x19
  __int64 v5; // x0
  const char *v6; // x23
  __int64 v7; // x8
  const void *v8; // x21
  dyld4::PrebuiltLoader::BindTargetRef *v9; // x20
  __int64 v10; // x24
  __int64 v11; // x0
  const char *v12; // x25
  const void *v13; // x0
  __int16 v14; // [xsp+28h] [xbp-58h] BYREF
  __int16 v15; // [xsp+30h] [xbp-50h] BYREF
  const char *v16; // [xsp+38h] [xbp-48h] BYREF

  if ( *(_QWORD *)(a3 + 16) != 1 )
  {
    v4 = result;
    v16 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value(this, *(dyld4::RuntimeState **)(result + 40));
    result = dyld3::Map<char const*,bool,dyld3::HashCString,dyld3::EqualCString>::find(
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 40LL,
               &v16);
    if ( result == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 96LL)
                 + 16LL * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL) )
    {
      if ( !*(_QWORD *)(a3 + 16) )
        ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2_cold_1();
      if ( (**(_QWORD **)a3 & 0x8000000000000000LL) != 0 )
        ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2_cold_2();
      v15 = **(_QWORD **)a3;
      v5 = dyld4::Loader::LoaderRef::loader((dyld4::Loader::LoaderRef *)&v15, *(const dyld4::RuntimeState **)(v4 + 40));
      if ( *(_WORD *)(v5 + 8) )
        v6 = (const char *)(v5 + *(unsigned __int16 *)(v5 + 8));
      else
        v6 = nullptr;
      if ( !*(_QWORD *)(a3 + 16) )
        ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2_cold_3();
      result = dyld4::PrebuiltLoader::BindTargetRef::value(
                 *(dyld4::PrebuiltLoader::BindTargetRef **)a3,
                 *(dyld4::RuntimeState **)(v4 + 40));
      v7 = *(_QWORD *)(a3 + 16);
      if ( v7 != 1 )
      {
        v8 = (const void *)result;
        v9 = (dyld4::PrebuiltLoader::BindTargetRef *)(*(_QWORD *)a3 + 8LL);
        v10 = 8 * v7 - 8;
        do
        {
          if ( (*(_QWORD *)v9 & 0x8000000000000000LL) != 0 )
            ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke_2_cold_4();
          v14 = *(_QWORD *)v9;
          v11 = dyld4::Loader::LoaderRef::loader(
                  (dyld4::Loader::LoaderRef *)&v14,
                  *(const dyld4::RuntimeState **)(v4 + 40));
          if ( *(_WORD *)(v11 + 8) )
            v12 = (const char *)(v11 + *(unsigned __int16 *)(v11 + 8));
          else
            v12 = nullptr;
          v13 = (const void *)dyld4::PrebuiltLoader::BindTargetRef::value(v9, *(dyld4::RuntimeState **)(v4 + 40));
          result = dyld4::RuntimeState::log(
                     *(dyld4::RuntimeState **)(v4 + 40),
                     "Class %s is implemented in both %s (%p) and %s (%p). One of the two will be used. Which one is undefined.\n",
                     v16,
                     v6,
                     v8,
                     v12,
                     v13);
          v9 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)v9 + 8);
          v10 -= 8;
        }
        while ( v10 );
      }
    }
  }
  return result;
}
