double __fastcall ___ZN5dyld417PrebuiltLoaderSet13makeLaunchSetER11DiagnosticsRNS_12RuntimeStateERKNS_12MissingPathsE_block_invoke(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // x19
  __int64 v6; // x8
  __int64 v7; // x9
  __int128 v9; // [xsp+0h] [xbp-20h] BYREF

  *(_QWORD *)&v9 = __PAIR64__(a3, a2);
  dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef((unsigned __int64 *)&v9 + 1, *(Diagnostics **)(a1 + 40), a4);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  dyld3::OverflowSafeArray<dyld4::PrebuiltLoaderSet::CachePatch,4294967295ul>::verifySpace(v5 + 40, 1);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 56);
  *(_QWORD *)(v5 + 56) = v7 + 1;
  *(_OWORD *)(v6 + 16 * v7) = v9;
  return *(double *)&v9;
}
