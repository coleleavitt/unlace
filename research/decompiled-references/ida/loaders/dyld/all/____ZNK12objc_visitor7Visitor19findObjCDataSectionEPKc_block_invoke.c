double __fastcall ___ZNK12objc_visitor7Visitor19findObjCDataSectionEPKc_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v7; // x23
  const char *v8; // x22
  double result; // d0
  __int64 v10; // x22
  __int64 Slide; // x0
  __int64 v12; // x8
  __int64 v13; // x10
  __int128 v14; // [xsp+8h] [xbp-48h] BYREF
  __int64 v15; // [xsp+18h] [xbp-38h]

  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(const char **)(a2 + 40);
  if ( (!_platform_strcmp(v8, "__DATA") || !_platform_strcmp(v8, "__DATA_CONST")
                                        || !_platform_strcmp(v8, "__DATA_DIRTY"))
    && !_platform_strcmp(*(const char **)(a2 + 80), *(const char **)(a1 + 48)) )
  {
    v10 = *(_QWORD *)(a2 + 64);
    Slide = dyld3::MachOLoaded::getSlide(*(dyld3::MachOLoaded **)(v7 + 8));
    metadata_visitor::ResolvedValue::ResolvedValue(&v14, Slide + v10, *(_QWORD *)(a2 + 64), 1);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    if ( *(_BYTE *)(v12 + 72) )
      *(_BYTE *)(v12 + 72) = 0;
    v13 = *(_QWORD *)(a2 + 72);
    result = *(double *)&v14;
    *(_OWORD *)(v12 + 40) = v14;
    *(_QWORD *)(v12 + 56) = v15;
    *(_QWORD *)(v12 + 64) = v13;
    *(_BYTE *)(v12 + 72) = 1;
    *a4 = 1;
  }
  return result;
}
