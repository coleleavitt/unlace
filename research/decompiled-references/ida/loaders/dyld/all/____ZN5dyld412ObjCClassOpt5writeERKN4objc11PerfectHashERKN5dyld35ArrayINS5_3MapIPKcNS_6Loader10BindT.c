unsigned __int64 *__fastcall ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke(
        __int64 a1,
        char **a2,
        __int128 **a3,
        dyld4::PrebuiltLoader::BindTargetRef *a4)
{
  unsigned int Index; // w0
  unsigned __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 *result; // x0
  __int64 v12; // x8
  unsigned __int64 Absolute; // x0
  unsigned __int64 v14; // x1
  __int64 v15; // x8
  __int64 v16; // x22
  __int128 *v17; // t1
  __int64 v18; // x22
  unsigned __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  __int128 v20; // [xsp+10h] [xbp-30h] BYREF

  Index = dyld4::ObjCStringTable::getIndex(*(dyld4::ObjCStringTable **)(a1 + 48), *a2);
  if ( Index == -1 )
    ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke_cold_1();
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( *(_QWORD *)(v9 + 56) <= (unsigned __int64)Index )
    ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke_cold_5();
  v10 = Index;
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL * Index) != *(_QWORD *)(a1 + 56) )
    ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke_cold_4();
  if ( a4 == (dyld4::PrebuiltLoader::BindTargetRef *)((char *)&dword_0 + 1) )
  {
    result = dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef((unsigned __int64 *)&v20, *a3);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    if ( *(_QWORD *)(v12 + 56) <= v10 )
      ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke_cold_2(result);
    *(_QWORD *)(*(_QWORD *)(v12 + 40) + 8 * v10) = v20;
  }
  else
  {
    Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(
                 *(dyld4::PrebuiltLoader::BindTargetRef **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 56LL),
                 v8);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    if ( *(_QWORD *)(v15 + 56) <= v10 )
      ___ZN5dyld412ObjCClassOpt5writeERKN4objc11PerfectHashERKN5dyld35ArrayINS5_3MapIPKcNS_6Loader10BindTargetENS5_11HashCStringENS5_12EqualCStringEE5NodeTEEERKNS5_8MultiMapIS9_SB_NS5_16HashCStringMultiENS5_17EqualCStringMultiEEEjj_block_invoke_cold_3(Absolute);
    *(_QWORD *)(*(_QWORD *)(v15 + 40) + 8 * v10) = Absolute;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL;
    *(_QWORD *)&v20 = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a4, v14);
    for ( result = (unsigned __int64 *)dyld3::Array<dyld4::PrebuiltLoader::BindTargetRef>::push_back(v16, &v20);
          a4;
          a4 = (dyld4::PrebuiltLoader::BindTargetRef *)((char *)a4 - 1) )
    {
      v17 = *a3++;
      v20 = *v17;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL;
      dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef(&v19, &v20);
      result = (unsigned __int64 *)dyld3::Array<dyld4::PrebuiltLoader::BindTargetRef>::push_back(v18, &v19);
    }
  }
  return result;
}
