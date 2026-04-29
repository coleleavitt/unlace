_QWORD *__fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::visitReferenceToObjCSelector(
        _QWORD *a1,
        objc::StringHashTable *this,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        char *__s)
{
  __int64 Index; // x0
  unsigned __int64 v13; // x1
  unsigned __int64 Absolute; // x20
  _QWORD *result; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0
  _QWORD *v19; // x20
  _QWORD *v20; // x1
  __int64 v21; // x0
  char v22; // w1
  __int64 v23; // x8
  __int64 v24; // x9
  unsigned __int64 v25; // x10
  unsigned __int64 v26; // [xsp+8h] [xbp-48h] BYREF
  __int128 v27; // [xsp+10h] [xbp-40h] BYREF
  __int64 v28; // [xsp+20h] [xbp-30h]
  char *v29; // [xsp+28h] [xbp-28h] BYREF

  v29 = __s;
  Index = objc::StringHashTable::tryGetIndex(this, __s);
  if ( (Index & 0xFF00000000LL) != 0 )
  {
    Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(
                 (dyld4::PrebuiltLoader::BindTargetRef *)(unsigned int)Index,
                 v13);
    result = dyld3::OverflowSafeArray<dyld4::PrebuiltLoader::BindTargetRef,4294967295ul>::verifySpace(a1 + 44, 1);
    v16 = a1[44];
    v17 = a1[46];
    a1[46] = v17 + 1;
    *(_QWORD *)(v16 + 8 * v17) = Absolute;
    return result;
  }
  v18 = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find(a3, &v29);
  if ( v18 == *(_QWORD *)(a3 + 56) + 24LL * *(_QWORD *)(a3 + 72) )
  {
    v28 = 0;
    v27 = (unsigned __int64)v29;
    v21 = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::insert(
            a1 + 49,
            &v27);
    if ( (v22 & 1) != 0 )
    {
      *(_QWORD *)&v27 = *a1;
      if ( !a7 )
        std::__throw_bad_optional_access[abi:v15006]();
      *((_QWORD *)&v27 + 1) = a6;
      *(_OWORD *)(v21 + 8) = v27;
      dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef(&v26, &v27);
      result = dyld3::OverflowSafeArray<dyld4::PrebuiltLoader::BindTargetRef,4294967295ul>::verifySpace(a1 + 44, 1);
      v23 = a1[44];
      v24 = a1[46];
      a1[46] = v24 + 1;
      v25 = v26;
      goto LABEL_8;
    }
    v20 = (_QWORD *)(v21 + 8);
    v19 = a1 + 44;
  }
  else
  {
    v19 = a1 + 44;
    v20 = (_QWORD *)(v18 + 8);
  }
  dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef((unsigned __int64 *)&v27, v20);
  result = dyld3::OverflowSafeArray<dyld4::PrebuiltLoader::BindTargetRef,4294967295ul>::verifySpace(v19, 1);
  v23 = a1[44];
  v24 = a1[46];
  a1[46] = v24 + 1;
  v25 = v27;
LABEL_8:
  *(_QWORD *)(v23 + 8 * v24) = v25;
  return result;
}
