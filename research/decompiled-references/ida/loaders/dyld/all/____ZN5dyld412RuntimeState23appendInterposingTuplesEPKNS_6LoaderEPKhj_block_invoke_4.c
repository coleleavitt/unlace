__int64 __fastcall ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_4(
        __int64 result,
        __int64 a2,
        int a3,
        __int64 a4,
        const char *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v8; // x23
  _QWORD *v9; // x20
  dyld4::RuntimeState *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x23
  __int64 v15; // x0
  __int64 v16; // x9
  __int64 v17; // x9
  __int64 v18[4]; // [xsp+10h] [xbp-50h] BYREF

  v8 = *(_QWORD *)(result + 64) + a2;
  if ( *(_QWORD *)(result + 72) <= v8 )
  {
    v9 = (_QWORD *)result;
    if ( *(_QWORD *)(result + 80) > v8 )
    {
      v12 = *(dyld4::RuntimeState **)(result + 56);
      memset(v18, 0, sizeof(v18));
      dyld4::Loader::resolveSymbol(
        *(dyld4::Loader **)(result + 88),
        (Diagnostics *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 40LL),
        v12,
        a3,
        a5,
        a6,
        a7,
        0,
        v18);
      result = Diagnostics::noError((Diagnostics *)(*(_QWORD *)(v9[4] + 8LL) + 40LL));
      if ( (_DWORD)result )
      {
        v13 = (__int64)(v8 - v9[9]) >> 3;
        if ( v13 >= 0 )
          v14 = (__int64)(v8 - v9[9]) >> 3;
        else
          v14 = v13 + 1;
        v15 = dyld4::Loader::resolvedAddress(v12);
        v16 = *(_QWORD *)(v9[5] + 8LL);
        if ( *(_QWORD *)(v16 + 56) <= (unsigned __int64)(v14 >> 1) )
          ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_4_cold_2(v15);
        *(_QWORD *)(*(_QWORD *)(v16 + 40) + 32 * (v14 >> 1) + 16) = v15 + a8;
        v17 = *(_QWORD *)(v9[5] + 8LL);
        if ( *(_QWORD *)(v17 + 56) <= (unsigned __int64)(v14 >> 1) )
          ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_4_cold_1(v15);
        *(_QWORD *)(*(_QWORD *)(v17 + 40) + 32 * (v14 >> 1) + 24) = a5;
        return dyld4::RuntimeState::checkHiddenCacheAddr(
                 (__int64)v12,
                 v18[0],
                 v15 + a8,
                 (__int64)a5,
                 (__int64 *)(*(_QWORD *)(v9[6] + 8LL) + 40LL));
      }
    }
  }
  return result;
}
