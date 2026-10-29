__int64 __fastcall dyld4::RuntimeState::checkHiddenCacheAddr(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v8; // x22
  __int64 v9; // x21
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x8
  char v13; // [xsp+7h] [xbp-49h] BYREF
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v15; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v16; // [xsp+18h] [xbp-38h] BYREF
  _WORD v17[5]; // [xsp+26h] [xbp-2Ah] BYREF

  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 4) & 1) == 0 )
    {
      v8 = result;
      memset(v17, 0, sizeof(v17));
      result = dyld4::JustInTimeLoader::overridesDylibInCache(a2, &v17[1], v17);
      if ( (_DWORD)result )
      {
        v15 = 0;
        v16 = 0;
        result = DyldSharedCache::getIndexedImageEntry(
                   *(DyldSharedCache **)(*(_QWORD *)(v8 + 8) + 200LL),
                   v17[0],
                   &v16,
                   &v15);
        if ( result )
        {
          v14 = 0;
          v13 = 0;
          result = dyld3::MachOLoaded::hasExportedSymbol(result, a4, 0, &v14, &v13);
          if ( (_DWORD)result )
          {
            v9 = v14;
            result = dyld3::OverflowSafeArray<dyld4::RuntimeState::HiddenCacheAddr,4294967295ul>::verifySpace(a5, 1);
            v10 = *a5;
            v11 = a5[2];
            a5[2] = v11 + 1;
            v12 = (_QWORD *)(v10 + 16 * v11);
            *v12 = v9;
            v12[1] = a3;
          }
        }
      }
    }
  }
  return result;
}
