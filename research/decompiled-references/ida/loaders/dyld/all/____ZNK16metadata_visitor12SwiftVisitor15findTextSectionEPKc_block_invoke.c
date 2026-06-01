double __fastcall ___ZNK16metadata_visitor12SwiftVisitor15findTextSectionEPKc_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v7; // x22
  double result; // d0
  __int64 v9; // x23
  __int64 Slide; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+8h] [xbp-48h] BYREF
  __int64 v13; // [xsp+18h] [xbp-38h]

  v7 = *(_QWORD *)(a1 + 40);
  if ( !_platform_strcmp(*(const char **)(a2 + 40), "__TEXT")
    && !_platform_strcmp(*(const char **)(a2 + 80), *(const char **)(a1 + 48)) )
  {
    v9 = *(_QWORD *)(a2 + 64);
    Slide = dyld3::MachOLoaded::getSlide(*(dyld3::MachOLoaded **)(v7 + 8));
    metadata_visitor::ResolvedValue::ResolvedValue(&v12, Slide + v9, *(_QWORD *)(a2 + 64), 1);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    if ( *(_BYTE *)(v11 + 72) )
      *(_BYTE *)(v11 + 72) = 0;
    *(_QWORD *)(v11 + 56) = v13;
    result = *(double *)&v12;
    *(_OWORD *)(v11 + 40) = v12;
    *(_QWORD *)(v11 + 64) = 0;
    *(_BYTE *)(v11 + 72) = 1;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL) = *(_QWORD *)(a2 + 72);
    *a4 = 1;
  }
  return result;
}
