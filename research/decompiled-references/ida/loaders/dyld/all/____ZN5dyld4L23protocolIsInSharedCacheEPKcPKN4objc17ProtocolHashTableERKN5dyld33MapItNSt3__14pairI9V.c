__int64 __fastcall ___ZN5dyld4L23protocolIsInSharedCacheEPKcPKN4objc17ProtocolHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEE_block_invoke(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        _BYTE *a4)
{
  __int64 result; // x0
  unsigned __int16 v7; // [xsp+Eh] [xbp-12h] BYREF

  v7 = a3;
  result = dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::find(
             *(_QWORD **)(a1 + 40),
             &v7);
  if ( result != *(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL) + 32LL * *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
    *a4 = 1;
  }
  return result;
}
