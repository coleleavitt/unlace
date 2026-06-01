__int64 __fastcall ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_29(
        __int64 a1,
        int a2,
        const char *a3,
        __int64 a4,
        int a5,
        _BYTE *a6)
{
  dyld4::RuntimeState *v10; // x21
  const char *v11; // x0
  __int64 result; // x0
  __int64 v13; // x24
  __int64 v14; // x23
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23[4]; // [xsp+10h] [xbp-50h] BYREF

  memset(v23, 0, sizeof(v23));
  v10 = *(dyld4::RuntimeState **)(a1 + 64);
  dyld4::Loader::resolveSymbol(
    *(dyld4::Loader **)(a1 + 72),
    (Diagnostics *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL),
    v10,
    a2,
    a3,
    a5,
    0,
    0,
    v23);
  if ( Diagnostics::hasError((Diagnostics *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL)) )
  {
    v11 = (const char *)dyld4::Loader::path(*(dyld4::Loader **)(a1 + 72));
    result = dyld4::RuntimeState::log(v10, "warning could not apply interposing tuples in %s\n", v11);
    *a6 = 1;
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    v14 = dyld4::Loader::resolvedAddress(v10) + a4;
    v15 = dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace(v13 + 40, 1);
    v16 = *(_QWORD *)(v13 + 40);
    v17 = *(_QWORD *)(v13 + 56);
    *(_QWORD *)(v13 + 56) = v17 + 1;
    *(_QWORD *)(v16 + 8 * v17) = v14;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    v19 = *(_QWORD *)(v18 + 56);
    if ( !v19 )
      ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_29_cold_1(v15);
    dyld4::RuntimeState::checkHiddenCacheAddr(
      (__int64)v10,
      v23[0],
      *(_QWORD *)(*(_QWORD *)(v18 + 40) + 8 * v19 - 8),
      (__int64)a3,
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 40LL));
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    result = dyld3::OverflowSafeArray<char const*,4294967295ul>::verifySpace(v20 + 40, 1);
    v21 = *(_QWORD *)(v20 + 40);
    v22 = *(_QWORD *)(v20 + 56);
    *(_QWORD *)(v20 + 56) = v22 + 1;
    *(_QWORD *)(v21 + 8 * v22) = a3;
  }
  return result;
}
