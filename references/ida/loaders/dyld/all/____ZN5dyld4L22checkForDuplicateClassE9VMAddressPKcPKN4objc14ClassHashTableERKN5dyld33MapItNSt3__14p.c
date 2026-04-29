__int64 __fastcall ___ZN5dyld4L22checkForDuplicateClassE9VMAddressPKcPKN4objc14ClassHashTableERKN5dyld33MapItNSt3__14pairIS0_PKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERKNS8_IS2_NSB_10BindTargetENS7_11HashCStringENS7_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        _BYTE *a4)
{
  __int64 result; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x8
  __int64 v11; // x0
  __int128 v12; // [xsp+0h] [xbp-50h] BYREF
  __int64 v13; // [xsp+10h] [xbp-40h]
  __int16 v14; // [xsp+1Eh] [xbp-32h] BYREF

  v14 = a3;
  result = dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::find(
             *(_QWORD *)(a1 + 32),
             &v14);
  if ( result != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 32LL * *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
  {
    v8 = result;
    v9 = *(_QWORD *)(result + 24);
    result = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find(
               *(_QWORD **)(a1 + 40),
               (const char **)(a1 + 48));
    if ( result == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) )
    {
      if ( !*(_BYTE *)(a1 + 64) || !*(_BYTE *)(v8 + 16) )
        std::__throw_bad_optional_access[abi:v15006]();
      v10 = a2 - *(_QWORD *)(v8 + 8) + *(_QWORD *)(a1 + 56);
      v11 = *(_QWORD *)(a1 + 72) + 160LL;
      *(_QWORD *)&v12 = *(_QWORD *)(a1 + 48);
      *((_QWORD *)&v12 + 1) = v9;
      v13 = v10;
      result = dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::insert(
                 v11,
                 &v12);
    }
    *a4 = 1;
  }
  return result;
}
